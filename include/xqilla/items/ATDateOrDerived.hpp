/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef _ATDATEORDERIVED_HPP
#define _ATDATEORDERIVED_HPP

#include <xercesc/util/XMLString.hpp>
#include <xqilla/items/DateOrTimeType.hpp>

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>

class XQILLA_API ATDateOrDerived : public DateOrTimeType
{
public:
  typedef RefCountPointer<const ATDateOrDerived> Ptr;

  /* Get the name of the primitive type (basic type) of this type
   * (ie "decimal" for xs:decimal) */
  virtual const XMLCh* getPrimitiveTypeName() const = 0;

  /* Get the namespace URI for this type */
  virtual const XMLCh* getTypeURI() const = 0;

  /* Get the name of this type  (ie "integer" for xs:integer) */
  virtual const XMLCh* getTypeName() const = 0;

  /* returns the XMLCh* (lexical) representation of this type */
  virtual const XMLCh* asString(const DynamicContext* context) const = 0;

  /* returns true if the two objects represent the same date,
   * false otherwise */
  virtual bool equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const = 0;

  /** Returns less than 0 if this is less that other,
      0 if they are the same, and greater than 0 otherwise */
  virtual int compare(const ATDateOrDerived::Ptr &other, const DynamicContext *context) const = 0;
 
  /** 
   * Returns an integer representing the year component  of this object
   */
  virtual ATDecimalOrDerived::Ptr getYears(const DynamicContext *context) const = 0;

  /** 
   * Returns an integer representing the month component  of this object
   */
  virtual ATDecimalOrDerived::Ptr getMonths(const DynamicContext *context) const = 0;

  /** 
   * Returns an integer representing the day component  of this object
   */
  virtual ATDecimalOrDerived::Ptr getDays(const DynamicContext *context) const = 0;

  /** 
   * Returns a timezone object representing the timezone component of this object
   */
  virtual const Timezone::Ptr &getTimezone() const = 0;

  /**
   * Returns true if the timezone is defined for this object, false otherwise.
   */
  virtual bool hasTimezone() const = 0;

  /**
   * Setter for timezone.  Overrides the current timezone. (Not to be 
   * confused with addTimezone().
   */
  virtual ATDateOrDerived::Ptr setTimezone(const Timezone::Ptr &timezone, const DynamicContext* context) const = 0;

  /**
   * Returns an ATDateOrDerived with a timezone added to it
   */
  virtual ATDateOrDerived::Ptr addTimezone(const ATDurationOrDerived::Ptr &timezone,
                                           const DynamicContext* context) const = 0;

  /**
   * Returns a date with the given yearMonthDuration added to it
   */
  virtual ATDateOrDerived::Ptr addYearMonthDuration(const ATDurationOrDerived::Ptr &yearMonth,
                                                    const DynamicContext* context) const = 0;

  /**
   * Returns a date with the given dayTimeDuration added to it
   */
  virtual ATDateOrDerived::Ptr addDayTimeDuration(const ATDurationOrDerived::Ptr &dayTime,  const DynamicContext* context) const = 0;
  
  /**
   * Returns a date with the given yearMonthDuration subtracted from it
   */
  virtual ATDateOrDerived::Ptr subtractYearMonthDuration(const ATDurationOrDerived::Ptr &yearMonth,
                                                         const DynamicContext* context) const = 0;

  /**
   * Returns a date with the given dayTimeDuration subtracted from it
   */
  virtual ATDateOrDerived::Ptr subtractDayTimeDuration(const ATDurationOrDerived::Ptr &dayTime,
                                                       const DynamicContext* context) const = 0;
  /**
   * Returns a dayTimeDuration corresponding to the difference between this
   * and the given ATDateOrDerived*
   */
  virtual ATDurationOrDerived::Ptr subtractDate(const ATDateOrDerived::Ptr &date,  const DynamicContext* context) const = 0;

  virtual AnyAtomicType::AtomicObjectType getPrimitiveTypeIndex() const = 0;
};

#endif //  _ATDATEORDERIVED_HPP
