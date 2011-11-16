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
#include "ATStringOrDerivedImpl.hpp"
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/items/ATFloatOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/Numeric.hpp>
#include <xqilla/context/Collation.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/util/regx/RegxUtil.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

XERCES_CPP_NAMESPACE_USE

ATStringOrDerivedImpl::
ATStringOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const StaticContext* context): 
    ATStringOrDerived(),
    _typeName(typeName),
    _typeURI(typeURI) { 
    
  _value = context->getMemoryManager()->getPooledString(value);      
}

void *ATStringOrDerivedImpl::getInterface(const XMLCh *name) const
{
  if(name == Item::gXQilla) {
    return (void*)this;
  }
  return 0;
}

/* Get the name of the primitive type (basic type) of this type
 * (ie "decimal" for xs:decimal) */
const XMLCh* ATStringOrDerivedImpl::getPrimitiveTypeName() const {
  return this->getPrimitiveName();
}

const XMLCh* ATStringOrDerivedImpl::getPrimitiveName()  {
  return SchemaSymbols::fgDT_STRING;
}

/* Get the name of this type  (ie "integer" for xs:integer) */
const XMLCh* ATStringOrDerivedImpl::getTypeName() const {
  return _typeName;
}

/* Get the namespace URI for this type */
const XMLCh* ATStringOrDerivedImpl::getTypeURI() const {
  return _typeURI; 
}

AnyAtomicType::AtomicObjectType ATStringOrDerivedImpl::getTypeIndex() {
  return AnyAtomicType::STRING;
} 

AnyAtomicType::Ptr ATStringOrDerivedImpl::castAsInternal(AtomicObjectType targetIndex, const XMLCh* targetURI, const XMLCh* targetType, const DynamicContext* context) const {
  switch (targetIndex) {
    case DOUBLE: {
      const XMLCh* upCase = XPath2Utils::toUpper(_value, context->getMemoryManager());
      return (const AnyAtomicType::Ptr)context->getItemFactory()->createDoubleOrDerived(targetURI, targetType, upCase, context);
    }
    case FLOAT: {
      const XMLCh* upCase = XPath2Utils::toUpper(_value, context->getMemoryManager());
      return (const AnyAtomicType::Ptr)context->getItemFactory()->createFloatOrDerived(targetURI, targetType, upCase, context);
    }
    default: return AnyAtomicType::castAsInternal(targetIndex, targetURI, targetType, context);
  }

}


/* returns the XMLCh* (canonical) representation of this type */
const XMLCh* ATStringOrDerivedImpl::asString(const DynamicContext* context) const {
  return _value;
}

/* returns this string as a set of codepoints */
Result ATStringOrDerivedImpl::asCodepoints(const DynamicContext* context) const {
  unsigned int length = this->getLength();
  Sequence result(length,context->getMemoryManager());
  for(unsigned int i=0; i<length; i++) {
    if(RegxUtil::isHighSurrogate(_value[i]) && (i+1)<length && 
       RegxUtil::isLowSurrogate(_value[i+1]))
    {
      result.addItem(context->getItemFactory()->createInteger((long int)RegxUtil::composeFromSurrogate(_value[i], _value[i+1]), context));
      i++;
    }
    else
     result.addItem(context->getItemFactory()->createInteger((long int)_value[i], context));
  } 
  return result;
}

/* returns the substring starting at startingLoc of given length */
ATStringOrDerived::Ptr ATStringOrDerivedImpl::substring(unsigned startIndex, unsigned endIndex, const DynamicContext* context) const
{
  if(startIndex > endIndex)
    return context->getItemFactory()->createString(XMLUni::fgZeroLenString, context);

  XMLBuffer buffer;

  unsigned index = 1;
  const XMLCh *p = _value;
  for(; *p; ++index, ++p) {
    if(index >= endIndex) break;
    bool pair = RegxUtil::isHighSurrogate(p[0]) && RegxUtil::isLowSurrogate(p[1]);
    if(index >= startIndex) buffer.append(p, 1 + pair);
    p += pair;
  }

  return context->getItemFactory()->createString(buffer.getRawBuffer(), context);
}

unsigned int ATStringOrDerivedImpl::getLength() const {
  return XPath2Utils::uintStrlen(_value);
}

/* returns true if the two objects' are equal (string comparison)
   * false otherwise */
bool ATStringOrDerivedImpl::equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const {
  if(this->getPrimitiveTypeIndex() != target->getPrimitiveTypeIndex()) {
    XQThrow2(::IllegalArgumentException,X("ATStringOrDerivedImpl::equals"), X("Equality operator for given types not supported [err:XPTY0004]"));
  }
  return XPath2Utils::equals(target->asString(context), _value);  
}

AnyAtomicType::AtomicObjectType ATStringOrDerivedImpl::getPrimitiveTypeIndex() const {
  return this->getTypeIndex();
}
