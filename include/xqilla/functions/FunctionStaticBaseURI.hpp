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
   static-base-uri function
*/

#ifndef _FUNCTIONSTATICBASEURI_HPP
#define _FUNCTIONSTATICBASEURI_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQFunction.hpp>

class XQILLA_API FunctionStaticBaseURI : public XQFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionStaticBaseURI(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  Sequence createSequence(DynamicContext* context, int flags=0) const;
};

#endif
