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

#ifndef _XQILLAPLATFORMUTILS_HPP
#define _XQILLAPLATFORMUTILS_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/util/XercesDefs.hpp>
XERCES_CPP_NAMESPACE_BEGIN
class MemoryManager;
XERCES_CPP_NAMESPACE_END

/**
 * Static utility methods for initializing and terminating the XQilla
 * and Xerces environments.
 */
class XQILLA_API XQillaPlatformUtils
{
public:

  /**
   * Perform XQilla initialization
   *
   * Initialization should be called first in any user code.
   * 
   * Initializes Xerces and adds its own DOMImplementation to the registry
   */
  static void initialize(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr = 0);

  /**
   * Perform XQilla termination
   *
   * Terminates Xerces
   */
  static void terminate();
};
#endif

