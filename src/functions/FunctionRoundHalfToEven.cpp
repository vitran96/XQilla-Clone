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
#include <xqilla/functions/FunctionRoundHalfToEven.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

const XMLCh FunctionRoundHalfToEven::name[] = { 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chDash, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_h, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_f, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_v, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionRoundHalfToEven::minArgs = 1;
const unsigned int FunctionRoundHalfToEven::maxArgs = 2;

/*
 * fn:round-half-to-even($arg as numeric?) as numeric?
 * fn:round-half-to-even($arg as numeric?, $precision as xs:integer) as numeric?
 */

FunctionRoundHalfToEven::FunctionRoundHalfToEven(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : NumericFunction(name, minArgs, maxArgs, "anySimpleType?, integer", args, memMgr)
{
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE;
}

Sequence FunctionRoundHalfToEven::collapseTreeInternal(DynamicContext* context, int flags) const
{
	XPath2MemoryManager* memMgr = context->getMemoryManager();

  Sequence arg = getParamNumber(1, context);
    
  //If the argument is the empty sequence, the empty sequence is returned.

  if(arg.isEmpty()) {
    return Sequence(memMgr);
  }

  Numeric::Ptr numericArg = (const Numeric::Ptr )arg.first();
  if(isNaN(numericArg))
    return Sequence(numericArg, memMgr);
  if(isINF(numericArg))
    return Sequence(numericArg, memMgr);
  ATDecimalOrDerived::Ptr precision = NULL;
  if (getNumArgs() > 1) {
    Sequence precisionArg = getParamNumber(2,context);
    precision = (const ATDecimalOrDerived::Ptr )precisionArg.first();
  }
  else
    precision = context->getXQillaFactory()->createInteger(0, context);
  
  return Sequence(numericArg->roundHalfToEven(precision, context), memMgr);
}
