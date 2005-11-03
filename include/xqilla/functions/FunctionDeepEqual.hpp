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
  Deep-equal funcion
*/

#ifndef _FUNCTIONDEEPEQUAL_HPP
#define _FUNCTIONDEEPEQUAL_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

class Node;
class Collation;

class PATHAN_EXPORT FunctionDeepEqual : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionDeepEqual(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

  static bool deep_equal(Sequence seq1, Sequence seq2, Collation* collation, DynamicContext* context);
  static bool node_deep_equal(const Node::Ptr &node1, const Node::Ptr &node2, Collation* collation, DynamicContext* context);

};

#endif // _FUNCTIONDEEPEQUAL_HPP
