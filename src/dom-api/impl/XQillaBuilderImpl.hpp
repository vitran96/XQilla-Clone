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

#ifndef __XQILLADOMBUILDERIMPL_HPP
#define __XQILLADOMBUILDERIMPL_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/parsers/DOMBuilderImpl.hpp>

XERCES_CPP_NAMESPACE_BEGIN
class DOMInputSource;
class XMLGrammarPool;
class MemoryManager;
class XMLValidator;
XERCES_CPP_NAMESPACE_END  

class XQillaBuilderImpl : public XERCES_CPP_NAMESPACE_QUALIFIER DOMBuilderImpl
{
public:

    /** @name Constructors and Destructor */
    //@{
    /** Construct a DOMBuilderImpl, with an optional validator
      *
      * Constructor with an instance of validator class to use for
      * validation. If you don't provide a validator, a default one will
      * be created for you in the scanner.
      *
      * @param gramPool   Pointer to the grammar pool instance from 
      *                   external application.
      *                   The parser does NOT own it.
      *
      * @param valToAdopt Pointer to the validator instance to use. The
      *                   parser is responsible for freeing the memory.
      */
  XQillaBuilderImpl
  (
   XERCES_CPP_NAMESPACE_QUALIFIER XMLValidator* const   valToAdopt,
   XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const  manager,
   XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool* const gramPool,
   bool adoptGramPool
   );

  virtual ~XQillaBuilderImpl();

    /**
      * <p><b>"Experimental - subject to change"</b></p>
      *
      * Parse via an input source object
      *
      * This method invokes the parsing process on the XML file specified
      * by the DOMInputSource parameter. This API is borrowed from the
      * SAX Parser interface.
      *
      * @param source A const reference to the DOMInputSource object which
      *               points to the XML file to be parsed.
      * @return If the DOMBuilder is a synchronous DOMBuilder the newly created
      *         and populated Document is returned. If the DOMBuilder is
      *         asynchronous then <code>null</code> is returned since the
      *         document object is not yet parsed when this method returns.
      * @exception SAXException Any SAX exception, possibly
      *            wrapping another exception.
      * @exception XMLException An exception from the parser or client
      *            handler code.
      * @exception DOMException A DOM exception as per DOM spec.
      *
      * @see DOMInputSource#DOMInputSource
      * @see #setEntityResolver
      * @see #setErrorHandler
      */
    XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* parse(const XERCES_CPP_NAMESPACE_QUALIFIER DOMInputSource& source);

    /**
      * <p><b>"Experimental - subject to change"</b></p>
      *
      * Parse via a file path or URL
      *
      * This method invokes the parsing process on the XML file specified by
      * the Unicode string parameter 'systemId'.
      *
      * @param systemId A const XMLCh pointer to the Unicode string which
      *                 contains the path to the XML file to be parsed.
      * @return If the DOMBuilder is a synchronous DOMBuilder the newly created
      *         and populated Document is returned. If the DOMBuilder is
      *         asynchronous then <code>null</code> is returned since the
      *         document object is not yet parsed when this method returns.
      * @exception SAXException Any SAX exception, possibly
      *            wrapping another exception.
      * @exception XMLException An exception from the parser or client
      *            handler code.
      * @exception DOM_DOMException A DOM exception as per DOM spec.
      *
      * @see #parse(DOMInputSource,...)
      */
    XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* parseURI(const XMLCh* const systemId);

    /**
      * <p><b>"Experimental - subject to change"</b></p>
      *
      * Parse via a file path or URL (in the local code page)
      *
      * This method invokes the parsing process on the XML file specified by
      * the native char* string parameter 'systemId'.
      *
      * @param systemId A const char pointer to a native string which
      *                 contains the path to the XML file to be parsed.
      * @return If the DOMBuilder is a synchronous DOMBuilder the newly created
      *         and populated Document is returned. If the DOMBuilder is
      *         asynchronous then <code>null</code> is returned since the
      *         document object is not yet parsed when this method returns.
      * @exception SAXException Any SAX exception, possibly
      *            wrapping another exception.
      * @exception XMLException An exception from the parser or client
      *            handler code.
      * @exception DOM_DOMException A DOM exception as per DOM spec.
      *
      * @see #parse(DOMInputSource,...)
      */
    XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* parseURI(const char* const systemId);


    static const XMLCh gXQilla[];


private:
  void initParser();
  XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* getDocumentAndAddGrammar();
  XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *gramPool_;
};


#endif


