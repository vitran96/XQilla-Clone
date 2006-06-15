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

#include "../config/xqilla_config.h"
#include <assert.h>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/schema/SequenceType.hpp>

XQOperator::XQOperator(const XMLCh* opName, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
  _args(args)
{
  _opName=opName;
  setType(ASTNode::OPERATOR);
}

void XQOperator::addArgument(ASTNode* arg)
{
	_args.push_back(arg);
}

ASTNode* XQOperator::getArgument(unsigned int index) const
{
	assert(index<_args.size());
	return _args[index];
}

void XQOperator::setArgument(unsigned int index, ASTNode *arg)
{
	assert(index<_args.size());
	_args[index] = arg;
}

void XQOperator::removeArgument(unsigned int index)
{
	assert(index<_args.size());
	_args.erase(_args.begin() + index);
}

unsigned int XQOperator::getNumArgs() const
{
  return _args.size();
}

const XMLCh* XQOperator::getOperatorName() const
{
  return _opName;
}

Node::Ptr XQOperator::getNodeParam(unsigned int index, DynamicContext* context) const
{
	assert(_args.size() > index);
	// The result of a node comparison is defined by applying the following rules, in order:

	// 1. Each operand must be either a single node or an empty sequence; otherwise a type error is raised.
  Result arg_result(_args[index]->collapseTree(context));
  const Item::Ptr first = arg_result->next(context);

  if(first == NULLRCP) return 0;

  if(!first->isNode()) {
    XQThrow(XPath2TypeCastException,X("XQOperator::getNodeParam"), X("A parameter of the operator is not a node or empty [err:XPTY0004]"));
  }

  const Item::Ptr second = arg_result->next(context);
  if(second != NULLRCP) {
    XQThrow(XPath2TypeCastException,X("XQOperator::getNodeParam"), X("A parameter of the operator is not a single node or empty [err:XPTY0004]"));
  }

	return (const Node::Ptr )first;
}

bool XQOperator::checkSequenceIsNodes(const Sequence &s) {
	for(Sequence::const_iterator cur = s.begin(); cur != s.end(); ++cur) {
		if(!(*cur)->isNode()) {
			return false;
		}
	}
	return true;
}

ASTNode* XQOperator::staticResolution(StaticContext *context) {
  return resolveASTNodesForDateOrTime(_args, context, true);
}

const VectorOfASTNodes &XQOperator::getArguments() const {
  return _args;
}
