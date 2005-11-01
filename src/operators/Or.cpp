/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

#include "../config/pathan_config.h"
#include <sstream>

#include <xqilla/operators/Or.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/impl/DynamicContextImpl.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/ast/DataItemSequence.hpp>
#include <xqilla/context/PathanFactory.hpp>

/*static*/ const XMLCh Or::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

Or::Or(const VectorOfDataItems &args, XPath2MemoryManager* memMgr)
  : DataItemOperator(name, args, memMgr)
{
  // Nothing to do
}

Result Or::createResult(DynamicContext* context, int flags) const
{
  return new OrResult(this, context);
}

DataItem* Or::staticResolution(StaticContext *context)
{
  VectorOfDataItems newArgs(PathanAllocator<DataItem*>(context->getMemoryManager()));

  for(VectorOfDataItems::iterator i = _args.begin(); i != _args.end(); ++i) {
    *i = (*i)->staticResolution(context);
    const StaticResolutionContext &valueSrc = (*i)->getStaticResolutionContext();

    if(valueSrc.isUsed()) {
      _src.add(valueSrc);
      newArgs.push_back(*i);
    }
    else {
      AutoRelease<DynamicContext> dContext(context->createDynamicContext());
      dContext->setMemoryManager(context->getMemoryManager());
      if((*i)->collapseTree(dContext, DataItem::UNORDERED | DataItem::RETURN_TWO).getEffectiveBooleanValue(dContext)) {
        // It's constantly true, so this expression is true
        DataItem* newBlock = new (getMemoryManager())
          DataItemSequence(dContext->getPathanFactory()->createBoolean(true, dContext),
                           dContext, getMemoryManager());
        newBlock->addPredicates(_predList);
        return newBlock->staticResolution(context);
      }
    }
  }

  _args = newArgs;
  return resolvePredicates(context);
}

Or::OrResult::OrResult(const Or *op, DynamicContext *context)
  : SingleResult(context),
    _op(op)
{
}

Item::Ptr Or::OrResult::getSingleResult(DynamicContext *context) const
{
  unsigned int numArgs=_op->getNumArgs();
  for(unsigned int i=0;i<numArgs;i++) {
    if(_op->getArgument(i)->collapseTree(context, DataItem::UNORDERED | DataItem::RETURN_TWO).getEffectiveBooleanValue(context)) {
      return (const Item::Ptr)context->getPathanFactory()->createBoolean(true, context);
    }
  }

	return (const Item::Ptr)context->getPathanFactory()->createBoolean(false, context);
}

std::string Or::OrResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<or/>" << std::endl;

  return oss.str();
}
