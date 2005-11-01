/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

/*

  Empty function

*/

#ifndef _FUNCTIONEMPTY_HPP
#define _FUNCTIONEMPTY_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

class PATHAN_EXPORT FunctionEmpty : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionEmpty(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);

  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONEMPTY_HPP



