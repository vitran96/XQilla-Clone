/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
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
  
#include "../../config/xqilla_config.h"
#include "ATHexBinaryOrDerivedImpl.hpp"
#include "ATBase64BinaryOrDerivedImpl.hpp"
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/util/HexBin.hpp>
#include <xercesc/util/Base64.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>

ATHexBinaryOrDerivedImpl::
ATHexBinaryOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const StaticContext* context): 
    ATHexBinaryOrDerived(),
    _typeName(typeName),
    _typeURI(typeURI) { 
    
  // revisit: have to cast away the const.  a bit nasty. 
  XERCES_CPP_NAMESPACE_QUALIFIER XMLString::upperCase(const_cast<XMLCh*>(value));
  _hexBinaryData = context->getMemoryManager()->getPooledString(value);
}

void *ATHexBinaryOrDerivedImpl::getInterface(const XMLCh *name) const
{
  if(name == Item::gXQilla) {
    return (void*)this;
  }
  return 0;
}

/* Get the name of the primitive type (basic type) of this type
 * (ie "decimal" for xs:decimal) */
const XMLCh* ATHexBinaryOrDerivedImpl::getPrimitiveTypeName() const {
  return this->getPrimitiveName();
}

const XMLCh* ATHexBinaryOrDerivedImpl::getPrimitiveName()  {
  return XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_HEXBINARY;
}

/* Get the name of this type  (ie "integer" for xs:integer) */
const XMLCh* ATHexBinaryOrDerivedImpl::getTypeName() const {
  return _typeName;
}

/* Get the namespace URI for this type */
const XMLCh* ATHexBinaryOrDerivedImpl::getTypeURI() const {
  return _typeURI; 
}

AnyAtomicType::AtomicObjectType ATHexBinaryOrDerivedImpl::getTypeIndex() {
  return AnyAtomicType::HEX_BINARY;
} 

/* If possible, cast this type to the target type */
AnyAtomicType::Ptr ATHexBinaryOrDerivedImpl::castAsInternal(AtomicObjectType targetIndex, const XMLCh* targetURI, const XMLCh* targetType, const DynamicContext* context) const
{
  switch(targetIndex) {
    case BASE_64_BINARY: {
      XMLByte* binData=XERCES_CPP_NAMESPACE_QUALIFIER HexBin::decodeToXMLByte(_hexBinaryData, context->getMemoryManager());
      unsigned int length=0;
      XMLByte* base64Data=XERCES_CPP_NAMESPACE_QUALIFIER Base64::encode(binData, 
                                                                        XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(_hexBinaryData)/2, 
                                                                        &length, 
                                                                        context->getMemoryManager()); 
      XMLCh* uniBase64=(XMLCh*)context->getMemoryManager()->allocate((length+1)*sizeof(XMLCh));
      unsigned int i;
      for(i=0;i<length;i++)
          uniBase64[i]=(XMLCh)base64Data[i];
      uniBase64[i]=0;
      // replace #xA with #x20, collapse multiple spaces
      XERCES_CPP_NAMESPACE_QUALIFIER XMLString::collapseWS(uniBase64, context->getMemoryManager());
      ATBase64BinaryOrDerivedImpl* retVal=new ATBase64BinaryOrDerivedImpl(targetURI, targetType, uniBase64, context);
      context->getMemoryManager()->deallocate(uniBase64);
      context->getMemoryManager()->deallocate(binData);
      context->getMemoryManager()->deallocate(base64Data);
      return retVal;
    }
    default: {
      return AnyAtomicType::castAsInternal(targetIndex, targetURI, targetType, context);
    }
  }
}

/* returns the XMLCh* (canonical) representation of this type */
const XMLCh* ATHexBinaryOrDerivedImpl::asString(const DynamicContext* context) const {
  return _hexBinaryData;
}

/* returns true if the two objects' URI are equal (string comparison)
   * false otherwise */
bool ATHexBinaryOrDerivedImpl::equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const {
  if(this->getPrimitiveTypeIndex() != target->getPrimitiveTypeIndex()) {
    XQThrow(IllegalArgumentException,X("ATHexBinaryOrDerivedImpl::equals"), X("Equality operator for given types not supported"));
  }
  return XPath2Utils::equals(target->asString(context), _hexBinaryData);
}

AnyAtomicType::AtomicObjectType ATHexBinaryOrDerivedImpl::getPrimitiveTypeIndex() const {
  return this->getTypeIndex();
}
