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

#ifndef _ATDECIMALORDERIVED_HPP
#define _ATDECIMALORDERIVED_HPP

#include <xqilla/items/Numeric.hpp>

class XQILLA_API ATDecimalOrDerived : public Numeric
{
public:
  typedef RefCountPointer<const ATDecimalOrDerived> Ptr;

  virtual bool isNaN() const { return false; }
  virtual bool isInfinite() const { return false; }
  virtual AnyAtomicType::AtomicObjectType getPrimitiveTypeIndex() const { return AnyAtomicType::DECIMAL; }
};

#endif
