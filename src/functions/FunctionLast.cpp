/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

#include "../config/pathan_config.h"
#include <xqilla/functions/FunctionLast.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

const XMLCh FunctionLast::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionLast::minArgs = 0;
const unsigned int FunctionLast::maxArgs = 0;

/**
 * fn:last() as xs:integer
**/

FunctionLast::FunctionLast(const VectorOfDataItems &args, XPath2MemoryManager* memMgr)
  : DataItemFunction(name, minArgs, maxArgs, "empty()", args, memMgr)
{
}

DataItem* FunctionLast::staticResolution(StaticContext *context) {
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE;
  _src.contextSizeUsed(true);
  return resolveDataItems(_args, context, false);
}

Sequence FunctionLast::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  if(context->getContextItem()==NULLRCP)
    DSLthrow(FunctionException,X("FunctionPosition::collapseTreeInternal"), X("Undefined context item in fn:last [err:FONC0001]"));
  return Sequence(context->getPathanFactory()->createInteger((long)context->getContextSize(), context), memMgr);
}
















