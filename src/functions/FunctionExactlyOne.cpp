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
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <sstream>

#include <xqilla/functions/FunctionExactlyOne.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>

const XMLCh FunctionExactlyOne::name[] = { 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_y, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionExactlyOne::minArgs = 1;
const unsigned int FunctionExactlyOne::maxArgs = 1;

/*
 * fn:exactly-one($arg as item()*) as item()
 */

FunctionExactlyOne::FunctionExactlyOne(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*", args, memMgr)
{
  // TBD - could do better here - jpcs
  _src.getStaticType().flags = StaticType::ITEM_TYPE;
}

Result FunctionExactlyOne::createResult(DynamicContext* context, int flags) const
{
  return new ExactlyOneResult(this, flags);
}

FunctionExactlyOne::ExactlyOneResult::ExactlyOneResult(const FunctionExactlyOne *func, int flags)
  : ResultImpl(func),
    _flags(flags),
    _func(func),
    _arg(0),
    _argNo(0)
{
}

Item::Ptr FunctionExactlyOne::ExactlyOneResult::next(DynamicContext *context)
{
  if(_arg.isNull()) {
    _arg = _func->getParamNumber(1, context);
  }

  const Item::Ptr result = _arg->next(context);
  ++_argNo;

  if(_argNo == 1 && result == NULLRCP) {
    XQThrow(FunctionException, X("FunctionExactlyOne::ExactlyOneResult::next"),X("fn:exactly-one called with a sequence containing no items [err:FORG0005]"));
  }
  if(_argNo == 2 && result != NULLRCP) {
    XQThrow(FunctionException, X("FunctionExactlyOne::ExactlyOneResult::next"),X("fn:exactly-one called with a sequence containing more than one item [err:FORG0005]"));
  }

  return result;
}

std::string FunctionExactlyOne::ExactlyOneResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<oneormore/>" << std::endl;

  return oss.str();
}
