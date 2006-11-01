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

#include "../config/xqilla_config.h"
#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/exceptions/XQillaException.hpp>

bool XQillaException::_debug = false;

XQillaException::XQillaException(const XQillaException &other): XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException(other.code, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::replicate(other.msg)) 
{
  // nothing to do
}


XQillaException::~XQillaException() {
    msg = 0;
}

/*static*/ void XQillaException::setDebug(bool flag)
{
    _debug = flag;
}

/*static*/ bool XQillaException::getDebug(void)
{
    return _debug;
}

XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::ExceptionCode XQillaException::getCode(void) const 
{
  return code;
}//getCode

const XMLCh* XQillaException::getString(void) const 
{
  return msg;
}//getString
