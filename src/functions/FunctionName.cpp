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
#include <xqilla/functions/FunctionName.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/dom/DOMXPathNamespace.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/functions/FunctionString.hpp>

const XMLCh FunctionName::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionName::minArgs = 0;
const unsigned int FunctionName::maxArgs = 1;

/**
 * fn:name() as xs:string
 * fn:name($arg as node()?) as xs:string
**/

FunctionName::FunctionName(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "node()?", args, memMgr)
{
}

ASTNode* FunctionName::staticResolution(StaticContext *context) {
  if(_args.empty()) {
    _src.contextItemUsed(true);
  }
  return resolveASTNodes(_args, context, !_args.empty());
}

Sequence FunctionName::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  Node::Ptr ctxNode;
  if(getNumArgs() == 1)
  {
    Sequence arg=getParamNumber(1,context);
    if(arg.isEmpty())
      return Sequence(context->getItemFactory()->createString(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, context), memMgr);
    ctxNode=arg.first();
  }
  else
  {
    const Item::Ptr item = context->getContextItem();
    if(item==NULLRCP)
      XQThrow(FunctionException, X("FunctionName::collapseTreeInternal"),X("Undefined context item in fn:name [err:FONC0001]"));
    if(!item->isNode())
      XQThrow(FunctionException, X("FunctionName::collapseTreeInternal"),X("The context item is not a node [err:XPTY0006]"));
    ctxNode=item;
  }

  return Sequence(FunctionString::string(ctxNode->dmNodeName(context), context), memMgr);
}







