/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#ifndef _FUNCTIONGETYEARFROMDATETIME_HPP
#define _FUNCTIONGETYEARFROMDATETIME_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQFunction.hpp>

/**
 * Getter function for the year component of dateTime.
 *
 * year-from-dateTime(dateTime $srcval) => integer
 */
class XQILLA_API FunctionYearFromDateTime : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  /**
   * Constructor.
   */
  FunctionYearFromDateTime(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  ASTNode* staticResolution(StaticContext *context);

  /**
   * Returns an integer representing the year component in the value of 
   * $srcval.
   */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONGETYEARFROMDATETIME_HPP



