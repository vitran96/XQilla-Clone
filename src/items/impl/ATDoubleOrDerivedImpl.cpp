/*
 * Copyright (c) 2001, 2008,
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004, 2011,
 *     Oracle and/or its affiliates. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "../../config/xqilla_config.h"
#include <xqilla/items/impl/ATDoubleOrDerivedImpl.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/utils/UTF8Str.hpp>

#include <assert.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <limits>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif
using namespace std;

ATDoubleOrDerivedImpl::
ATDoubleOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const StaticContext* context)
  : typeName_(typeName),
    typeURI_(typeURI)
{
  setDouble(value);
}

ATDoubleOrDerivedImpl::
ATDoubleOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, double value)
  : value_(value),
    typeName_(typeName),
    typeURI_(typeURI)
{
}

void *ATDoubleOrDerivedImpl::getInterface(const XMLCh *name) const
{
  if(name == Item::gXQilla) {
    return (void*)this;
  }
  return 0;
}

/* Get the name of the primitive type (basic type) of this type
 * (ie "decimal" for xs:decimal) */
const XMLCh* ATDoubleOrDerivedImpl::getPrimitiveTypeName() const {
  return this->getPrimitiveName();
}

const XMLCh* ATDoubleOrDerivedImpl::getPrimitiveName()  {
  return SchemaSymbols::fgDT_DOUBLE;
}

/* Get the name of this type  (ie "integer" for xs:integer) */
const XMLCh* ATDoubleOrDerivedImpl::getTypeName() const {
  return typeName_;
}

/* Get the namespace URI for this type */
const XMLCh* ATDoubleOrDerivedImpl::getTypeURI() const {
  return typeURI_; 
}

AnyAtomicType::AtomicObjectType ATDoubleOrDerivedImpl::getTypeIndex()
{
  return AnyAtomicType::DOUBLE;
} 

const XMLCh* ATDoubleOrDerivedImpl::asString(const DynamicContext* context) const
{
  return asString(value_, context);
}

static inline bool isInteger(double v)
{
  double tmp;
  return ::modf(v, &tmp) == 0.0;
}

const XMLCh* ATDoubleOrDerivedImpl::asString(double v, const DynamicContext* context)
{
  switch(getState(v)) {
  case NaN:     return NaN_string;
  case INF:     return INF_string;
  case NEG_INF: return NegINF_string;
  case NEG_NUM:
    if(v == 0) return NegZero_string;
    break;
  case NUM:
    if(v == 0) return PosZero_string;
    break;
  }

  char obuf[1024];
  double absVal = ::fabs(v);
  if(absVal < 1000000.0 && absVal >= 0.000001) {
    if(::isInteger(v)) {
      ::snprintf(obuf, sizeof(obuf), "%.f", (double)v);
    } else {
      ::snprintf(obuf, sizeof(obuf), "%.16f", (double)v);
      char *p = strchr(obuf, '.');
      if(p) {
        // Remove trailing '0' in the fractional part
        p = obuf + strlen(obuf);
        while(p > obuf+2 && p[-1] == '0' && p[-2] != '.') --p;
        *p = 0;
      }
    }
  } else {
    ::snprintf(obuf, sizeof(obuf), "%.16E", v);
    char *p = strchr(obuf, 'E');
    if(p) {
      // Remove trailing '0' from the mantissa
      char *dest = p;
      while(dest > obuf+2 && dest[-1] == '0' && dest[-2] != '.') --dest;

      // Remove the exponent's "+" sign, and leading '0'
      ++p;
      if(p[0] == '+') ++p;
      if(p[0] == '0' && p[1] != 0) ++p;

      *dest = 'E';
      for(++dest;; ++dest,++p) {
        *dest = *p;
        if(*p == 0) break;
      }
    }
  }

  return context->getMemoryManager()->getPooledString(obuf);
}

/* Promote this to the given type, if possible */
Numeric::Ptr ATDoubleOrDerivedImpl::promoteTypeIfApplicable(AnyAtomicType::AtomicObjectType typeIndex,
                                                            const DynamicContext* context) const
{
  switch(typeIndex) {
  case AnyAtomicType::DOUBLE:
    return this;
  default:
    break;
  }
  return 0;
}

MAPM ATDoubleOrDerivedImpl::asMAPM() const
{
  switch(getState()) {
  case NaN:
  case INF:
  case NEG_INF: return 0;
  case NEG_NUM:
  case NUM:
    break;
  }
  return MAPM(value_);
}

Numeric::State ATDoubleOrDerivedImpl::getState() const
{
  return getState(value_);
}

Numeric::State ATDoubleOrDerivedImpl::getState(double v)
{
#if defined(WIN32)
  switch(_fpclass(v)) {
  case _FPCLASS_NZ:
  case _FPCLASS_ND:
  case _FPCLASS_NN: return NEG_NUM;
  case _FPCLASS_PZ:
  case _FPCLASS_PD:
  case _FPCLASS_PN: return NUM;
  case _FPCLASS_PINF: return INF;
  case _FPCLASS_NINF: return NEG_INF;
  case _FPCLASS_QNAN:
  case _FPCLASS_SNAN:
  default: return NaN;
  }
#else
  switch(fpclassify(v)) {
  case FP_ZERO:
  case FP_SUBNORMAL:
  case FP_NORMAL: return isNegative(v) ? NEG_NUM : NUM;
  case FP_INFINITE: return isNegative(v) ? NEG_INF : INF;
  case FP_NAN:
  default: return NaN;
  }
#endif
}

bool ATDoubleOrDerivedImpl::equals(const AnyAtomicType::Ptr &other, const DynamicContext* context) const
{
  if(!other->isNumericValue())
    XQThrow2(::IllegalArgumentException,X("Numeric::equals"),
	    X("Equality operator for given types not supported [err:XPTY0004]"));
  return value_ == ((Numeric*)other.get())->asDouble();
}

bool ATDoubleOrDerivedImpl::lessThan(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(!other->isNumericValue())
    XQThrow2(::IllegalArgumentException,X("Numeric::equals"),
	    X("Equality operator for given types not supported [err:XPTY0004]"));
  return value_ < ((Numeric*)other.get())->asDouble();
}

bool ATDoubleOrDerivedImpl::greaterThan(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(!other->isNumericValue())
    XQThrow2(::IllegalArgumentException,X("Numeric::equals"),
	    X("Equality operator for given types not supported [err:XPTY0004]"));
  return value_ > ((Numeric*)other.get())->asDouble();
}

Numeric::Ptr ATDoubleOrDerivedImpl::add(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(AnyAtomicType::DOUBLE == other->getPrimitiveTypeIndex()) {
    // if both are of the same type exactly, we can perform addition
    return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_DOUBLE, value_ + other->asDouble());
  } else {
    // TBD Could be more efficient - jpcs
    // if other is not a double, then we need to promote it to a double
    return this->add((const Numeric::Ptr )other->castAs(AnyAtomicType::DOUBLE, context), context);
  } 
}

Numeric::Ptr ATDoubleOrDerivedImpl::subtract(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(AnyAtomicType::DOUBLE == other->getPrimitiveTypeIndex()) {
    // if both are of the same type exactly, we can perform subtraction
    return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_DOUBLE, value_ - other->asDouble());
  } else {
    // if other is not a double, then we need to promote it to a double
    return this->subtract((const Numeric::Ptr )other->castAs(AnyAtomicType::DOUBLE, context), context);
  } 
}

Numeric::Ptr ATDoubleOrDerivedImpl::multiply(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(AnyAtomicType::DOUBLE == other->getPrimitiveTypeIndex()) {
    // if both are of the same type, we can perform multiplication
    return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_DOUBLE, value_ * other->asDouble());
  } else {
    // if other is not a double, then we need to promote it to a double
    return this->multiply((const Numeric::Ptr )other->castAs(AnyAtomicType::DOUBLE, context), context);
  } 
}

Numeric::Ptr ATDoubleOrDerivedImpl::divide(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(AnyAtomicType::DOUBLE == other->getPrimitiveTypeIndex()) {
    // if both are of the same type, we can perform division
    return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_DOUBLE, value_ / other->asDouble());
  } else {
    // if other is not a double, then we need to promote it to a double
    return this->divide((const Numeric::Ptr )other->castAs(AnyAtomicType::DOUBLE, context), context);
  } 
}

Numeric::Ptr ATDoubleOrDerivedImpl::mod(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(AnyAtomicType::DOUBLE == other->getPrimitiveTypeIndex()) {
    // if both are of the same type, we can perform mod
    return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_DOUBLE, ::fmod(value_, other->asDouble()));
  } else {
    // if other is not a double, then we need to promote it to a double
    return this->mod((const Numeric::Ptr )other->castAs(AnyAtomicType::DOUBLE, context), context);
  } 
}

Numeric::Ptr ATDoubleOrDerivedImpl::power(const Numeric::Ptr &other, const DynamicContext* context) const
{
  switch(other->getPrimitiveTypeIndex()) {
  case DECIMAL:
  case FLOAT:
    return power((Numeric*)other->castAs(DOUBLE, context).get(), context);
  case DOUBLE: {
    return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_DOUBLE, ::pow(value_,other->asDouble()));
  }
  default: assert(false); return 0; // Shouldn't happen
  }
}

Numeric::Ptr ATDoubleOrDerivedImpl::floor(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::floor(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::ceiling(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::ceil(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::round(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::round(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::roundHalfToEven(const Numeric::Ptr &precision, const DynamicContext* context) const
{
  switch(getState()) {
  case NaN:
  case INF:
  case NEG_INF: return this;
  case NEG_NUM:
  case NUM: break;
  }
 
  if(isZero() && isNegative())
    return this;
  
  double exp = ::pow(10.0, precision->asDouble());
  double val = value_ * exp;

  // check if we're rounding on a half value 
  bool halfVal = false;
  if((val-0.5) == ::floor(val))
    halfVal = true;

  val = value_ * exp + 0.5;
  val = ::floor(val);

  // if halfVal make sure what we return has the least significant digit even
  if(halfVal && ::fmod(val, 2) == 1)
      val = val - 1;
  val = val / exp;

  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, val);
}

Numeric::Ptr ATDoubleOrDerivedImpl::invert(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, -value_);
}

Numeric::Ptr ATDoubleOrDerivedImpl::abs(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::fabs(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::sqrt(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::sqrt(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::sin(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::sin(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::cos(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::cos(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::tan(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::tan(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::asin(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::asin(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::acos(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::acos(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::atan(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::atan(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::log(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::log(value_));
}

Numeric::Ptr ATDoubleOrDerivedImpl::exp(const DynamicContext* context) const
{
  return new ATDoubleOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE, ::exp(value_));
}

bool ATDoubleOrDerivedImpl::isZero() const
{
  return value_ == 0.0;
}

bool ATDoubleOrDerivedImpl::isNegative() const
{
  return isNegative(value_);
}

bool ATDoubleOrDerivedImpl::isNegative(double v)
{
#if defined(WIN32)
  return _copysign(1.0, v) < 0;
#else
  return copysign(1.0, v) < 0;
#endif
}

bool ATDoubleOrDerivedImpl::isPositive() const
{
  return !isNegative(value_);
}

bool ATDoubleOrDerivedImpl::isNaN() const
{
  return value_ != value_;
}

bool ATDoubleOrDerivedImpl::isInfinite() const
{
  switch(getState()) {
  case INF:
  case NEG_INF: return true;
  case NaN:
  case NEG_NUM:
  case NUM: break;
  }
  return false;
}

bool ATDoubleOrDerivedImpl::isInteger() const
{
  return ::isInteger(value_);
}

void ATDoubleOrDerivedImpl::setDouble(const XMLCh* const value)
{
  if(value == NULL) {
    value_ = numeric_limits<double>::quiet_NaN();
  }
  else if(XPath2Utils::equals(value, Numeric::NegINF_string)) {
    value_ = -std::numeric_limits<double>::infinity();
  }
  else if(XPath2Utils::equals(value, Numeric::INF_string)) {
    value_ = std::numeric_limits<double>::infinity();
  }
  else {
    value_ = ::atof(UTF8(value));
  }
}
