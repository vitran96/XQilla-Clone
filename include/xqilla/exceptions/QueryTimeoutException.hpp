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

/*

  QueryTimeoutException

*/

#ifndef _QUERYTIMEOUTEXCEPTION_HPP
#define _QUERYTIMEOUTEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for query timeouts */

class XQILLA_API QueryTimeoutException : public XQException
{
public:

  QueryTimeoutException(const XMLCh *functionName, const XMLCh *reason, const LocationInfo *info, const char *file, int line)
    : XQException(X("QueryTimeoutException"), functionName, reason, info, file, line) {};
};

#endif // _QUERYTIMEOUTEXCEPTION_HPP

