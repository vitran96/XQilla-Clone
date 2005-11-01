/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

#include "../config/pathan_config.h"
#include <xqilla/functions/FunctionExists.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/PathanFactory.hpp>


const XMLCh FunctionExists::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionExists::minArgs = 1;
const unsigned int FunctionExists::maxArgs = 1;

/*
 * fn:exists($arg as item()*) as xs:boolean
 */

FunctionExists::FunctionExists(const VectorOfDataItems &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*", args, memMgr)
{
}

Sequence FunctionExists::collapseTreeInternal(DynamicContext* context, int flags) const
{
	Result items = getParamNumber(1,context,DataItem::UNORDERED|DataItem::RETURN_ONE);
	return Sequence(context->getPathanFactory()->createBoolean(items.next(context) != NULLRCP, context),
                  context->getMemoryManager());
}
















