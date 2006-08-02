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

#ifndef _FTRANGE_HPP
#define _FTRANGE_HPP

class ASTNode;

class XQILLA_API FTRange
{
public:
  enum Type {
    EXACTLY,
    AT_LEAST,
    AT_MOST,
    FROM_TO
  };

  Type type;
  ASTNode *arg1, *arg2;
};

#endif
