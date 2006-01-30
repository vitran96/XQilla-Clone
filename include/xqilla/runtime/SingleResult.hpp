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

#ifndef _SINGLERESULT_HPP
#define _SINGLERESULT_HPP

#include <xqilla/runtime/ResultImpl.hpp>

/** A reference counting wrapper for the lazily evaluated query result */
class XQILLA_API SingleResult : public ResultImpl
{
public:
  SingleResult();

  virtual Item::Ptr next(DynamicContext *context);

  virtual Item::Ptr getSingleResult(DynamicContext *context) const = 0;

private:
  bool toDo_;
};

#endif
