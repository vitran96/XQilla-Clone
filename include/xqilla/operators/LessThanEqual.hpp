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
   LessThanEqual operator function
*/

#ifndef _LESSTHANEQUAL_HPP
#define _LESSTHANEQUAL_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/operators/ComparisonOperator.hpp>

class Collation;

/** OpLessThanEqual operator function*/
class PATHAN_EXPORT LessThanEqual : public ComparisonOperator
{
public:
  static const XMLCh name[];

  LessThanEqual(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  static bool less_than_equal(const AnyAtomicType::Ptr &arg1, const AnyAtomicType::Ptr &arg2, Collation* collation, DynamicContext* context);

  bool execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _LESSTHANEQUAL_HPP

