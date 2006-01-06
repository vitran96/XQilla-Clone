/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
 *     Parthenon Computing Ltd. All rights reserved.
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
 *
 * $Id$
 */

#ifndef _ATDATEORDERIVEDIMPL_HPP
#define _ATDATEORDERIVEDIMPL_HPP

#include <xercesc/util/XMLString.hpp>
#include <xqilla/items/ATDateOrDerived.hpp>
#include <xqilla/mapm/m_apm.h>

#include <xqilla/framework/XQillaExport.hpp>

class Timezone;
class ATDecimalOrDerived;
class ATDurationOrDerived;
class XPath2MemoryManager;
class DynamicContext;
class StaticContext;

class XQILLA_API ATDateOrDerivedImpl : public ATDateOrDerived 
{

public:

  /* constructor */
  ATDateOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const DynamicContext* context);

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

  /* returns true if the two objects represent the same date,
   * false otherwise */
  virtual bool equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const;

  /**
   * Returns true if and only if this date is greater than the given date. 
   * The order relation on date values is the order relation on their 
   * starting instants.
   */
  virtual bool greaterThan(const ATDateOrDerived::Ptr &date, const DynamicContext* context) const;

  /**
   * Returns true if and only if this date is less than the given date. 
   * The order relation on date values is the order relation on their
   * starting instants.
   */
  virtual bool lessThan(const ATDateOrDerived::Ptr &date, const DynamicContext* context) const;

  /** 
   * Returns an integer representing the year component  of this object
   */
  virtual const ATDecimalOrDerived::Ptr &getYears() const;

  /** 
   * Returns an integer representing the month component  of this object
   */
  virtual const ATDecimalOrDerived::Ptr &getMonths() const;

  /** 
   * Returns an integer representing the day component  of this object
   */
  virtual const ATDecimalOrDerived::Ptr &getDays() const;
  
  /**
   * Returns the timezone associated with this object, or
   * null, if the timezone is not set
   */
  virtual const Timezone::Ptr &getTimezone() const;
  
  /**
   * Returns true if the timezone is defined for this object, false otherwise.
   */
  virtual bool hasTimezone() const;

  /**
   * Setter for timezone.  Overrides the current timezone. (Not to be 
   * confused with addTimezone().
   */
  virtual ATDateOrDerived::Ptr setTimezone(const Timezone::Ptr &timezone, const DynamicContext* context) const;

  /**
   * Returns an ATDateOrDerived with a timezone added to it
   */
  virtual ATDateOrDerived::Ptr addTimezone(const ATDurationOrDerived::Ptr &timezone, const DynamicContext* context) const;
  
  /**
   * Returns a date with the given yearMonthDuration added to it
   */
  virtual ATDateOrDerived::Ptr addYearMonthDuration(const ATDurationOrDerived::Ptr &yearMonth,  const DynamicContext* context) const;

  /**
   * Returns a date with the given dayTimeDuration added to it
   */
  virtual ATDateOrDerived::Ptr addDayTimeDuration(const ATDurationOrDerived::Ptr &dayTime, const DynamicContext* context) const;
  
  /**
   * Returns a date with the given yearMonthDuration subtracted from it
   */
  virtual ATDateOrDerived::Ptr subtractYearMonthDuration(const ATDurationOrDerived::Ptr &yearMonth, const DynamicContext* context) const;

  /**
   * Returns a date with the given dayTimeDuration subtracted from it
   */
  virtual ATDateOrDerived::Ptr subtractDayTimeDuration(const ATDurationOrDerived::Ptr &dayTime, const DynamicContext* context) const;

  /**
   * Returns a dayTimeDuration corresponding to the difference between this
   * and the given ATDateOrDerived*
   */
  virtual ATDurationOrDerived::Ptr subtractDate(const ATDateOrDerived::Ptr &date, const DynamicContext* context) const;

  /* Get the primitive index associated with this type */
  static AnyAtomicType::AtomicObjectType getTypeIndex(); 
  
  /* Get the primitive type name */
  static const XMLCh* getPrimitiveName();
  
  /* Get the primitive index associated with this type */
  virtual AnyAtomicType::AtomicObjectType getPrimitiveTypeIndex() const;
  
protected:
  
  /* If possible, cast this type to the target type */
  virtual AnyAtomicType::Ptr castAsInternal(AtomicObjectType targetIndex, const XMLCh* targetURI, const XMLCh* targetType, const DynamicContext* context) const;

private:
  // private constructor for use with clone()
  ATDateOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const ATDecimalOrDerived::Ptr &YY, 
                      const ATDecimalOrDerived::Ptr &MM, const ATDecimalOrDerived::Ptr &DD, 
                      const Timezone::Ptr &timezone, bool hasTimezone);

  void setDate(const XMLCh* const date, const DynamicContext* context);

  /*The value of this date*/
  ATDecimalOrDerived::Ptr _YY;  // year
  ATDecimalOrDerived::Ptr _MM;  // month
  ATDecimalOrDerived::Ptr _DD;  // day
  
  /* the timezone associated with this ATDateOrDerived */
  Timezone::Ptr timezone_;
  
  /* true if the timezone is defined */
  bool _hasTimezone;

  /* the name of this type */
  const XMLCh* _typeName;

  /* the uri of this type */
  const XMLCh* _typeURI;
 
};

#endif // _ATDATEORDERIVEDIMPL_HPP
