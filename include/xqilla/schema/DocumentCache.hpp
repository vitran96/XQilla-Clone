/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
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

#ifndef _DOCUMENTCACHE_HPP
#define _DOCUMENTCACHE_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/util/XercesDefs.hpp>
#include <vector>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/items/Node.hpp>
#include <xercesc/util/XMemory.hpp>

typedef std::vector<const XMLCh*, XQillaAllocator<const XMLCh*> > VectorOfStrings;

class DynamicContext;
class StaticContext;
class QualifiedName;

XERCES_CPP_NAMESPACE_BEGIN
class DOMDocument;
class DOMNode;
class DatatypeValidator;
class XMLEntityResolver;
class ComplexTypeInfo;
class SchemaElementDecl;
class SchemaAttDef;
XERCES_CPP_NAMESPACE_END

///Expression Context is a storage for contexts.
class XQILLA_API DocumentCache : public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
public:
  enum ValidationMode {
    VALIDATION_STRICT	= 0,
    VALIDATION_LAX		= 1
  };

  /** virtual destructor */
  virtual ~DocumentCache() {}

  /** Register a new reference to the document */
  virtual void incrementDocumentRefCount(const XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* document) const = 0;
  /** Register a closed reference to the document */
  virtual void decrementDocumentRefCount(const XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* document, const StaticContext *context) const = 0;

  /** load the DOM document from the requested URI (or get it from the cache) */
  virtual Node::Ptr loadXMLDocument(const XMLCh* Uri, DynamicContext *context) = 0;

  /** Clear all the documents from the document cache */
  virtual void clearStoredDocuments() = 0;

  /**
   * Sets the XMLEntityResolver that is used by Xerces when it is used
   * to parse documents. This affects the behaviour of XQilla whenever
   * it retrieves an XML, DTD or XML Schema grammar.
   */
  virtual void setXMLEntityResolver(XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityResolver* const handler) = 0;
  virtual XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityResolver* getXMLEntityResolver() const = 0;

  /*
   * returns true if the type represented by uri:typename is an instance of uriToCheck:typeNameToCheck 
   *
   * ie: to check 
   * xs:integer instance of xs:decimal, 
   * call
   * isTypeOrDerivedFromType("xs", "integer", "xs", "decimal") 
   * (except of course, call with URIs, not prefixes!)
   */ 
  virtual bool isTypeOrDerivedFromType(const XMLCh* const uri, const XMLCh* const typeName, const XMLCh* const uriToCheck, const XMLCh* const typeNameToCheck) const = 0; 

  virtual void addSchemaLocation(const XMLCh* uri, VectorOfStrings* locations, StaticContext *context) = 0;

  /** helper functions used to map namespace ids found in the SchemaGrammar **/
  virtual unsigned int getSchemaUriId(const XMLCh* uri) const = 0;
  virtual const XMLCh* getSchemaUri(unsigned int id) const = 0;

  virtual Node::Ptr validate(const Node::Ptr &node, ValidationMode valMode, DynamicContext *context) = 0;

  virtual XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator* getDatatypeValidator(const XMLCh* uri, const XMLCh* typeName) const = 0;

  virtual XERCES_CPP_NAMESPACE_QUALIFIER ComplexTypeInfo*  getComplexTypeInfo(const XMLCh* uri, const XMLCh* typeName) const = 0;

  virtual XERCES_CPP_NAMESPACE_QUALIFIER SchemaElementDecl* getElementDecl(const XMLCh* elementUri, const XMLCh* elementName) const = 0;

  virtual XERCES_CPP_NAMESPACE_QUALIFIER SchemaAttDef* getAttributeDecl(const XMLCh* attributeUri, const XMLCh* attributeName) const = 0;

  virtual DocumentCache *createDerivedCache(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) const = 0;
};

#endif







