/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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
 * $Id: FunctionAbs.cpp 531 2008-04-10 23:23:07Z jpcs $
 */

#include "../config/xqilla_config.h"
#include <xqilla/functions/FunctionSin.hpp>

#include <xqilla/items/Numeric.hpp>
#include <xqilla/context/DynamicContext.hpp>

const XMLCh FunctionSin::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n,
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionSin::minArgs = 1;
const unsigned int FunctionSin::maxArgs = 1;

/*
 * math:sin($arg as numeric?) as numeric?
 */
FunctionSin::FunctionSin(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : EXSLTMathFunction(name, minArgs, maxArgs, "anyAtomicType?", args, memMgr)
{
}

ASTNode *FunctionSin::staticTypingImpl(StaticContext *context)
{
  _src.clear();
  _src.getStaticType() = StaticType(StaticType::NUMERIC_TYPE, 0, 1);
  return NumericFunction::staticTypingImpl(context);
}

Result FunctionSin::createResult(DynamicContext* context, int flags) const
{
  Numeric::Ptr num = getNumericParam(1, context);
  if(num.isNull()) return 0;
  return (Item::Ptr)num->sin(context);
}
