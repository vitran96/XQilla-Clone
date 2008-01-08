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
#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/DynamicErrorException.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>

XQContextItem::XQContextItem(XPath2MemoryManager* memMgr)
	: ASTNodeImpl(memMgr)
{
	setType(ASTNode::CONTEXT_ITEM);
}

XQContextItem::~XQContextItem() {
	//no-op
}

ASTNode* XQContextItem::staticResolution(StaticContext *context)
{
  return this;
}

ASTNode *XQContextItem::staticTyping(StaticContext *context)
{
  _src.clear();

  _src.setProperties(StaticAnalysis::DOCORDER | StaticAnalysis::GROUPED |
	  StaticAnalysis::PEER | StaticAnalysis::SUBTREE | StaticAnalysis::SAMEDOC |
	  StaticAnalysis::ONENODE | StaticAnalysis::SELF);
  _src.getStaticType() = context->getContextItemType();
  _src.contextItemUsed(true);
  return this;
}

Result XQContextItem::createResult(DynamicContext* context, int flags) const
{
  return new ContextItemResult(this);
}

XQContextItem::ContextItemResult::ContextItemResult(const LocationInfo *location)
  : SingleResult(location)
{
}

Item::Ptr XQContextItem::ContextItemResult::getSingleResult(DynamicContext *context) const
{
  const Item::Ptr item = context->getContextItem();
  if(item == NULLRCP) {
    XQThrow(DynamicErrorException,X("XQContextItem::ContextItemResult::getSingleResult"),
             X("It is an error for the context item to be undefined when using it [err:XPDY0002]"));
  }
  return item;
}

std::string XQContextItem::ContextItemResult::asString(DynamicContext *context, int indent) const
{
  return "<contextitemresult/>";
}
