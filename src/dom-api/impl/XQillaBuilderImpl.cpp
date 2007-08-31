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

#include "../../config/xqilla_config.h"
#include "XQillaBuilderImpl.hpp"
#include "XQillaDocumentImpl.hpp"
#include "XQillaXMLGrammarPoolImpl.hpp"

#include <xercesc/framework/XMLGrammarPool.hpp>
#include <xercesc/framework/Wrapper4DOMInputSource.hpp>
#include <xercesc/framework/XMLValidator.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/dom/impl/DOMDocumentImpl.hpp>
#include <xercesc/framework/XMLGrammarDescription.hpp>
#include <xercesc/framework/XMLSchemaDescription.hpp>
#include <xercesc/internal/XMLScanner.hpp>
#include <xercesc/internal/XMLScannerResolver.hpp>

const XMLCh XQillaBuilderImpl::gXQilla[] =   // Points to "XPath2"
{XERCES_CPP_NAMESPACE_QUALIFIER chLatin_X, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_h, XERCES_CPP_NAMESPACE_QUALIFIER chDigit_2, XERCES_CPP_NAMESPACE_QUALIFIER chNull};




XQillaBuilderImpl::XQillaBuilderImpl(XERCES_CPP_NAMESPACE_QUALIFIER XMLValidator* const   valToAdopt,
                                     XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const  manager,
                                     XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool* const gramPool,
                                     bool adoptGramPool)
  : DOMBuilderImpl(valToAdopt, manager, gramPool),
    gramPool_(adoptGramPool ? gramPool : 0)
{
}

XQillaBuilderImpl::~XQillaBuilderImpl()
{
  delete gramPool_;
}

// ---------------------------------------------------------------------------
//  DOMBuilderImpl: Parsing methods
// ---------------------------------------------------------------------------
XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* XQillaBuilderImpl::parse(const XERCES_CPP_NAMESPACE_QUALIFIER DOMInputSource& source)
{
    initParser();
    
    XERCES_CPP_NAMESPACE_QUALIFIER Wrapper4DOMInputSource isWrapper((XERCES_CPP_NAMESPACE_QUALIFIER DOMInputSource*) &source, false, getMemoryManager());

    AbstractDOMParser::parse(isWrapper);

    return getDocumentAndAddGrammar();

}

void XQillaBuilderImpl::initParser() {
    //set it here in case someone has messed it up.
    setProperty(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXercesParserUseDocumentFromImplementation, (void*)gXQilla);
}


XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* XQillaBuilderImpl::getDocumentAndAddGrammar() {
    XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument *doc = 0;

    if (getFeature(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXercesUserAdoptsDOMDocument))
        doc = adoptDocument();
    else
        doc = getDocument();
    if(doc == 0) {
      return 0;
    }

    //we copy this gramamr and reset the parser one in the process.
    XQillaXMLGrammarPoolImpl *gr = new (getMemoryManager()) XQillaXMLGrammarPoolImpl(getMemoryManager());

    XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOfEnumerator< XERCES_CPP_NAMESPACE_QUALIFIER Grammar> enumerator
        = getGrammarResolver()->getCachedGrammarEnumerator();

    XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *oldGrPool = getGrammarResolver()->getGrammarPool();
    while(enumerator.hasMoreElements()) {
        XERCES_CPP_NAMESPACE_QUALIFIER Grammar &g = enumerator.nextElement();
        gr->cacheGrammar(oldGrPool->orphanGrammar(g.getGrammarDescription()->getGrammarKey()));
    }

    ((XQillaDocumentImpl*)doc)->setGrammarPool(gr, true);

    return doc;
}

XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* XQillaBuilderImpl::parseURI(const XMLCh* const systemId)
{
    initParser();
    AbstractDOMParser::parse(systemId);
    return getDocumentAndAddGrammar();
}

XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* XQillaBuilderImpl::parseURI(const char* const systemId)
{
    initParser();
    AbstractDOMParser::parse(systemId);
    return getDocumentAndAddGrammar();
}
