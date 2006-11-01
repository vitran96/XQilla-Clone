/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef __XQILLAIMPLEMENTATION_HPP
#define __XQILLAIMPLEMENTATION_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/dom/DOMImplementation.hpp>
#include <xercesc/dom/DOMImplementationSource.hpp>

class XPath2MemoryManager;

XERCES_CPP_NAMESPACE_BEGIN
class XMLGrammarPool;

XERCES_CPP_NAMESPACE_END

/**
 * The <code>XQillaImplentation</code> class implements the 
 * <code>DOMImplementation</code> interface and the 
 * <code>DOMImplementationSource</code> interface and provides a number of methods
 * for performing operations that are independent of any particular instance
 * of the document object model.
 */

class XQILLA_API XQillaImplementation: public XERCES_CPP_NAMESPACE_QUALIFIER DOMImplementation,
                                          public XERCES_CPP_NAMESPACE_QUALIFIER DOMImplementationSource
{
protected:
  XQillaImplementation();
public:
  /** @name Destructor */
  //@{
  /**
   * Destructor
   *
   */
  virtual ~XQillaImplementation();
  //@}

  /**  Factory method for getting a XQillaImplementation object.
   *     The XQilla implementation retains ownership of the returned object.
   *     Application code should NOT delete it.
   */
  static XQillaImplementation* getDOMImplementationImpl();

  /**  Initialize the XQillaImplementation
   */
  static void initialize();

  /**  Terminate the XQillaImplementation
   */
  static void terminate();

  /**
   * Test if the DOM implementation implements a specific feature.
   * @param feature The name of the feature to test (case-insensitive). The
   *   values used by DOM features are defined throughout the DOM Level 2
   *   specifications and listed in the  section. The name must be an XML
   *   name. To avoid possible conflicts, as a convention, names referring
   *   to features defined outside the DOM specification should be made
   *   unique.
   * @param version This is the version number of the feature to test. In
   *   Level 3, the string can be either "3.0", "2.0" or "1.0". If the version is
   *   not specified, supporting any version of the feature causes the
   *   method to return <code>true</code>.
   * @return <code>true</code> if the feature is implemented in the
   *   specified version, <code>false</code> otherwise.
   * @since DOM Level 1
   */
  virtual bool hasFeature(const  XMLCh * feature,  const  XMLCh * version) const;

  /**
   * Creates a DOMDocument object of the specified type with its document
   * element.
   * @param namespaceURI The namespace URI of the document element to
   *   create.
   * @param qualifiedName The qualified name of the document element to be
   *   created.
   * @param doctype The type of document to be created or <code>null</code>.
   *   When <code>doctype</code> is not <code>null</code>, its
   *   <code>ownerDocument</code> attribute is set to the document
   *   being created.
   * @return A new <code>DOMDocument</code> object.
   * @exception DOMException
   *   INVALID_CHARACTER_ERR: Raised if the specified qualified name
   *   contains an illegal character.
   *   <br>NAMESPACE_ERR: Raised if the <code>qualifiedName</code> is
   *   malformed, if the <code>qualifiedName</code> has a prefix and the
   *   <code>namespaceURI</code> is <code>null</code>, or if the
   *   <code>qualifiedName</code> has a prefix that is "xml" and the
   *   <code>namespaceURI</code> is different from "
   *   http://www.w3.org/XML/1998/namespace" , or if the DOM
   *   implementation does not support the <code>"XML"</code> feature but
   *   a non-null namespace URI was provided, since namespaces were
   *   defined by XML.
   *   <br>WRONG_DOCUMENT_ERR: Raised if <code>doctype</code> has already
   *   been used with a different document or was created from a different
   *   implementation.
   *   <br>NOT_SUPPORTED_ERR: May be raised by DOM implementations which do
   *   not support the "XML" feature, if they choose not to support this
   *   method. Other features introduced in the future, by the DOM WG or
   *   in extensions defined by other groups, may also demand support for
   *   this method; please consult the definition of the feature to see if
   *   it requires this method.
   * @since DOM Level 2
   */
  virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* createDocument(const XMLCh *namespaceURI, 
                                      const XMLCh *qualifiedName, 
                                      XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentType *doctype, 
                                      XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const manager = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Non-standard extension
   *
   * Create a completely empty document that has neither a root element or a doctype node.
   */
  virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* createDocument(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const manager = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Create a new DOMWriter. DOMWriters are used to serialize a DOM tree
   * back into an XML document.
   *
   * @return The newly created <code>DOMWriter<code> object.
   *
   * @see DOMWriter
   * @since DOM Level 3
   */
  virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMWriter* createDOMWriter(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const manager = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);


    /**
     * We create our own DOMBulider that creates a XQillaDocument. It also sets various parser options so we can 
     * use the grammars correctly. Please note that if you pass your own XMLGrammarPool in then the special
     * XQuery types will not be available during parse
     **/
  virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMBuilder* createDOMBuilder(const short mode,
                                                                      const XMLCh* const schemaType,
                                                                      XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const manager = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager,
                                                                      XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool* const gramPool = 0);



  /**
   * A method to request a DOM implementation.
   *
   * @param features A string that specifies which features are required.
   *   This is a space separated list in which each feature is specified
   *   by its name optionally followed by a space and a version number.
   *   This is something like: "XPath2 3.0"
   * @return An implementation that has the desired features, or
   *   <code>null</code> if this source has none.
   * @since DOM Level 3
   */
  virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMImplementation* getDOMImplementation(const XMLCh* features) const;

  /**
   * Throws DOMException NOT_SUPPORTED_ERR
   *
   * @exception DOMException NOT_SUPPORTED_ERR: Raised if this function is not
   * supported by implementation
   *
   * @see DOMInputSource
   * @since DOM Level 3
   */
  virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMInputSource* createDOMInputSource();

  /**
   * Creates an empty <code>DOMDocumentType</code> node. Entity declarations
   * and notations are not made available. Entity reference expansions and
   * default attribute additions do not occur. It is expected that a
   * future version of the DOM will provide a way for populating a
   * <code>DOMDocumentType</code>.
   * @param qualifiedName The qualified name of the document type to be
   *   created.
   * @param publicId The external subset public identifier.
   * @param systemId The external subset system identifier.
   * @return A new <code>DOMDocumentType</code> node with
   *   <code>ownerDocument</code> set to <code>null</code>.
   * @exception DOMException
   *   INVALID_CHARACTER_ERR: Raised if the specified qualified name
   *   contains an illegal character.
   *   <br>NAMESPACE_ERR: Raised if the <code>qualifiedName</code> is
   *   malformed.
   *   <br>NOT_SUPPORTED_ERR: May be raised by DOM implementations which do
   *   not support the <code>"XML"</code> feature, if they choose not to
   *   support this method. Other features introduced in the future, by
   *   the DOM WG or in extensions defined by other groups, may also
   *   demand support for this method; please consult the definition of
   *   the feature to see if it requires this method.
   * @since DOM Level 2
   */ 
  virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentType *createDocumentType(const XMLCh *qualifiedName,const XMLCh * publicId, const XMLCh *systemId);

  /**
   * This method makes available a <code>DOMImplementation</code>'s
   * specialized interface (see ).
   *
   * Throws a DOMException NOT_SUPPORTED_ERR
   *
   * @since DOM Level 3
   */
  virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMImplementation* getInterface(const XMLCh* feature);

  /** The "XPath2" feature 
   */
  static const XMLCh gXQilla[];

  /** The "3.0" version
   */
  static const XMLCh g3_0[];

  XERCES_CPP_NAMESPACE_QUALIFIER DOMImplementation *domImpl;
private:
	static XQillaImplementation* gDomimp;
};

#endif // __XQILLAIMPLEMENTATION_HPP

