/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/axis/AncestorOrSelfAxis.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>

AncestorOrSelfAxis::AncestorOrSelfAxis(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, const Node *nodeObj,
       const NodeTest *nodeTest, DynamicContext *context, const AxisNodeFactory &factory)
  : Axis(contextNode, nodeObj, nodeTest, context, factory),
    ancestor_(0)
{
}

const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *AncestorOrSelfAxis::nextNode()
{
  if(toDo_) {
    // initialise
    toDo_ = false;
    ancestor_ = contextNode_;
  }
  else if(ancestor_ != 0) {
    ancestor_ = getParent(ancestor_);
  }

  return ancestor_;
}

std::string AncestorOrSelfAxis::asString(DynamicContext *context, int indent) const
{
  return getIndent(indent) + "<ancestor_or_self_axis/>";
}
