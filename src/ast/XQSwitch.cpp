/*
 * Copyright (c) 2010, 201,
 *     John Snelson. All rights reserved.
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

#include <xqilla/ast/XQSwitch.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/runtime/ClosureResult.hpp>

XQSwitch::XQSwitch(ASTNode *expr, XPath2MemoryManager *mm)
  : ASTNodeImpl(SWITCH, mm),
    expr_(expr),
    cases_(XQillaAllocator<Case*>(mm)),
    default_(0)
{
}

ASTNode* XQSwitch::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  // Statically resolve the test expression
  expr_ = new (mm) XQAtomize(expr_, mm);
  expr_->setLocationInfo(this);
  expr_ = new (mm) XQTreatAs(expr_, (SequenceType*)&SequenceType::ITEM_QUESTION, mm);
  expr_->setLocationInfo(this);
  expr_ = expr_->staticResolution(context);

  // Call static resolution on the clauses
  for(Cases::iterator it = cases_.begin(); it != cases_.end(); ++it) {
    (*it)->staticResolution(context);
  }

  default_ = default_->staticResolution(context);

  return this;
}

ASTNode *XQSwitch::staticTypingImpl(StaticContext *context)
{
  _src.clear();

  // Statically resolve the test expression
  const StaticAnalysis &exprSrc = expr_->getStaticAnalysis();

  // Call static resolution on the clauses
  _src.add(exprSrc);

  _src.add(default_->getStaticAnalysis());
  _src.getStaticType() = default_->getStaticAnalysis().getStaticType();
  _src.setProperties(default_->getStaticAnalysis().getProperties());

  Cases::iterator it;
  for(it = cases_.begin(); it != cases_.end(); ++it) {
    (*it)->staticTyping(context, _src);
  }

  return this;

  // TBD Constant folding - jpcs
  // XPath2MemoryManager *mm = context->getMemoryManager();

  // if(!exprSrc.isUsed()) {
  //   bool found = false;
  //   Cases newCases = Cases(XQillaAllocator<Case*>(mm));
  //   for(it = cases_.begin(); it != cases_.end(); ++it) {
  //     Case *newCase = new (mm) Case(mm);
  //     for(VectorOfASTNodes::iterator v = (*it)->getValues().begin(); v != (*it)->getValues().end(); ++v) {
  //     }

  //     SequenceType::TypeMatch match = (*it)->getSequenceType()->matches(sType);
  //     if(found || match.type == SequenceType::NEVER || match.cardinality == SequenceType::NEVER) {
  //       // It never matches
  //       (*it)->getExpression()->release();
  //       mm->deallocate(*it);
  //     }
  //     else if(match.type == SequenceType::ALWAYS &&
  //        match.cardinality == SequenceType::ALWAYS) {
  //       // It always matches, so set this clause as the
  //       // default clause and remove all clauses after it
  //       default_->getExpression()->release();
  //       mm->deallocate(default_);
  //       default_ = *it;
  //       found = true;
  //     }
  //     else {
  //       newCases.push_back(*it);
  //     }
  //   }

  //   if(newCases.size() == cases_->size()) {
  //     // No change
  //     return this;
  //   }

  //   *cases_ = newCases;
  // }

  // // Call static resolution on the new clauses
  // _src.clear();
  // _src.add(exprSrc);

  // default_->staticTyping(expr_->getStaticAnalysis(), context, _src);

  // for(it = cases_->begin(); it != cases_->end(); ++it) {
  //   (*it)->staticTyping(expr_->getStaticAnalysis(), context, _src);
  // }

  // return this;
}

XQSwitch::Case::Case(XPath2MemoryManager *mm)
  : values_(XQillaAllocator<ASTNode*>(mm)),
    expr_(0)
{
}

void XQSwitch::Case::staticResolution(StaticContext* context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  for(VectorOfASTNodes::iterator i = values_.begin(); i != values_.end(); ++i) {
    (*i) = new (mm) XQAtomize((*i), mm);
    (*i)->setLocationInfo(this);
    (*i) = new (mm) XQTreatAs((*i), (SequenceType*)&SequenceType::ITEM_QUESTION, mm);
    (*i)->setLocationInfo(this);
    (*i) = (*i)->staticResolution(context);
  }

  expr_ = expr_->staticResolution(context);
}

void XQSwitch::Case::staticTyping(StaticContext* context, StaticAnalysis &src)
{
  for(VectorOfASTNodes::iterator i = values_.begin(); i != values_.end(); ++i) {
    src.add((*i)->getStaticAnalysis());
  }
  src.getStaticType().typeUnion(expr_->getStaticAnalysis().getStaticType());
  src.setProperties(src.getProperties() & expr_->getStaticAnalysis().getProperties());
  src.add(expr_->getStaticAnalysis());
}

const ASTNode *XQSwitch::chooseCase(DynamicContext *context) const
{
  AnyAtomicType::Ptr value = (AnyAtomicType*)expr_->createResult(context)->next(context).get();

  for(Cases::const_iterator it = cases_.begin(); it != cases_.end(); ++it) {
    for(VectorOfASTNodes::const_iterator v = (*it)->getValues().begin(); v != (*it)->getValues().end(); ++v) {
      AnyAtomicType::Ptr item = (AnyAtomicType*)(*v)->createResult(context)->next(context).get();
      if((value.isNull() && item.isNull()) || value->compare(item, 0, context) == 0)
        return (*it)->getExpression();
    }
  }

  return default_;
}

EventGenerator::Ptr XQSwitch::generateEvents(EventHandler *events, DynamicContext *context,
                                            bool preserveNS, bool preserveType) const
{
  return new ClosureEventGenerator(chooseCase(context), context, preserveNS, preserveType);
}

PendingUpdateList XQSwitch::createUpdateList(DynamicContext *context) const
{
  return chooseCase(context)->createUpdateList(context);
}

Result XQSwitch::createResult(DynamicContext *context, int flags) const
{
  return chooseCase(context)->createResult(context);
}

