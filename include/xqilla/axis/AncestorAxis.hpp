/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

#ifndef _ANCESTORAXIS_HPP
#define _ANCESTORAXIS_HPP

#include <xqilla/axis/Axis.hpp>

/**
This class implements the AncestorAxis as defined in the XPath spec
*/
class PATHAN_EXPORT AncestorAxis : public Axis
{
public:
  AncestorAxis(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, const Node *nodeObj,
       const NodeTest *nodeTest, DynamicContext *context,
       const AxisNodeFactory &factory = Axis::gNodeImplFactory);
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *nextNode();
  std::string asString(DynamicContext *context, int indent) const;
private:
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *ancestor_;
};

#endif

