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

#ifndef _UTF8STR_HPP
#define _UTF8STR_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/util/XercesDefs.hpp>

#include <xercesc/util/XMLUTF8Transcoder.hpp>

class XQILLA_API UTF8Str
{
public :
  UTF8Str(const XMLCh* const toTranscode);
  ~UTF8Str()
  {
    delete [] fUTF8Form;
  }

  const char* UTF8Form() const
  {
    return (char*)fUTF8Form;
  }

  char* adopt()
  {
    char *result = (char*)fUTF8Form;
    fUTF8Form = 0;
    return result;
  }

private :
  XMLByte *fUTF8Form;
};

#define UTF8(str) UTF8Str((const XMLCh*)(str)).UTF8Form()

#endif
