/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/functions/FunctionTokenize.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xercesc/util/RefArrayVectorOf.hpp>
#include <xercesc/util/regx/RegularExpression.hpp>
#include <xercesc/util/ParseException.hpp>
#include <xercesc/util/XMLUni.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

const XMLCh FunctionTokenize::name[] = {
  chLatin_t, chLatin_o, chLatin_k, 
  chLatin_e, chLatin_n, chLatin_i, 
  chLatin_z, chLatin_e, chNull 
};
const unsigned int FunctionTokenize::minArgs = 2;
const unsigned int FunctionTokenize::maxArgs = 3;

/** 
 * fn:tokenize($input as xs:string?, $pattern as xs:string) as xs:string*
 * fn:tokenize($input as xs:string?, $pattern as xs:string, $flags as xs:string) as xs:string*
 */
  
FunctionTokenize::FunctionTokenize(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?, string, string", args, memMgr)
{
  _src.getStaticType().flags = StaticType::STRING_TYPE;
}

Sequence FunctionTokenize::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  // If the value of $operand1 is the empty sequence, the empty sequence is returned.
  Item::Ptr inputString = getParamNumber(1,context)->next(context);
  if(inputString.isNull())
    return Sequence(memMgr);

  const XMLCh *input=inputString->asString(context);
  // If the value of $operand1 is the zero-length string, the empty sequence is returned.
    if(XPath2Utils::equals(input, XMLUni::fgZeroLenString))
    return Sequence(memMgr);

  const XMLCh *pattern=getParamNumber(2,context)->next(context)->asString(context);

  const XMLCh *options = XMLUni::fgZeroLenString;
  if(getNumArgs()>2)
    options=getParamNumber(3,context)->next(context)->asString(context);
  
  //Check that the options are valid - throw an exception if not (can have s,m,i and x)
  //Note: Are allowed to duplicate the letters.
  const XMLCh* cursor=options;
  for(; *cursor != 0; ++cursor){
    switch(*cursor) {
    case chLatin_s:
    case chLatin_m:
    case chLatin_i:
    case chLatin_x:
      break;
    default:
      XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"),X("Invalid regular expression flags [err:FORX0001]."));
    }
  }
   
  //Now attempt to tokenize
  RefArrayVectorOf<XMLCh>* toks=NULL;
  try {
    // Always turn off head character optimisation, since it is broken
    XMLBuffer optionsBuf(1023, context->getMemoryManager());
    optionsBuf.set(options);
    optionsBuf.append(chLatin_H);

    RegularExpression regEx(pattern, optionsBuf.getRawBuffer(), memMgr);
    if(regEx.matches(XMLUni::fgZeroLenString))
      XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"), X("The pattern matches the zero-length string [err:FORX0003]"));
    toks = regEx.tokenize(input);
  } catch (ParseException &e){ 
    XMLBuffer buf(1023, memMgr);
    buf.set(X("Invalid regular expression: "));
    buf.append(e.getMessage());
    buf.append(X(" [err:FORX0002]"));
    XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"), buf.getRawBuffer());
  } catch (RuntimeException &e){ 
    if(e.getCode()==XMLExcepts::Regex_InvalidRepPattern)
      XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"), X("Invalid replacement pattern [err:FORX0004]"));
    else 
      XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"), e.getMessage());
  }

  Sequence resultSeq(toks->size(),memMgr);

  for(unsigned int i = 0; i < toks->size(); ++i){
    resultSeq.addItem(context->getItemFactory()->createString(toks->elementAt(i), context));
  }

  return resultSeq;
}
