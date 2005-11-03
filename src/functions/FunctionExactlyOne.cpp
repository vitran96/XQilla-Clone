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
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::NODE_TYPE | StaticResolutionContext::OTHER_TYPE;
}

Result FunctionExactlyOne::createResult(DynamicContext* context, int flags) const
{
  return new ExactlyOneResult(this, flags, context);
}

FunctionExactlyOne::ExactlyOneResult::ExactlyOneResult(const FunctionExactlyOne *func, int flags, DynamicContext *context)
  : ResultImpl(context),
    _flags(flags),
    _func(func),
    _arg(0),
    _argNo(0)
{
}

Item::Ptr FunctionExactlyOne::ExactlyOneResult::next(DynamicContext *context)
{
  if(_arg.isNull()) {
    _arg = _func->getParamNumber(1, context, ASTNode::RETURN_TWO|(_flags & ~ASTNode::RETURN_ONE));
  }

  const Item::Ptr result = _arg.next(context);
  ++_argNo;

  if(_argNo == 1 && result == NULLRCP) {
    DSLthrow(FunctionException, X("FunctionExactlyOne::ExactlyOneResult::next"),X("fn:exactly-one called with a sequence containing no items [err:FORG0005]"));
  }
  if(_argNo == 2 && result != NULLRCP) {
    DSLthrow(FunctionException, X("FunctionExactlyOne::ExactlyOneResult::next"),X("fn:exactly-one called with a sequence containing more than one item [err:FORG0005]"));
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
