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

/*
  Compare function
*/

#ifndef _FUNCTIONCOMPARE_HPP
#define _FUNCTIONCOMPARE_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

class XQILLA_API FunctionCompare : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionCompare(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONCOMPARE_HPP
