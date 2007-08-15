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

#include "../config/xqilla_config.h"

#include <xqilla/update/UInsertAfter.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>

UInsertAfter::UInsertAfter(ASTNode *source, ASTNode *target, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    source_(source),
    target_(target)
{
  setType(ASTNode::UINSERT_AFTER);
}

ASTNode* UInsertAfter::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  source_ = new (mm) XQContentSequence(source_, mm);
  source_->setLocationInfo(this);
  source_ = source_->staticResolution(context);

  SequenceType *targetType = new (mm) SequenceType(new (mm) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE),
                                                   SequenceType::EXACTLY_ONE);
  targetType->setLocationInfo(this);

  // TBD The error here should be [err:XUTY0006] - jpcs
  target_ = new (mm) XQTreatAs(target_, targetType, mm);
  target_->setLocationInfo(this);
  target_ = target_->staticResolution(context);

  return this;
}

ASTNode *UInsertAfter::staticTyping(StaticContext *context)
{
  _src.clear();

  source_ = source_->staticTyping(context);
  _src.add(source_->getStaticResolutionContext());

  if(source_->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("UInsertAfter::staticTyping"),
            X("It is a static error for the source expression of an insert expression "
              "to be an updating expression [err:XUST0001]"));
  }

  target_ = target_->staticTyping(context);
  _src.add(target_->getStaticResolutionContext());

  if(target_->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("UInsertAfter::staticTyping"),
            X("It is a static error for the target expression of an insert expression "
              "to be an updating expression [err:XUST0001]"));
  }

  _src.updating(true);
  return this;
}

PendingUpdateList UInsertAfter::createUpdateList(DynamicContext *context) const
{
  Node::Ptr node = (Node*)target_->createResult(context)->next(context).get();

  if(node->dmNodeKind() == Node::document_string ||
     node->dmNodeKind() == Node::attribute_string ||
     node->dmNodeKind() == Node::namespace_string ||
     node->dmParent(context).isNull())
    XQThrow(XPath2TypeMatchException,X("UInsertAfter::staticTyping"),
            X("The target node of an insert after expression must be a single element, text, comment, or processing "
              "instruction node that has a parent [err:XUTY0006]"));

  Sequence alist(context->getMemoryManager());
  Sequence clist(context->getMemoryManager());

  Result value = source_->createResult(context);
  Item::Ptr item;
  while((item = value->next(context)).notNull()) {
    if(((Node*)item.get())->dmNodeKind() == Node::attribute_string) {
      if(!clist.isEmpty())
        XQThrow(ASTException,X("UInsertAfter::createUpdateList"),
                X("Attribute nodes must occur before other nodes in the source expression for an insert after expression [err:XUTY0004]"));
      alist.addItem(item);
    }
    else
      clist.addItem(item);
  }

  PendingUpdateList result;

  if(!alist.isEmpty()) {
    // 4. If $alist is not empty and before or after is specified, the following checks are performed:
    //    a. parent($target) must be an element node [err:XUTY0022].
    if(node->dmParent(context)->dmNodeKind() == Node::document_string)
      XQThrow(XPath2TypeMatchException,X("UInsertAfter::createUpdateList"),
              X("It is a type error if an insert expression specifies the insertion of an attribute node before or after a child of a document node [err:XUTY0022]"));
    //    b. No attribute node in $alist may have a QName whose implied namespace binding conflicts with a namespace binding in the
    //       "namespaces" property of parent($target) [err:XUDY0023].
    // TBD make this check - jpcs
    result.addUpdate(PendingUpdate(PendingUpdate::INSERT_ATTRIBUTES, node->dmParent(context), alist, this));
  }
  if(!clist.isEmpty()) {
    result.addUpdate(PendingUpdate(PendingUpdate::INSERT_AFTER, node, clist, this));
  }

  return result;
}

