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

#ifndef _TOKENINFO_HPP
#define _TOKENINFO_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/framework/ReferenceCounted.hpp>

#include <stdlib.h>

class XQILLA_API TokenInfo : public ReferenceCounted
{
public:
  typedef RefCountPointer<const TokenInfo> Ptr;

  virtual ~TokenInfo() {}

  virtual const XMLCh *getWord() const = 0;
  virtual unsigned int getPosition() const = 0;
  virtual unsigned int getSentence() const = 0;
  virtual unsigned int getParagraph() const = 0;

protected:
  TokenInfo() {}
};

class XQILLA_API TokenStream : public ReferenceCounted
{
public:
  typedef RefCountPointer<TokenStream> Ptr;

  virtual ~TokenStream() {}

  virtual TokenInfo::Ptr next() = 0;

protected:
  TokenStream() {}
};

#endif
