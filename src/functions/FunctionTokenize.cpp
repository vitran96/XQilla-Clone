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
#include <xqilla/functions/FunctionTokenize.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xercesc/util/RefArrayVectorOf.hpp>
#include <xercesc/util/regx/RegularExpression.hpp>
#include <xercesc/util/XMLUni.hpp>

const XMLCh FunctionTokenize::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_k, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
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
}

Sequence FunctionTokenize::collapseTreeInternal(DynamicContext* context, int flags) const
{
	XPath2MemoryManager* memMgr = context->getMemoryManager();
	Sequence inputString=getParamNumber(1,context).toSequence(context);
	Sequence patternString=getParamNumber(2,context).toSequence(context);

	// If the value of $operand1 is the empty sequence, the empty sequence is returned.
	if(inputString.isEmpty())
		return Sequence(memMgr);

	const XMLCh *input=inputString.first()->asString(context);
	// If the value of $operand1 is the zero-length string, the empty sequence is returned.
    if(XPath2Utils::equals(input, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
		return Sequence(memMgr);

	const XMLCh *pattern=patternString.first()->asString(context);

	const XMLCh *options = XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
	if(getNumArgs()>2)
		options=getParamNumber(3,context).castAsSingleString(context);
  
  //Check that the options are valid - throw an exception if not (can have s,m,i and x)
  //Note: Are allowed to duplicate the letters.
  unsigned int i;
  for (i=0; i< XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(options); i ++){
   if (options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x)
    XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"),X("Invalid regular expression flags"));  
  }
   
  //Now attempt to tokenize
	XERCES_CPP_NAMESPACE_QUALIFIER RefArrayVectorOf<XMLCh>* toks=NULL;
  try {
    XERCES_CPP_NAMESPACE_QUALIFIER RegularExpression regEx(pattern, options, memMgr);
    toks = regEx.tokenize(input);
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e){ 
    XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"), e.getMessage());  
  } catch (...){
    XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"),X("Invalid regular expression"));
  }

  Sequence resultSeq(toks -> size(),memMgr);

  for (i = 0; i < toks -> size(); ++i){
    resultSeq.addItem(context->getItemFactory()->createString(toks -> elementAt(i), context));  
  }

  return resultSeq;
}
