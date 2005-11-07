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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#ifndef _XQILLA_CONFIG_H
#define _XQILLA_CONFIG_H

/** BEGIN CONFIG.H **/
/* Configure-style definitions for Windows.  */

/* Define to empty if the keyword does not work.  */
/* MS VC++ supports const */
#undef const

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
/* Intel & Alpha architechtures are small endian */
#undef WORDS_BIGENDIAN

// Warning 4064: switch statement contains 'default' but no 'case' labels
// 
// Warning 4251: We have a lot of std::vector objects inside exported classes, and VC++ complains about it
// "class 'std::vector<XXXX> >' needs to have dll-interface to be used by clients of class 'YYYY'"
//
// Warning 4786: "identifier was truncated to '255' characters in the browser information"
//
// Warning 4101: "unreferenced local variable"
//
// Warning 4290: C++ exception specification ignored except to indicate a function is not __declspec(nothrow)
#pragma warning(disable: 4065 4251 4786 4101 4290)

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

/** END CONFIG.H **/
#endif

