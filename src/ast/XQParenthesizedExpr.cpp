/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <sstream>

#include <xqilla/ast/XQParenthesizedExpr.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>

XQParenthesizedExpr::XQParenthesizedExpr(XPath2MemoryManager* memMgr)
	: ASTNodeImpl(memMgr), _astNodes(XQillaAllocator<ASTNode*>(memMgr))
{
  setType(ASTNode::PARENTHESIZED);
}

Result XQParenthesizedExpr::createResult(DynamicContext* context, int flags) const
{
  return new ParenthesizedResult(this, flags, context);
}

void XQParenthesizedExpr::addItem(ASTNode* di) {

	_astNodes.push_back(di);
}

ASTNode* XQParenthesizedExpr::staticResolution(StaticContext *context) {
  // Return a blank XQSequence if we have no children
  if(_astNodes.empty()) {
    return new (getMemoryManager()) XQSequence(getMemoryManager());
  }

  // Dissolve ourselves if we have only one child
  if(_astNodes.size() == 1) {
    ASTNode *result = _astNodes.front();
    result->addPredicates(getPredicates());
    return result->staticResolution(context);
  }

  _src.getStaticType().flags = 0;

  bool allConstant = true;
  for(VectorOfASTNodes::iterator i = _astNodes.begin(); i != _astNodes.end(); ++i) {
    *i = (*i)->staticResolution(context);
    _src.getStaticType().typeUnion((*i)->getStaticResolutionContext().getStaticType());
    _src.add((*i)->getStaticResolutionContext());
    if(!(*i)->isConstant()) {
      allConstant = false;
    }
  }

  if(allConstant) {
    return constantFold(context);
  }
  else {
    return resolvePredicates(context);
  }
}

const VectorOfASTNodes &XQParenthesizedExpr::getChildren() const {
  return _astNodes;
}

XQParenthesizedExpr::ParenthesizedResult::ParenthesizedResult(const XQParenthesizedExpr *di, int flags, DynamicContext *context)
  : ResultImpl(context),
    _flags(flags),
    _di(di),
    _i(di->getChildren().begin()),
    _result(0)
{
}

Item::Ptr XQParenthesizedExpr::ParenthesizedResult::next(DynamicContext *context)
{
  Item::Ptr item = _result.next(context);

  while(item == NULLRCP) {
    if(_i != _di->getChildren().end()) {
      _result = (*_i++)->collapseTree(context, _flags);
      item = _result.next(context);
    }
    else {
      _result  = 0;
      break;
    }
  }

  return item;
}

std::string XQParenthesizedExpr::ParenthesizedResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<parenthesized/>" << std::endl;

  return oss.str();
}
