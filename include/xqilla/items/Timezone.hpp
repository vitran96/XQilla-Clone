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

#ifndef _TZONE_HPP
#define _TZONE_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/framework/ReferenceCounted.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/mapm/m_apm.h>

#include <xercesc/util/XercesDefs.hpp>

class DynamicContext;

class XQILLA_API Timezone : public ReferenceCounted
{
public :
  typedef RefCountPointer<const Timezone> Ptr;

  /**
   * Constructor. Creates a Timezone representing the given number of seconds.
   */
  Timezone(const MAPM &seconds);

  /**
   * Constructor. Creates a Timezone representing the given duration.
   */
  Timezone(const ATDurationOrDerived::Ptr &duration, const DynamicContext* context);

  /** Returns true if other is equal to this, 
   * false otherwise 
   */
  bool equals(const Timezone::Ptr &other) const;

  ATDurationOrDerived::Ptr asDayTimeDuration(const DynamicContext* context) const;
  
  /**
   * Returns a string representation of this Timezone.  If positive, does
   * print leading '+' sign, and if UTC returns "Z".
   */
  const XMLCh* asString(const DynamicContext* context) const;

  /**
   * Returns the whole timezone expressed in seconds
   */
  const MAPM &asSeconds() const { return seconds_; }

  static MAPM convert(bool positive, int hour, int minute);

private:
  MAPM seconds_;

  void validate() const;
};

#endif // _TZONE_HPP


