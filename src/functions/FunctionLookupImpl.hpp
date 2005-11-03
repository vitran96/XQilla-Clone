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

#ifndef _FLOOKUPIMPL_HPP
#define _FLOOKUPIMPL_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/functions/FunctionLookup.hpp>
#include <xercesc/util/RefHash2KeysTableOf.hpp>
#include <xercesc/util/StringPool.hpp>

/** class implementing a lookup table for functions */
class XQILLA_API FunctionLookupImpl : public FunctionLookup
{
public:
  FunctionLookupImpl(XPath2MemoryManager* memMgr);
  virtual ~FunctionLookupImpl();

  ///insert a new function factory
  virtual void insertFunction(FuncFactory *func);

  ///returns the approriate Function object
  virtual ASTNode* lookUpFunction(const XMLCh* URI, const XMLCh* fname, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr) const;

  /// returns all the defined functions
  virtual std::vector< std::pair<const XMLCh*,const XMLCh*> > getFunctions() const;
  virtual std::vector< FuncFactory* > getFunctionFactories() const;

protected:
  ///function to create the table
  void createTable();

private:
  XERCES_CPP_NAMESPACE_QUALIFIER XMLStringPool _uriPool;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHash2KeysTableOf< FuncFactory > _funcTable;
  XPath2MemoryManager* _memMgr;
};




#endif 
