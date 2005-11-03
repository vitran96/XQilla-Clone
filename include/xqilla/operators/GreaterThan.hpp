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
   GreaterThan operator function
*/

#ifndef _GREATERTHAN_HPP
#define _GREATERTHAN_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/operators/ComparisonOperator.hpp>

class Collation;

/** OpGreaterThan operator function*/
class PATHAN_EXPORT GreaterThan : public ComparisonOperator
{
public:
  static const XMLCh name[];

  GreaterThan(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  static bool greater_than(const AnyAtomicType::Ptr &arg1, const AnyAtomicType::Ptr &arg2, Collation* collation, DynamicContext* context);

  bool execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};
#endif
