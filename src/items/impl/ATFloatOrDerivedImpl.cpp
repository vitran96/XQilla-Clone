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
#include <xqilla/items/impl/ATFloatOrDerivedImpl.hpp>
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

ATFloatOrDerivedImpl::
ATFloatOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const StaticContext* context)
  : typeName_(typeName),
    typeURI_(typeURI)
{
  setFloat(value);
}

ATFloatOrDerivedImpl::
ATFloatOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, float value)
  : value_(value),
    typeName_(typeName),
    typeURI_(typeURI)
{
}

void *ATFloatOrDerivedImpl::getInterface(const XMLCh *name) const
{
  if(name == Item::gXQilla) {
    return (void*)this;
  }
  return 0;
}

/* Get the name of the primitive type (basic type) of this type
 * (ie "decimal" for xs:decimal) */
const XMLCh* ATFloatOrDerivedImpl::getPrimitiveTypeName() const {
  return this->getPrimitiveName();
}

const XMLCh* ATFloatOrDerivedImpl::getPrimitiveName()  {
  return SchemaSymbols::fgDT_FLOAT;
}

/* Get the name of this type  (ie "integer" for xs:integer) */
const XMLCh* ATFloatOrDerivedImpl::getTypeName() const {
  return typeName_;
}

/* Get the namespace URI for this type */
const XMLCh* ATFloatOrDerivedImpl::getTypeURI() const {
  return typeURI_; 
}

AnyAtomicType::AtomicObjectType ATFloatOrDerivedImpl::getTypeIndex()
{
  return AnyAtomicType::FLOAT;
} 

const XMLCh* ATFloatOrDerivedImpl::asString(const DynamicContext* context) const
{
  return asString(value_, context);
}

static inline bool isInteger(float v)
{
  float tmp;
  return ::modff(v, &tmp) == 0.0;
}

const XMLCh* ATFloatOrDerivedImpl::asString(float v, const DynamicContext* context)
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
  float absVal = ::fabsf(v);
  if(absVal < 1000000.0 && absVal >= 0.000001) {
    if(::isInteger(v)) {
      ::snprintf(obuf, sizeof(obuf), "%.f", (double)v);
    } else {
      ::snprintf(obuf, sizeof(obuf), "%.7f", (double)v);
      char *p = strchr(obuf, '.');
      if(p) {
        // Remove trailing '0' in the fractional part
        p = obuf + strlen(obuf);
        while(p > obuf+2 && p[-1] == '0' && p[-2] != '.') --p;
        *p = 0;
      }
    }
  } else {
    ::snprintf(obuf, sizeof(obuf), "%.7E", (double)v);
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
Numeric::Ptr ATFloatOrDerivedImpl::promoteTypeIfApplicable(AnyAtomicType::AtomicObjectType typeIndex,
                                                            const DynamicContext* context) const
{
  switch(typeIndex) {
  case AnyAtomicType::FLOAT:
    return this;
  case AnyAtomicType::DOUBLE:
    return (Numeric::Ptr)castAs(typeIndex, context);
  default:
    break;
  }
  return 0;
}

MAPM ATFloatOrDerivedImpl::asMAPM() const
{
  switch(getState()) {
  case NaN:
  case INF:
  case NEG_INF: return 0;
  case NEG_NUM:
  case NUM:
    break;
  }
  return MAPM((double)value_);
}

Numeric::State ATFloatOrDerivedImpl::getState() const
{
  return getState(value_);
}

Numeric::State ATFloatOrDerivedImpl::getState(float v)
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

bool ATFloatOrDerivedImpl::equals(const AnyAtomicType::Ptr &other, const DynamicContext* context) const
{
  if(!other->isNumericValue())
    XQThrow2(::IllegalArgumentException,X("Numeric::equals"),
	    X("Equality operator for given types not supported [err:XPTY0004]"));
  if (other->getPrimitiveTypeIndex() == AnyAtomicType::DOUBLE)
    return asDouble() == ((Numeric*)other.get())->asDouble();
  return value_ == ((Numeric*)other.get())->asFloat();
}

bool ATFloatOrDerivedImpl::lessThan(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(!other->isNumericValue())
    XQThrow2(::IllegalArgumentException,X("Numeric::equals"),
	    X("Equality operator for given types not supported [err:XPTY0004]"));
  if (other->getPrimitiveTypeIndex() == AnyAtomicType::DOUBLE)
    return asDouble() < ((Numeric*)other.get())->asDouble();
  return value_ < ((Numeric*)other.get())->asFloat();
}

bool ATFloatOrDerivedImpl::greaterThan(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(!other->isNumericValue())
    XQThrow2(::IllegalArgumentException,X("Numeric::equals"),
	    X("Equality operator for given types not supported [err:XPTY0004]"));
  if (other->getPrimitiveTypeIndex() == AnyAtomicType::DOUBLE)
    return asDouble() > ((Numeric*)other.get())->asDouble();
  return value_ > ((Numeric*)other.get())->asFloat();
}

Numeric::Ptr ATFloatOrDerivedImpl::add(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(other->getPrimitiveTypeIndex() == AnyAtomicType::DECIMAL) {
    // if other is a decimal, promote it to xs:float
    return this->add((const Numeric::Ptr )other->castAs(this->getPrimitiveTypeIndex(), context), context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::DOUBLE) {
    // if other is a double, promote this to xs:double
    return ((const Numeric::Ptr )this->castAs(other->getPrimitiveTypeIndex(), context))->add(other, context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::FLOAT) {
    // if both are of the same type exactly, we can perform addition
    return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_FLOAT, value_ + other->asFloat());
  } else {
    assert(false); // should never get here, numeric types are xs:decimal, xs:float, xs:integer and xs:double
    return 0;
  } 
}

Numeric::Ptr ATFloatOrDerivedImpl::subtract(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(other->getPrimitiveTypeIndex() == AnyAtomicType::DECIMAL) {
    // if other is a decimal, promote it to xs:float
    return this->subtract((const Numeric::Ptr )other->castAs(this->getPrimitiveTypeIndex(), context), context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::DOUBLE) {
    // if other is a double, promote this to xs:double
    return ((const Numeric::Ptr )this->castAs(other->getPrimitiveTypeIndex(), context))->subtract(other, context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::FLOAT) {
    // if both are of the same type exactly, we can perform subtraction
    return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_FLOAT, value_ - other->asFloat());
  } else {
    assert(false); // should never get here, numeric types are xs:decimal, xs:float, xs:integer and xs:double
    return 0;
  }
}

Numeric::Ptr ATFloatOrDerivedImpl::multiply(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(other->getPrimitiveTypeIndex() == AnyAtomicType::DECIMAL) {
    // if other is a decimal, promote it to xs:float
    return this->multiply((const Numeric::Ptr )other->castAs(this->getPrimitiveTypeIndex(), context), context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::DOUBLE) {
    // if other is a double, promote this to xs:double
    return ((const Numeric::Ptr )this->castAs(other->getPrimitiveTypeIndex(), context))->multiply(other, context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::FLOAT) {
    // if both are of the same type, we can perform multiplication
    return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_FLOAT, value_ * other->asFloat());
  } else {
    assert(false); // should never get here, numeric types are xs:decimal, xs:float, xs:integer and xs:double
    return 0;
  }
}

Numeric::Ptr ATFloatOrDerivedImpl::divide(const Numeric::Ptr &other, const DynamicContext* context) const
{
    if(other->getPrimitiveTypeIndex() == AnyAtomicType::DECIMAL) {
    // if other is a decimal, promote it to xs:float
    return this->divide((const Numeric::Ptr )other->castAs(this->getPrimitiveTypeIndex(), context), context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::DOUBLE) {
    // if other is a double, promote this to xs:double
    return ((const Numeric::Ptr )this->castAs(other->getPrimitiveTypeIndex(), context))->divide(other, context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::FLOAT) {
    // if both are of the same type, we can perform division
    return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_FLOAT, value_ / other->asFloat());
  } else {
    assert(false); // should never get here, numeric types are xs:decimal, xs:float, xs:integer and xs:double
    return 0;
  }
}

Numeric::Ptr ATFloatOrDerivedImpl::mod(const Numeric::Ptr &other, const DynamicContext* context) const
{
  if(other->getPrimitiveTypeIndex() == AnyAtomicType::DECIMAL) {
    // if other is a decimal, promote it to xs:float
    return this->mod((const Numeric::Ptr )other->castAs(this->getPrimitiveTypeIndex(), context), context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::DOUBLE) {
    // if other is a double, promote this to xs:double
    return ((const Numeric::Ptr )this->castAs(other->getPrimitiveTypeIndex(), context))->mod(other, context);
  } else if (other->getPrimitiveTypeIndex() == AnyAtomicType::FLOAT) {
    // if both are of the same type, we can perform mod
    return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_FLOAT, ::fmodf(value_, other->asFloat()));
  } else {
    assert(false); // should never get here, numeric types are xs:decimal, xs:float, xs:integer and xs:double
    return 0;
  }
}

Numeric::Ptr ATFloatOrDerivedImpl::power(const Numeric::Ptr &other, const DynamicContext* context) const
{
  switch(other->getPrimitiveTypeIndex()) {
  case DECIMAL:
    // if other is a decimal, promote it to xs:float
    return power(context->getItemFactory()->createFloat(other->asFloat(), context), context);
  case FLOAT:
    return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
      SchemaSymbols::fgDT_FLOAT, ::powf(value_,other->asFloat()));
  case DOUBLE:
    return ((Numeric*)this->castAs(DOUBLE, context).get())->power(other, context);
  default: assert(false); return 0; // Shouldn't happen
  }
}

Numeric::Ptr ATFloatOrDerivedImpl::floor(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::floorf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::ceiling(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::ceilf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::round(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::roundf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::roundHalfToEven(const Numeric::Ptr &precision, const DynamicContext* context) const
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
  
  float exp = ::powf(10.0, precision->asFloat());
  float val = value_ * exp;

  // check if we're rounding on a half value 
  bool halfVal = false;
  if((val-0.5) == ::floorf(val))
    halfVal = true;

  val = value_ * exp + 0.5;
  val = ::floorf(val);

  // if halfVal make sure what we return has the least significant digit even
  if(halfVal && ::fmodf(val, 2) == 1)
      val = val - 1;
  val = val / exp;

  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, val);
}

Numeric::Ptr ATFloatOrDerivedImpl::invert(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, -value_);
}

Numeric::Ptr ATFloatOrDerivedImpl::abs(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::fabsf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::sqrt(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::sqrtf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::sin(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::sinf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::cos(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::cosf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::tan(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::tanf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::asin(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::asinf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::acos(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::acosf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::atan(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::atanf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::log(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::logf(value_));
}

Numeric::Ptr ATFloatOrDerivedImpl::exp(const DynamicContext* context) const
{
  return new ATFloatOrDerivedImpl(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT, ::expf(value_));
}

bool ATFloatOrDerivedImpl::isZero() const
{
  return value_ == 0.0;
}

bool ATFloatOrDerivedImpl::isNegative() const
{
  return isNegative(value_);
}

bool ATFloatOrDerivedImpl::isNegative(float v)
{
#if defined(WIN32)
  return _copysign(1.0, (double)v) < 0;
#else
  return copysignf(1.0, v) < 0;
#endif
}

bool ATFloatOrDerivedImpl::isPositive() const
{
  return !isNegative(value_);
}

bool ATFloatOrDerivedImpl::isNaN() const
{
  return value_ != value_;
}

bool ATFloatOrDerivedImpl::isInfinite() const
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

bool ATFloatOrDerivedImpl::isInteger() const
{
  return ::isInteger(value_);
}

float ATFloatOrDerivedImpl::parseFloat(const XMLCh* const value)
{
  if(value == NULL)
    return numeric_limits<float>::quiet_NaN();
  else if(XPath2Utils::equals(value, Numeric::NegINF_string))
    return -std::numeric_limits<float>::infinity();
  else if(XPath2Utils::equals(value, Numeric::INF_string))
    return std::numeric_limits<float>::infinity();
  return (float)::atof(UTF8(value));
}

void ATFloatOrDerivedImpl::setFloat(const XMLCh* const value)
{
  value_ = parseFloat(value);
}
