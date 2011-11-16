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

#ifndef _ATFLOATORDERIVEDIMPL_HPP
#define _ATFLOATORDERIVEDIMPL_HPP

#include <xercesc/util/XercesDefs.hpp>
#include <xqilla/items/ATFloatOrDerived.hpp>
#include <xqilla/mapm/m_apm.h>

#include <xqilla/framework/XQillaExport.hpp>

class XQILLA_API ATFloatOrDerivedImpl : public ATFloatOrDerived 
{
public:
  ATFloatOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const StaticContext* context);
  ATFloatOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, float value);

  virtual void *getInterface(const XMLCh *name) const;

  /* Get the name of the primitive type (basic type) of this type
   * (ie "decimal" for xs:decimal) */
  virtual const XMLCh* getPrimitiveTypeName() const;

  /* Get the namespace URI for this type */
  virtual const XMLCh* getTypeURI() const;

  /* Get the name of this type  (ie "integer" for xs:integer) */
  virtual const XMLCh* getTypeName() const;

  /* returns the XMLCh* (canonical) representation of this type */
  virtual const XMLCh* asString(const DynamicContext* context) const;

  /* Promote this to the given type, if possible */
  virtual Numeric::Ptr promoteTypeIfApplicable(AnyAtomicType::AtomicObjectType typeIndex,
                                               const DynamicContext* context) const;
  
  virtual bool equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const;
  virtual bool lessThan(const Numeric::Ptr &other, const DynamicContext* context) const;
  virtual bool greaterThan(const Numeric::Ptr &other, const DynamicContext* context) const;

  /** Returns a Numeric object which is the sum of this and other */
  virtual Numeric::Ptr add(const Numeric::Ptr &other, const DynamicContext* context) const;

  /** Returns a Numeric object which is the difference of this and
   * other */
  virtual Numeric::Ptr subtract(const Numeric::Ptr &other, const DynamicContext* context) const;

  /** Returns a Numeric object which is the product of this and other */
  virtual Numeric::Ptr multiply(const Numeric::Ptr &other, const DynamicContext* context) const;

  /** Returns a Numeric object which is the quotient of this and other */
  virtual Numeric::Ptr divide(const Numeric::Ptr &other, const DynamicContext* context) const;

  /** Returns the arithmetic product of its operands as a Numeric */
  virtual Numeric::Ptr mod(const Numeric::Ptr &other, const DynamicContext* context) const;

  /** Returns the floor of this Numeric */
  virtual Numeric::Ptr floor(const DynamicContext* context) const;

  /** Returns the ceiling of this Numeric */
  virtual Numeric::Ptr ceiling(const DynamicContext* context) const;

  /** Rounds this Numeric */
  virtual Numeric::Ptr round(const DynamicContext* context) const;

  /** Rounds this Numeric to the given precision, and rounds a half to even */
  virtual Numeric::Ptr roundHalfToEven(const Numeric::Ptr &precision, const DynamicContext* context) const;
 
  /** Returns the Additive inverse of this Numeric */
  virtual Numeric::Ptr invert(const DynamicContext* context) const;

  /** Returns the absolute value of this Numeric */
  virtual Numeric::Ptr abs(const DynamicContext* context) const;

  /** Returns the square root of this Numeric */
  virtual Numeric::Ptr sqrt(const DynamicContext* context) const;
  
  /** Returns the sinus of this Numeric */
  virtual Numeric::Ptr sin(const DynamicContext* context) const;
  
  /** Returns the cosinus of this Numeric */
  virtual Numeric::Ptr cos(const DynamicContext* context) const;

  /** Returns the tangens of this Numeric */
  virtual Numeric::Ptr tan(const DynamicContext* context) const;

  /** Returns the arcsinus of this Numeric */
  virtual Numeric::Ptr asin(const DynamicContext* context) const;

  /** Returns the arccosinux of this Numeric */
  virtual Numeric::Ptr acos(const DynamicContext* context) const;

  /** Returns the arctangens of this Numeric */
  virtual Numeric::Ptr atan(const DynamicContext* context) const;

  /** Returns the ln of this Numeric */
  virtual Numeric::Ptr log(const DynamicContext* context) const;

  /** Returns the exp of this Numeric */
  virtual Numeric::Ptr exp(const DynamicContext* context) const;

  virtual Numeric::Ptr power(const Numeric::Ptr &other, const DynamicContext* context) const;

  /** Does this Numeric have value 0? */
  virtual bool isZero() const;
  
  /** Is this Numeric negative? */
  virtual bool isNegative() const;

  /** Is this Numeric positive? */
  virtual bool isPositive() const;  
  
  /* Is this xs:float not a number */
  virtual bool isNaN() const;

  /* Is this xs:float infinite? */
  virtual bool isInfinite() const;
  virtual bool isInteger() const;

  /* Get the primitive index associated with this type */
  static AnyAtomicType::AtomicObjectType getTypeIndex(); 

  /* Get the primitive type name */
  static const XMLCh* getPrimitiveName();

  virtual MAPM asMAPM() const;
  virtual State getState() const;

  virtual double asDouble() const { return (double)value_; }
  virtual float asFloat() const { return value_; }
  virtual int asInt() const { return (int)value_; }

  static bool isNegative(float v);
  static State getState(float v);
  static const XMLCh* asString(float v, const DynamicContext *context);

private:
  /* set the value of this decimal */
  void setFloat(const XMLCh* const value);

  /*The value of this float*/
  float value_;

  /* the name of this type */
  const XMLCh* typeName_;

  /* the uri of this type */
  const XMLCh* typeURI_; 
};

#endif
