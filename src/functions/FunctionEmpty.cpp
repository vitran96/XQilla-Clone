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
#include <xqilla/functions/FunctionEmpty.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/XQillaFactory.hpp>

const XMLCh FunctionEmpty::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_y, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionEmpty::minArgs = 1;
const unsigned int FunctionEmpty::maxArgs = 1;

/*
 * fn:empty($arg as item()*) as xs:boolean
 */

FunctionEmpty::FunctionEmpty(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*", args, memMgr)
{
}

Sequence FunctionEmpty::collapseTreeInternal(DynamicContext* context, int flags) const
{
	Result items = getParamNumber(1,context,ASTNode::UNORDERED|ASTNode::RETURN_ONE);
	return Sequence(context->getXQillaFactory()->createBoolean(items.next(context) == NULLRCP, context),
                  context->getMemoryManager());
}
















