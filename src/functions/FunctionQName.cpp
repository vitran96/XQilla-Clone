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
#include <xqilla/functions/FunctionQName.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/items/ATQNameOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

const XMLCh FunctionQName::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Q, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionQName::minArgs = 2;
const unsigned int FunctionQName::maxArgs = 2;

/**
 * fn:QName($paramURI as xs:string?, $paramLocal as xs:string) as xs:QName
**/

/** Returns a QName with the URI given in $paramURI and the localname
 * given in $paramLocal **/

FunctionQName::FunctionQName(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?, string", args, memMgr)
{
}

Sequence FunctionQName::collapseTreeInternal(DynamicContext* context, int flags) const {
  Sequence paramURIseq = getParamNumber(1, context);
  Sequence paramLocalseq = getParamNumber(2, context);

  const XMLCh* uri = NULL;
  if(!paramURIseq.isEmpty())
    uri=paramURIseq.first()->asString(context);
  const XMLCh* local = paramLocalseq.first()->asString(context);
  const XMLCh* prefix = XPath2NSUtils::getPrefix(local, context->getMemoryManager());
  local = XPath2NSUtils::getLocalName(local);
  //Construct QName here
  Sequence result(context->getItemFactory()->createQName(uri, prefix, local, context),
                  context->getMemoryManager());

	return result;
}


