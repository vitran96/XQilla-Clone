/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

/*

  Invalid Lexical Space Exception: thrown when a value is not in the appropriate lexical space

*/

#ifndef _INVALIDLEXICALSPACEEXCEPTION_HPP
#define _INVALIDLEXICALSPACEEXCEPTION_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

class PATHAN_EXPORT InvalidLexicalSpaceException : public DSLException
{
public:
  
  InvalidLexicalSpaceException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("InvalidLexicalSpaceException"), functionName, reason, file, line) {};
};

#endif // _INVALIDLEXICALSPACEEXCEPTION_HPP
