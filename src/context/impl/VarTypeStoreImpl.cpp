/*
 * Copyright (c) 2001, 2008,
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004, 2011,
 *     Oracle and/or its affiliates. All rights reserved.
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
 */

#include "../../config/xqilla_config.h"
#include <assert.h>
#include "VarTypeStoreImpl.hpp"
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xqilla/functions/FunctionSignature.hpp>
#include <xercesc/framework/XMLBuffer.hpp>

VariableType::VariableType(const ArgumentSpec *aspec)
  : properties(0),
    type(&aspec->getStaticType()),
    global(0)
{
  if(type->getMin() == 1 && type->getMax() == 1) {
    properties = StaticAnalysis::DOCORDER | StaticAnalysis::GROUPED | StaticAnalysis::PEER |
      StaticAnalysis::SUBTREE | StaticAnalysis::SAMEDOC | StaticAnalysis::ONENODE |
      StaticAnalysis::SELF;
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

VarTypeStoreImpl::VarTypeStoreImpl(XPath2MemoryManager* memMgr)
{
}

VarTypeStoreImpl::~VarTypeStoreImpl()
{
  /* nothing to do */
}

void VarTypeStoreImpl::clear()
{
  global_ = VarMap();
  scopes_.clear();
}

void VarTypeStoreImpl::addLocalScope()
{
  scopes_.push_back(global_);
}

void VarTypeStoreImpl::addLogicalBlockScope()
{
  if(scopes_.empty()) scopes_.push_back(global_);
  else scopes_.push_back(scopes_.back());
}

void VarTypeStoreImpl::removeScope()
{
  scopes_.pop_back();
}

void VarTypeStoreImpl::declareGlobalVar(const XMLCh* namespaceURI, const XMLCh* name,
                                        const VariableType &vtype)
{
  VarEntry entry = { namespaceURI, name };
  global_.put(entry, vtype);
}

void VarTypeStoreImpl::declareVar(const XMLCh* namespaceURI, const XMLCh* name,
                                  const VariableType &vtype)
{
  VarEntry entry = { namespaceURI, name };
  if(scopes_.empty()) global_.put(entry, vtype);
  else scopes_.back().put(entry, vtype);
}

const VariableType *VarTypeStoreImpl::getVar(const XMLCh* namespaceURI, const XMLCh* name) const
{
  VarEntry entry = { namespaceURI, name };
  if(scopes_.empty()) return global_.get(entry);
  return scopes_.back().get(entry);
}

