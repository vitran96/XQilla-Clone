/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

/*

   implicit-timezone function

*/


#ifndef _FUNCTIONIMPLICITTIMEZONE_HPP
#define _FUNCTIONIMPLICITTIMEZONE_HPP

#include <xqilla/ast/XQFunction.hpp>

/** implicit-timezone function*/
class XQILLA_API FunctionImplicitTimezone : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionImplicitTimezone(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONIMPLICITTIMEZONE_HPP
