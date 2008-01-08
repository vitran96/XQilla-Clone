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

#include "../config/xqilla_config.h"
#include <sstream>

#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/UTF8Str.hpp>

using namespace std;

StaticAnalysis::StaticAnalysis(XPath2MemoryManager* memMgr)
  : _dynamicVariables(17, false, memMgr),
    _uriPool(17, memMgr),
    _memMgr(memMgr)
{
  clear();
}

StaticAnalysis::StaticAnalysis(const StaticAnalysis &o, XPath2MemoryManager* memMgr)
  : _dynamicVariables(17, false, memMgr),
    _uriPool(17, memMgr),
    _memMgr(memMgr)
{
  clear();
  copy(o);
}

void StaticAnalysis::copy(const StaticAnalysis &o)
{
  add(o);
  _properties = o._properties;
  _staticType = o._staticType;
}

void StaticAnalysis::clear()
{
  _contextItem = false;
  _contextPosition = false;
  _contextSize = false;
  _currentTime = false;
  _implicitTimezone = false;
  _availableDocuments = false;
  _availableCollections = false;
  _forceNoFolding = false;
  _creative = false;
  _updating = false;
  _possiblyUpdating = false;

  _properties = 0;
  _staticType = StaticType();

  _dynamicVariables.removeAll();
  _uriPool.flushAll();
}

void StaticAnalysis::contextItemUsed(bool value)
{
  _contextItem = value;
}

void StaticAnalysis::contextPositionUsed(bool value)
{
  _contextPosition = value;
}

void StaticAnalysis::contextSizeUsed(bool value)
{
  _contextSize = value;
}

bool StaticAnalysis::isContextItemUsed() const
{
  return _contextItem;
}

bool StaticAnalysis::isContextPositionUsed() const
{
  return _contextPosition;
}

bool StaticAnalysis::isContextSizeUsed() const
{
  return _contextSize;
}

/** Returns true if any of the context item flags have been used */
bool StaticAnalysis::areContextFlagsUsed() const
{
  return _contextItem || _contextPosition || _contextSize;
}

void StaticAnalysis::currentTimeUsed(bool value)
{
  _currentTime = value;
}

void StaticAnalysis::implicitTimezoneUsed(bool value)
{
  _implicitTimezone = value;
}

void StaticAnalysis::availableDocumentsUsed(bool value)
{
  _availableDocuments = value;
}

void StaticAnalysis::availableCollectionsUsed(bool value)
{
  _availableCollections = value;
}

bool StaticAnalysis::areDocsOrCollectionsUsed() const
{
  return _availableDocuments || _availableCollections;
}

void StaticAnalysis::forceNoFolding(bool value)
{
  _forceNoFolding = value;
}

bool StaticAnalysis::isNoFoldingForced() const
{
  return _forceNoFolding;
}

void StaticAnalysis::variableUsed(const XMLCh *namespaceURI, const XMLCh *name)
{
  namespaceURI = _memMgr->getPooledString(namespaceURI);
  name = _memMgr->getPooledString(name);
  unsigned int nsID = _uriPool.addOrFind(namespaceURI);
  _dynamicVariables.put((void*)name, nsID, 0);
}

vector<pair<const XMLCh*, const XMLCh*> > StaticAnalysis::variablesUsed() const
{
  vector<pair<const XMLCh*, const XMLCh*> > result;

  const XMLCh* namespaceURI;
  const XMLCh* name;
  int nsID;
  VariableAccessSetEnumerator it(const_cast<VariableAccessSet *>(&_dynamicVariables));
  while(it.hasMoreElements()) {
    it.nextElementKey((void*&)name, nsID);
    namespaceURI = _uriPool.getValueForId(nsID);
    result.push_back(pair<const XMLCh*, const XMLCh*>(namespaceURI, name));
  }  

  return result;
}

bool StaticAnalysis::removeVariable(const XMLCh *namespaceURI, const XMLCh *name)
{
  namespaceURI = _memMgr->getPooledString(namespaceURI);
  name = _memMgr->getPooledString(name);
  unsigned int nsID = _uriPool.getId(namespaceURI);
  if(nsID != 0 && _dynamicVariables.containsKey((void*)name, nsID)) {
    _dynamicVariables.removeKey((void*)name, nsID);
    return true;
  }
  return false;
}

bool StaticAnalysis::isVariableUsed(const XMLCh *namespaceURI, const XMLCh *name) const
{
  namespaceURI = _memMgr->getPooledString(namespaceURI);
  name = _memMgr->getPooledString(name);
  unsigned int nsID = _uriPool.getId(namespaceURI);
  if(nsID != 0 && _dynamicVariables.containsKey((void*)name, nsID)) {
    return true;
  }
  return false;
}

/** Sets the members of this StaticAnalysis from the given StaticAnalysis */
void StaticAnalysis::add(const StaticAnalysis &o)
{
  if(o._contextItem) _contextItem = true;
  if(o._contextPosition) _contextPosition = true;
  if(o._contextSize) _contextSize = true;
  if(o._currentTime) _currentTime = true;
  if(o._implicitTimezone) _implicitTimezone = true;
  if(o._availableDocuments) _availableDocuments = true;
  if(o._availableCollections) _availableCollections = true;
  if(o._forceNoFolding) _forceNoFolding = true;
  if(o._creative) _creative = true;
  if(o._updating) _updating = true;
  // Don't copy _possiblyUpdating

  const XMLCh* namespaceURI;
  const XMLCh* name;
  int nsID;
  // No const enumerator is provided...
  VariableAccessSetEnumerator it(const_cast<VariableAccessSet *>(&o._dynamicVariables));
  while(it.hasMoreElements()) {
    it.nextElementKey((void*&)name, nsID);
    namespaceURI = o._uriPool.getValueForId(nsID);
    variableUsed(namespaceURI, name);
  }
}

void StaticAnalysis::addExceptContextFlags(const StaticAnalysis &o)
{
  if(o._currentTime) _currentTime = true;
  if(o._implicitTimezone) _implicitTimezone = true;
  if(o._availableDocuments) _availableDocuments = true;
  if(o._availableCollections) _availableCollections = true;
  if(o._forceNoFolding) _forceNoFolding = true;
  if(o._creative) _creative = true;
  if(o._updating) _updating = true;
  // Don't copy _possiblyUpdating

  const XMLCh* namespaceURI;
  const XMLCh* name;
  int nsID;
  // No const enumerator is provided...
  VariableAccessSetEnumerator it(const_cast<VariableAccessSet *>(&o._dynamicVariables));
  while(it.hasMoreElements()) {
    it.nextElementKey((void*&)name, nsID);
    namespaceURI = o._uriPool.getValueForId(nsID);
    variableUsed(namespaceURI, name);
  }
}


/** Returns true if flags are set, or variables have been used */
bool StaticAnalysis::isUsed() const
{
  return _contextItem || _contextPosition || _contextSize
    || _currentTime || _implicitTimezone || _availableCollections
    || _availableDocuments || _forceNoFolding || !_dynamicVariables.isEmpty();
}

bool StaticAnalysis::isUsedExceptContextFlags() const
{
  return _currentTime || _implicitTimezone || _availableCollections
    || _availableDocuments || _forceNoFolding || !_dynamicVariables.isEmpty();
}

void StaticAnalysis::creative(bool value)
{
  _creative = value;
}

bool StaticAnalysis::isCreative() const
{
  return _creative;
}

void StaticAnalysis::updating(bool value)
{
  _updating = value;
}

bool StaticAnalysis::isUpdating() const
{
  return _updating;
}

void StaticAnalysis::possiblyUpdating(bool value)
{
  _possiblyUpdating = value;
}

bool StaticAnalysis::isPossiblyUpdating() const
{
  return _possiblyUpdating;
}

unsigned int StaticAnalysis::getProperties() const
{
	return _properties;
}

void StaticAnalysis::setProperties(unsigned int props)
{
	_properties = props;
}

const StaticType &StaticAnalysis::getStaticType() const
{
	return _staticType;
}

StaticType &StaticAnalysis::getStaticType()
{
	return _staticType;
}

std::string StaticAnalysis::toString() const
{
  std::ostringstream s;

  s << "Context Item:          " << (_contextItem ? "true" : "false") << std::endl;
  s << "Context Position:      " << (_contextPosition ? "true" : "false") << std::endl;
  s << "Context Size:          " << (_contextSize ? "true" : "false") << std::endl;
  s << "Current Time:          " << (_currentTime ? "true" : "false") << std::endl;
  s << "Implicit Timezone:     " << (_implicitTimezone ? "true" : "false") << std::endl;
  s << "Available Documents:   " << (_availableDocuments ? "true" : "false") << std::endl;
  s << "Available Collections: " << (_availableCollections ? "true" : "false") << std::endl;
  s << "Force No Folding:      " << (_forceNoFolding ? "true" : "false") << std::endl;
  s << "Creative:              " << (_creative ? "true" : "false") << std::endl;
  s << "Updating:              " << (_updating ? "true" : "false") << std::endl;
  s << "Possibly Updating:     " << (_possiblyUpdating ? "true" : "false") << std::endl;

  s << "Variables Used: [";
  const XMLCh* namespaceURI;
  const XMLCh* name;
  int nsID;
  bool first = true;
  VariableAccessSetEnumerator it(const_cast<VariableAccessSet *>(&_dynamicVariables));
  while(it.hasMoreElements()) {
		it.nextElementKey((void*&)name, nsID);
    namespaceURI = _uriPool.getValueForId(nsID);

    if(first) {
      first = false;
    }
    else {
      s << ", ";
    }

    s << "{" << UTF8(namespaceURI) << "}:" << UTF8(name);
	}
  s << "]" << std::endl;

  return s.str();
}
