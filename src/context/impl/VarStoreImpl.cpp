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
#include <xqilla/context/impl/VarStoreImpl.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>

using namespace std;

VarStoreImpl::VarStoreImpl(XPath2MemoryManager *memMgr, const VariableStore *parent)
  : uriPool_(1, memMgr),
    store_(5, true, memMgr),
    parent_(parent),
    mm_(memMgr)
{
}

Result VarStoreImpl::getVar(const XMLCh *namespaceURI, const XMLCh *name) const
{
  unsigned int nsID = uriPool_.getId(namespaceURI);
  // if the namespace is not in the map, the variable is not there neither
  if(nsID != 0) {
    const ResultBuffer *result = store_.get(mm_->getPooledString(name), nsID);
    if(result != 0) return const_cast<ResultBuffer*>(result)->createResult();
  }

  if(parent_ != 0) return parent_->getVar(namespaceURI, name);

  return 0;
}

void VarStoreImpl::setVar(const XMLCh *namespaceURI, const XMLCh *name, const Result &value, unsigned int readCount)
{
  unsigned int nsID = uriPool_.addOrFind(namespaceURI);
  store_.put((void*)mm_->getPooledString(name), nsID, new ResultBuffer(value, readCount));
}

void VarStoreImpl::clear()
{
  uriPool_.flushAll();
  store_.removeAll();
}

void VarStoreImpl::cacheVariableStore(const StaticResolutionContext &src, const VariableStore *toCache)
{
  vector<pair<const XMLCh*, const XMLCh*> > vars = src.variablesUsed();
  for(vector<pair<const XMLCh*, const XMLCh*> >::iterator i = vars.begin(); i != vars.end(); ++i) {
    // TBD variable use count - jpcs
    setVar(i->first, i->second, toCache->getVar(i->first, i->second));
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

SingleVarStore::SingleVarStore() : uri_(0), name_(0), parent_(0) {}

Result SingleVarStore::getVar(const XMLCh *namespaceURI, const XMLCh *name) const
{
  if(XPath2Utils::equals(name, name_) && XPath2Utils::equals(namespaceURI, uri_))
    return value;

  return parent_->getVar(namespaceURI, name);
}

void SingleVarStore::setAsVariableStore(const XMLCh *namespaceURI, const XMLCh *name, DynamicContext *context)
{
  uri_ = namespaceURI;
  name_ = name;

  parent_ = context->getVariableStore();
  context->setVariableStore(this);
}

void SingleVarStore::unsetAsVariableStore(DynamicContext *context)
{
  context->setVariableStore(parent_);
}
