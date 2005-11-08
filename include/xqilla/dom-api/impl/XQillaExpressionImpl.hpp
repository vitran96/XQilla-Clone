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

#ifndef __XQILLAEXPRESSIONIMPL_HPP
#define __XQILLAEXPRESSIONIMPL_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/dom-api/XQillaExpression.hpp>
#include <xqilla/runtime/Sequence.hpp>

class XPath2Result;
class DynamicContext;
class XPath2MemoryManager;
class XQQuery;

XERCES_CPP_NAMESPACE_BEGIN
class XMLGrammarPool;
class DOMNode;
class DOMDocument;
class DOMException;
XERCES_CPP_NAMESPACE_END 

class XQILLA_API XQillaExpressionImpl : public XQillaExpression
{
public:

  XQillaExpressionImpl(const XMLCh *expression,
                       const XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* documentRoot,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr,
                       const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver *nsr,
                       XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *xmlGP);
  XQillaExpressionImpl(const XMLCh *expression, DynamicContext *context,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr);
  virtual ~XQillaExpressionImpl();

  // weak version -  must create a context from scratch
  virtual void* evaluate(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* contextNode,
                         unsigned short type,
                         void* reuseableResult) const 
    throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException);

  // strong version -- use the user's context
  virtual XPath2Result* evaluate(DynamicContext* context,
                                 unsigned short type) const
    throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException);

  virtual DynamicContext *createContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager) const;

  virtual void release();

  const XQQuery *getCompiledExpression() const { return _compiledExpression; }
  void setCompiledExpression(XQQuery *expr) { _compiledExpression = expr; }

private:
  XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* _createdWith;
  ProxyMemoryManager _memMgr;

  const XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* _docRoot;

  bool _staticContextOwned;
  DynamicContext *_staticContext;
  XQQuery* _compiledExpression;
}; //XQillaExpressionImpl


#endif //__XQILLAEXPRESSIONIMPL_HPP

