/*
 * Copyright (c) 2001, 2008,
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004, 2011,
 *     Oracle and/or its affiliates. All rights reserved.
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
 */

#include "../config/xqilla_config.h"
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/functions/FuncFactory.hpp>
#include <xqilla/ast/XQFunction.hpp>

#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/util/XMLChar.hpp>

XERCES_CPP_NAMESPACE_USE;

static Result codepointsToString(const VectorOfASTNodes &args, DynamicContext *context,
  const LocationInfo *info)
{
  XMLBuffer result;
  Result arg = args[0]->createResult(context);
  Item::Ptr item;
  while((item = arg->next(context)).notNull()) {
    XMLInt32 ch = ((Numeric*)item.get())->asInt();
    if(ch >= 0x10000) {
      XMLCh one, two;
      RegxUtil::decomposeToSurrogates(ch, one, two);
      if(!XMLChar1_0::isXMLChar(one, two))
        XQThrow3(XPath2ErrorException, X("codepointsToString"),
          X("String contains an invalid XML character [err:FOCH0001]."), info);
      result.append(one);
      result.append(two);
    } else {
      if(!XMLChar1_0::isXMLChar(ch))
        XQThrow3(XPath2ErrorException, X("codepointsToString"),
          X("String contains an invalid XML character [err:FOCH0001]."), info);
      result.append((XMLCh)ch);
    }
  }
  return (Item::Ptr)context->getItemFactory()->createString(result.getRawBuffer(), context);
}

static const XMLCh codepointsToStringName[] =
{ 'c', 'o', 'd', 'e', 'p', 'o', 'i', 'n', 't', 's', '-', 't', 'o', '-', 's', 't', 'r', 'i', 'n', 'g', 0 };

static SimpleBuiltinFactory codepointsToStringFactory(
  XQFunction::XMLChFunctionURI, codepointsToStringName, 1,
  "($srcval as xs:integer*) as xs:string", codepointsToString
);

