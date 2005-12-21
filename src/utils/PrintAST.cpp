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
#include <iostream>
#include <sstream>

#include <xqilla/utils/PrintAST.hpp>
#include <xqilla/utils/UTF8Str.hpp>

#include "../dom-api/impl/XQillaExpressionImpl.hpp"
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQParenthesizedExpr.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQInstanceOf.hpp>
#include <xqilla/ast/XQCastableAs.hpp>
#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQOperator.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/parser/QName.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/operators/GeneralComp.hpp>
#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/ast/XQDebugHook.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQVariableBinding.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQFunction.hpp>

#include <xercesc/dom/DOMNode.hpp>
#if defined(XERCES_HAS_CPP_NAMESPACE)
  XERCES_CPP_NAMESPACE_USE
#endif

using namespace std;

static const int INDENT = 1;

string PrintAST::print(const XQillaExpression *expr, const DynamicContext *context, int indent)
{
  return print(((const XQillaExpressionImpl *)expr)->getCompiledExpression(), context, indent);
}

string PrintAST::print(const XQQuery *query, const DynamicContext *context, int indent)
{
  ostringstream s;

  s << getIndent(indent) << "<XQuery";
  if(query->getIsLibraryModule()) {
    s << " module=\"true\"";
  }
  if(query->getModuleTargetNamespace()) {
    s << " targetNamespace=\"" << UTF8(query->getModuleTargetNamespace()) << "\"";
  }
  s << ">" << endl;
  indent += INDENT;

  PrintAST p;

  for(std::vector<XQUserFunction*, XQillaAllocator<XQUserFunction*> >::const_iterator i = query->getFunctions().begin();
      i != query->getFunctions().end(); ++i) {
    XQUserFunction *f = *i;

    const XMLCh *funUri = f->getURI();
    const XMLCh *funName = f->getName();

    string name("{");
    name += UTF8(funUri);
    name += "}:";
    name += UTF8(funName);

    s << "  <FunctionDefinition name=\"" << name << "\">" << endl;
    s << p.printASTNode(f->getFunctionBody(), context, 2);
    s << "  </FunctionDefinition>" << endl;
  }
  for(vector<XQGlobalVariable*, XQillaAllocator<XQGlobalVariable*> >::const_iterator it = query->getVariables().begin();
      it != query->getVariables().end(); ++it) {
    s << p.printASTNode(*it, context, indent);
  }
  s << p.printASTNode(query->getQueryBody(), context, indent);

  indent -= INDENT;
  s << getIndent(indent) << "</XQuery>" << endl;

  return s.str();
}

string PrintAST::print(const ASTNode *item, const DynamicContext *context, int indent)
{
  PrintAST p;
  return p.printASTNode(item, context, indent);
}

string PrintAST::printASTNode(const ASTNode *item, const DynamicContext *context, int indent)
{
  switch(item->getType()) {
  case ASTNode::LITERAL: {
    return printLiteral((XQLiteral *)item, context, indent);
    break;
  }
  case ASTNode::SEQUENCE: {
    return printSequence((XQSequence *)item, context, indent);
    break;
  }
  case ASTNode::FUNCTION: {
    return printFunction((XQFunction *)item, context, indent);
    break;
  }
  case ASTNode::NAVIGATION: {
    return printNav((XQNav *)item, context, indent);
    break;
  }
  case ASTNode::VARIABLE: {
    return printVariable((XQVariable *)item, context, indent);
    break;
  }
  case ASTNode::STEP: {
    return printStep((XQStep *)item, context, indent);
    break;
  }
  case ASTNode::IF: {
    return printIf((XQIf *)item, context, indent);
    break;
  }
  case ASTNode::INSTANCE_OF: {
    return printInstanceOf((XQInstanceOf *)item, context, indent);
    break;
  }
  case ASTNode::CASTABLE_AS: {
    return printCastableAs((XQCastableAs *)item, context, indent);
    break;
  }
  case ASTNode::CAST_AS: {
    return printCastAs((XQCastAs *)item, context, indent);
    break;
  }
  case ASTNode::TREAT_AS: {
    return printTreatAs((XQTreatAs *)item, context, indent);
    break;
  }
  case ASTNode::PARENTHESIZED: {
    return printParenthesized((XQParenthesizedExpr *)item, context, indent);
    break;
  }
  case ASTNode::OPERATOR: {
    return printOperator((XQOperator *)item, context, indent);
    break;
  }
  case ASTNode::CONTEXT_ITEM: {
    return printContextItem((XQContextItem *)item, context, indent);
    break;
  }
  case (ASTNode::DEBUG_HOOK): {
    return printDebugHook((XQDebugHook *)item, context, indent);
    break;
  }
  case (ASTNode::FLWOR): {
    return printFLWOR((XQFLWOR *)item, context, indent);
    break;
  }
  case (ASTNode::FLWOR_QUANTIFIED): {
    return printFLWORQuantified((XQQuantified *)item, context, indent);
    break;
  }
  case (ASTNode::TYPESWITCH): {
    return printTypeswitch((XQTypeswitch *)item, context, indent);
    break;
  }
  case (ASTNode::VALIDATE): {
    return printValidate((XQValidate *)item, context, indent);
    break;
  }
  case (ASTNode::VARIABLE_DEFINITION): {
    return printGlobal((XQGlobalVariable *)item, context, indent);
    break;
  }
  case (ASTNode::FUNCTION_CALL): {
    return printFunctionCall((XQFunctionCall *)item, context, indent);
    break;
  }
  case (ASTNode::DOM_CONSTRUCTOR): {
    return printDOMConstructor((XQDOMConstructor *)item, context, indent);
    break;
  }
  case (ASTNode::ORDERING_CHANGE): {
    return printOrderingChange((XQOrderingChange *)item, context, indent);
    break;
  }
  case (ASTNode::USER_FUNCTION): {
    return printUserFunction((XQUserFunction::XQFunctionEvaluator *)item, context, indent);
    break;
  }
  default:
    break;
  }
  return getIndent(indent) + "<Unknown/>\n";
}

string PrintAST::printFunction(const XQFunction *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  const XMLCh *funUri = item->getFunctionURI();
  const XMLCh *funName = item->getFunctionName();

  string name("{");
  name += UTF8(funUri);
  name += "}:";
  name += UTF8(funName);

  const VectorOfASTNodes &args = item->getArguments();
  if(args.empty() && !hasPredicates(item)) {
    s << in << "<Function name=\"" << name << "\"/>" << endl;
  }
  else {
    s << in << "<Function name=\"" << name << "\">" << endl;
    for(VectorOfASTNodes::const_iterator i = args.begin(); i != args.end(); ++i) {
      s << printASTNode(*i, context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Function>" << endl;
  }

  return s.str();
}

string PrintAST::printOperator(const XQOperator *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string name(UTF8(item->getOperatorName()));
  if(name == "comp") {
    name = getComparisonOperationName(((const GeneralComp *)item)->getOperation());
  }

  const VectorOfASTNodes &args = item->getArguments();
  if(args.empty() && !hasPredicates(item)) {
    s << in << "<Operator name=\"" << name << "\"/>" << endl;
  }
  else {
    s << in << "<Operator name=\"" << name << "\">" << endl;
    for(VectorOfASTNodes::const_iterator i = args.begin(); i != args.end(); ++i) {
      s << printASTNode(*i, context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Operator>" << endl;
  }

  return s.str();
}

string PrintAST::printContextItem(const XQContextItem *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  if(hasPredicates(item)) {    
    s << in << "<ContextItem>" << endl;
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</ContextItem>" << endl;
  }
  else {
    s << in << "<ContextItem/>" << endl;
  }

  return s.str();
}

string PrintAST::printLiteral(const XQLiteral *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<Literal>" << endl;
  s << in << "  " << item->getItemConstructor()->asString(context) << endl;
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</Literal>" << endl;

  return s.str();
}

string PrintAST::printNav(const XQNav *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string gotoRoot(item->getGotoRootFirst() ? " gotoRoot=\"true\"" : "");

  const XQNav::Steps &steps = item->getSteps();

  if(steps.empty() && !hasPredicates(item)) {
    s << in << "<Navigation" << gotoRoot << "/>" << endl;
  }
  else {
    s << in << "<Navigation" << gotoRoot << ">" << endl;
    for(XQNav::Steps::const_iterator i = steps.begin(); i != steps.end(); ++i) {
      s << printASTNode(i->step, context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Navigation>" << endl;
  }

  return s.str();
}

string PrintAST::printStep(const XQStep *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  const NodeTest *step = item->getNodeTest();

  s << in << "<Step";
  s << " axis=\"" << getAxisName(item->getAxis()) << "\"";
  
  SequenceType::ItemType *type = step->getItemType();
  if(type == 0) {
    if(step->getNamespaceWildcard()) {
      s << " uri=\"*\"";
    }
    else {
      if(step->getNodePrefix() != 0) {
        s << " prefix=\"" << UTF8(step->getNodePrefix()) << "\"";
      }
      if(step->getNodeUri() != 0) {
        s << " uri=\"" << UTF8(step->getNodeUri()) << "\"";
      }
    }
    if(step->getNameWildcard()) {
      s << " name=\"*\"";
    }
    else if(step->getNodeName() != 0) {
      s << " name=\"" << UTF8(step->getNodeName()) << "\"";
    }
    
    if(step->getTypeWildcard()) {
      s << " nodeType=\"*\"";
    }
    else if(step->isNodeTypeSet()) {
      s << " nodeType=\"" << UTF8(step->getNodeType()) << "\"";
    }
  }

  if(hasPredicates(item) || type != 0) {
    s << ">" << endl;
    if(type != 0) {
      s << in << "  <ItemType";
      s << printItemTypeAttrs(type, context);
      s << "/>" << endl;
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Step>" << endl;
  }
  else {
    s << "/>" << endl;
  }

  return s.str();
}

string PrintAST::printParenthesized(const XQParenthesizedExpr *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  const VectorOfASTNodes &children = item->getChildren();

  if(children.empty() && !hasPredicates(item)) {
    s << in << "<Parenthesized/>" << endl;
  }
  else {
    s << in << "<Parenthesized>" << endl;
    for(VectorOfASTNodes::const_iterator i = children.begin(); i != children.end(); ++i) {
      s << printASTNode(*i, context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Parenthesized>" << endl;
  }

  return s.str();
}

string PrintAST::printSequence(const XQSequence *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  const ItemConstructor::Vector &values = item->getItemConstructors();

  if(values.empty()) {
    s << in << "<Sequence/>" << endl;
  }
  else {
    s << in << "<Sequence>" << endl;
    for(ItemConstructor::Vector::const_iterator i = values.begin(); i != values.end(); ++i) {
      s << in << "  " << (*i)->asString(context) << endl;
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Sequence>" << endl;
  }

  return s.str();
}

string PrintAST::printVariable(const XQVariable *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string prefix(UTF8(item->getPrefix()));
  string name(UTF8(item->getName()));
  if(prefix != "") {
    name = prefix + ":" + name;
  }

  if(hasPredicates(item)) {    
    s << in << "<Variable name=\"" << name << "\">" << endl;
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</Variable>" << endl;
  }
  else {
    s << in << "<Variable name=\"" << name << "\"/>" << endl;
  }

  return s.str();
}

string PrintAST::printIf(const XQIf *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<If>" << endl;
  s << in << "  <Test>" << endl;
  s << printASTNode(item->getTest(), context, indent + INDENT + INDENT);
  s << in << "  </Test>" << endl;
  s << in << "  <Then>" << endl;
  s << printASTNode(item->getWhenTrue(), context, indent + INDENT + INDENT);
  s << in << "  </Then>" << endl;
  s << in << "  <Else>" << endl;
  s << printASTNode(item->getWhenFalse(), context, indent + INDENT + INDENT);
  s << in << "  </Else>" << endl;
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</If>" << endl;

  return s.str();
}

string PrintAST::printInstanceOf(const XQInstanceOf *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<InstanceOf>" << endl;
  s << printASTNode(item->getExpression(), context, indent + INDENT);
  s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</InstanceOf>" << endl;

  return s.str();
}

string PrintAST::printCastableAs(const XQCastableAs *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<CastableAs>" << endl;
  s << printASTNode(item->getExpression(), context, indent + INDENT);
  s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</CastableAs>" << endl;

  return s.str();
}

string PrintAST::printCastAs(const XQCastAs *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<CastAs>" << endl;
  s << printASTNode(item->getExpression(), context, indent + INDENT);
  s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
  s << in << "</CastAs>" << endl;

  return s.str();
}

string PrintAST::printTreatAs(const XQTreatAs *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<TreatAs>" << endl;
  s << printASTNode(item->getExpression(), context, indent + INDENT);
  s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</TreatAs>" << endl;

  return s.str();
}

string PrintAST::printUserFunction(const XQUserFunction::XQFunctionEvaluator *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  const XMLCh *funUri = item->getFunctionURI();
  const XMLCh *funName = item->getFunctionName();

  string name("{");
  name += UTF8(funUri);
  name += "}:";
  name += UTF8(funName);

  const VectorOfASTNodes &args = item->getArguments();
  s << in << "<UserFunction name=\"" << name << "\">" << endl;

  if(item->getFunctionDefinition()->getParams()) {
    XQUserFunction::VectorOfFunctionParameters::const_iterator binding = item->getFunctionDefinition()->getParams()->begin();
    for(VectorOfASTNodes::const_iterator arg = args.begin(); arg != args.end() && binding != item->getFunctionDefinition()->getParams()->end(); ++arg, ++binding) {
      if((*binding)->_qname) {
        s << in << "  <Binding name=\"{" << UTF8((*binding)->_uri) << "}:" << UTF8((*binding)->_name) << "\">" << endl;
        s << printASTNode(*arg, context, indent + INDENT + INDENT);
        s << in << "  </Binding>" << endl;
      }
    }
  }

  // We don't output the body, as it may result in an infinite loop
  // for recursive user functions - jpcs
//   s << in << "  <Body>" << endl;
//   s << printASTNode(item->getFunctionDefinition()->getFunctionBody(), context, indent + INDENT + INDENT);
//   s << in << "  </Body>" << endl;
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</UserFunction>" << endl;

  return s.str();
}

string PrintAST::printDebugHook(const XQDebugHook *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string functionName(UTF8(item->getFunctionName()));
  string file(UTF8(item->getFile()));

  s << in << "<DebugHook function=\"" << functionName
    << "\" file=\"" << file << ":" << item->getLine() << ":"
    << item->getColumn() << "\">" << endl;
  s << printASTNode(item->m_impl, context, indent + INDENT);
  s << in << "</DebugHook>" << endl;

  return s.str();
}

string PrintAST::printFLWOR(const XQFLWOR *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  const VectorOfVariableBinding *bindings = item->getBindings();
  const ASTNode *where = item->getWhereExpr();
  const XQSort *sort = item->getSort();

  s << in << "<FLWOR>" << endl;
  for(VectorOfVariableBinding::const_iterator i = bindings->begin(); i != bindings->end(); ++i) {
    s << printXQVariableBinding(*i, context, indent + INDENT);
  }
  if(where) {
    s << in << "  <Where>" << endl;
    s << printASTNode(where, context, indent + INDENT + INDENT);
    s << in << "  </Where>" << endl;
  }
  if(sort) s << printSort(sort, context, indent + INDENT);
  s << printASTNode(item->getReturnExpr(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</FLWOR>" << endl;

  return s.str();
}

string PrintAST::printXQVariableBinding(const XQVariableBinding *binding, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string type;
  if(binding->_bindingType == XQVariableBinding::letBinding) {
    type = "LetBinding";
  }
  else {
    type = "ForBinding";
  }

  s << in << "<" << type << " name=\"" << UTF8(binding->_variable);
  if(binding->_positionalVariable) {
    s << "\" at=\"" << UTF8(binding->_positionalVariable);
  }
  s << "\">" << endl;
  s << printASTNode(binding->_allValues, context, indent + INDENT);
  if(binding->_where) {
    s << in << "  <Where>" << endl;
    s << printASTNode(binding->_where, context, indent + INDENT + INDENT);
    s << in << "  </Where>" << endl;
  }
  s << in << "</" << type << ">" << endl;

  return s.str();
}

string PrintAST::printSort(const XQSort *sort, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string type;
  if(sort->getSortType() == XQSort::stable) {
    type = "StableSort";
  }
  else {
    type = "Sort";
  }

  s << in << "<" << type << ">" << endl;
  for(XQSort::VectorOfSortSpec::const_iterator it = sort->getSortSpecs()->begin();
      it != sort->getSortSpecs()->end(); ++it) {
    s << in << "  <Specification";
    if((*it)->getModifier()) {
      s << " modifier=\"";
      bool addBar = false;
      if((*it)->getModifier() & XQSort::SortSpec::ascending) {
        s << "ascending";
        addBar = true;
      }
      if((*it)->getModifier() & XQSort::SortSpec::descending) {
        if(addBar) s << "|";
        s << "descending";
        addBar = true;
      }
      if((*it)->getModifier() & XQSort::SortSpec::empty_greatest) {
        if(addBar) s << "|";
        s << "empty_greatest";
        addBar = true;
      }
      if((*it)->getModifier() & XQSort::SortSpec::empty_least) {
        if(addBar) s << "|";
        s << "empty_least";
      }
      s << "\"";
    }
    if((*it)->getCollation() != 0 && *((*it)->getCollation()) != 0) {
      s << " collation=\"" << UTF8((*it)->getCollation()) << "\"";
    }
    s << ">" << endl;
    s << printASTNode((*it)->getExpression(), context, indent + INDENT + INDENT);
    s << in << "  </Specification>" << endl;
  }
  s << in << "</" << type << ">" << endl;

  return s.str();
}

string PrintAST::printFLWORQuantified(const XQQuantified *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  XQQuantified::QuantifierType type = item->getQuantifierType();
  string name(type == XQQuantified::some ? "SomeFLWOR" : "EveryFLWOR");

  const VectorOfVariableBinding *bindings = item->getBindings();

  s << in << "<" << name << ">" << endl;
  for(VectorOfVariableBinding::const_iterator i = bindings->begin(); i != bindings->end(); ++i) {
    s << printXQVariableBinding(*i, context, indent + INDENT);
  }
  s << printASTNode(item->getReturnExpr(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</" << name << ">" << endl;

  return s.str();
}

string PrintAST::printTypeswitch(const XQTypeswitch *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  const XQTypeswitch::VectorOfClause *clauses = item->getClauses();

  s << in << "<TypeSwitch>" << endl;
  s << printASTNode(item->getExpression(), context, indent + INDENT);
  for(XQTypeswitch::VectorOfClause::const_iterator i = clauses->begin(); i != clauses->end(); ++i) {
    s << printClause(*i, context, indent + INDENT);
  }
  s << printClause(item->getDefaultClause(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</TypeSwitch>" << endl;

  return s.str();
}

string PrintAST::printClause(const XQTypeswitch::Clause *clause, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  if(clause->_type) {
    s << in << "<Clause";
    if(clause->_variable) {
      s << " name=\"" << UTF8(clause->_variable) << "\"";
    }
    s << ">" << endl;
    s << printSequenceType(clause->_type, context, indent + INDENT);
    s << printASTNode(clause->_expr, context, indent + INDENT);
    s << in << "</Clause>" << endl;
  }
  else {
    s << in << "<Default";
    if(clause->_variable) {
      s << " name=\"" << UTF8(clause->_variable) << "\"";
    }
    s << ">" << endl;
    s << printASTNode(clause->_expr, context, indent + INDENT);
    s << in << "</Default>" << endl;
  }

  return s.str();
}

string PrintAST::printValidate(const XQValidate *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<Validate mode=\"";
  switch(item->getValidationMode()) {
  case DocumentCache::VALIDATION_STRICT: {
    s << "strict";
    break;
  }
  case DocumentCache::VALIDATION_LAX: {
    s << "lax";
    break;
  }
  }
  s << "\">" << endl;
  s << printASTNode(item->getExpression(), context, indent + INDENT);
  s << printPredicates(item, context, indent + INDENT);
  s << in << "</Validate>" << endl;

  return s.str();
}

string PrintAST::printGlobal(const XQGlobalVariable *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<GlobalVar name=\"" << UTF8(item->getVariableName());
  if(item->isExternal()) {
    s << " external=\"true\"";
  }
  if(hasPredicates(item) || item->getSequenceType() || item->getVariableExpr()) {
    s << ">" << endl;
    if(item->getSequenceType()) {
      s << printSequenceType(item->getSequenceType(), context, indent + INDENT);
    }
    if(item->getVariableExpr()) {
      s << printASTNode(item->getVariableExpr(), context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</GlobalVar>" << endl;
  }
  else {
    s << "/>" << endl;
  }

  return s.str();
}

string PrintAST::printFunctionCall(const XQFunctionCall *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  const XMLCh *funPre = item->getName()->getPrefix();
  const XMLCh *funName = item->getName()->getName();

  string name;
  name += UTF8(funPre);
  name += ":";
  name += UTF8(funName);

  const VectorOfASTNodes &args = item->getArguments();
  if(args.empty() && !hasPredicates(item)) {
    s << in << "<FunctionCall name=\"" << name << "\"/>" << endl;
  }
  else {
    s << in << "<FunctionCall name=\"" << name << "\">" << endl;
    for(VectorOfASTNodes::const_iterator i = args.begin(); i != args.end(); ++i) {
      s << printASTNode(*i, context, indent + INDENT);
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</FunctionCall>" << endl;
  }

  return s.str();
}

string PrintAST::printDOMConstructor(const XQDOMConstructor *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<DOMConstructor type=\"" << UTF8(item->getNodeType());
  if(hasPredicates(item) || item->getName() || !item->getAttributes()->empty() || !item->getChildren()->empty()) {
    s << "\">" << endl;
    if(item->getName()) {
      s << in << "  <Name>" << endl;
      s << printASTNode(item->getName(), context, indent + INDENT + INDENT);
      s << in << "  </Name>" << endl;
    }
    if(item->getAttributes() != 0 && !item->getAttributes()->empty()) {
      s << in << "  <Attributes>" << endl;
      for(VectorOfASTNodes::const_iterator i = item->getAttributes()->begin();
          i != item->getAttributes()->end(); ++i) {
        s << printASTNode(*i, context, indent + INDENT + INDENT);
      }
      s << in << "  </Attributes>" << endl;
    }
    if(!item->getChildren()->empty()) {
      s << in << "  <Children>" << endl;
      for(VectorOfASTNodes::const_iterator i = item->getChildren()->begin();
          i != item->getChildren()->end(); ++i) {
        s << printASTNode(*i, context, indent + INDENT + INDENT);
      }
      s << in << "  </Children>" << endl;
    }
    s << printPredicates(item, context, indent + INDENT);
    s << in << "</DOMConstructor>" << endl;
  }
  else {
    s << "\"/>" << endl;
  }

  return s.str();
}

string PrintAST::printOrderingChange(const XQOrderingChange *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<OrderingChange value=\"";
  if(item->getOrderingValue() == StaticContext::ORDERING_ORDERED)
    s << "ordered";
  else s << "unordered";
  s << "\">" << endl;
  s << printASTNode(item->getExpr(), context, indent + INDENT);
  s << in << "</OrderingChange>" << endl;

  return s.str();
}

string PrintAST::printSequenceType(const SequenceType *type, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));

  s << in << "<SequenceType";
  s << " occurrence=\"" << getOccurrenceIndicatorName(type->getOccurrenceIndicator()) << "\"";
  s << printItemTypeAttrs(type->getItemType(), context);
  s << "/>" << endl;

  return s.str();
}

string PrintAST::printItemTypeAttrs(const SequenceType::ItemType *type, const DynamicContext *context)
{
  ostringstream s;

  s << " testType=\"" << getItemTestTypeName(type->getItemTestType()) << "\"";
  
  if(type->getAllowNilled()) {
    s << " nil=\"true\"";
  }

  try {
    const XMLCh *nameURI = type->getNameURI((DynamicContext *)context);
    if(type->getName() != 0) {
      s << " name=\"{" << UTF8(nameURI)
        << "}:" << UTF8(type->getName()->getName()) << "\"";
    }
    else if(nameURI != 0) {
      s << " nameURI=\"" << UTF8(nameURI) << "\"";
    }
  }
  catch(const NamespaceLookupException &e) {
    if(type->getName() != 0) {
      s << " name=\"" << UTF8(type->getName()->getPrefix())
        << ":" << UTF8(type->getName()->getName()) << "\"";
    }
  }

  try {
    const XMLCh *typeURI = type->getTypeURI((DynamicContext *)context);
    if(type->getType() != 0) {
      s << " type=\"" << UTF8(typeURI)
        << ":" << UTF8(type->getType()->getName()) << "\"";
    }
    else if(typeURI != 0) {
      s << " typeURI=\"" << UTF8(typeURI) << "\"";
    }
  }
  catch(const NamespaceLookupException &e) {
    if(type->getType() != 0) {
      s << " type=\"" << UTF8(type->getType()->getPrefix())
        << ":" << UTF8(type->getType()->getName()) << "\"";
    }
  }

  return s.str();
}

string PrintAST::printItem(const Item::Ptr item, const DynamicContext *context, int indent)
{
  ostringstream s;

  string in(getIndent(indent));
  string value(UTF8(item->asString(context)));
  s << in << "<Item value=\"" << value << "\" type=\"";
  if(item->isNode()) {
    s << "node";
  }
  else {
    const AnyAtomicType::Ptr att = (const AnyAtomicType::Ptr )item;
    s << "{" << UTF8(att->getTypeURI()) << "}:"
      << UTF8(att->getTypeName());
  }
  s << "\"/>" << endl;

  return s.str();
}

bool PrintAST::hasPredicates(const ASTNodeImpl *item)
{
  return !item->getPredicates().empty();
}

string PrintAST::printPredicates(const ASTNodeImpl *item, const DynamicContext *context, int indent)
{
  ostringstream s;

  const ASTNode::Predicates &preds = item->getPredicates();

  if(!preds.empty()) {
    string in(getIndent(indent));
    s << in << "<Predicates>" << endl;
    
    for(ASTNode::Predicates::const_iterator i = preds.begin(); i != preds.end(); ++i) {
      s << printASTNode(i->pred, context, indent + INDENT);
    }
    
    s << in << "</Predicates>" << endl;
  }

  return s.str();
}

string PrintAST::getIndent(int indent)
{
  ostringstream s;

  for(int i = indent; i != 0; --i) {
    s << "  ";
  }

  return s.str();
}

string PrintAST::getAxisName(XQStep::Axis axis)
{
  switch(axis) {
  case XQStep::ANCESTOR: {
    return "ancestor";
  }
  case XQStep::ANCESTOR_OR_SELF: {
    return "ancestor-or-self";
  }
  case XQStep::ATTRIBUTE: {
    return "attribute";
  }
  case XQStep::CHILD: {
    return "child";
  }
  case XQStep::DESCENDANT: {
    return "descendant";
  }
  case XQStep::DESCENDANT_OR_SELF: {
    return "descendant-or-self";
  }
  case XQStep::FOLLOWING: {
    return "following";
  }
  case XQStep::FOLLOWING_SIBLING: {
    return "following-sibling";
  }
  case XQStep::NAMESPACE: {
    return "namespace";
  }
  case XQStep::PARENT: {
    return "parent";
  }
  case XQStep::PRECEDING: {
    return "preceding";
  }
  case XQStep::PRECEDING_SIBLING: {
    return "preceding-sibling";
  }
  case XQStep::SELF: {
    return "self";
  }
  default: {
    return "unknown";
  }
  }
}

string PrintAST::getItemTestTypeName(int type)
{
  switch(type) {
  case SequenceType::ItemType::TEST_ELEMENT: {
    return "element";
  }
  case SequenceType::ItemType::TEST_ATTRIBUTE: {
    return "attribute";
  }
  case SequenceType::ItemType::TEST_SCHEMA_ELEMENT: {
    return "schema-element";
  }
  case SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE: {
    return "schema-attribute";
  }
  case SequenceType::ItemType::TEST_NODE: {
    return "node";
  }
  case SequenceType::ItemType::TEST_PI: {
    return "processing-instruction";
  }
  case SequenceType::ItemType::TEST_COMMENT: {
    return "comment";
  }
  case SequenceType::ItemType::TEST_TEXT: {
    return "text";
  }
  case SequenceType::ItemType::TEST_DOCUMENT: {
    return "document";
  }
  case SequenceType::ItemType::TEST_ANYTHING: {
    return "anything";
  }
  case SequenceType::ItemType::TEST_ATOMIC_TYPE: {
    return "atomic-type";
  }
  default: {
    return "unknown";
  }
  }
}

string PrintAST::getOccurrenceIndicatorName(SequenceType::OccurrenceIndicator oi)
{
  switch(oi) {
  case SequenceType::EXACTLY_ONE: {
    return "exactly_one";
  }
  case SequenceType::STAR: {
    return "zero_to_many";
  }
  case SequenceType::PLUS: {
    return "one_to_many";
  }
  case SequenceType::QUESTION_MARK: {
    return "zero_or_one";
  }
  default: {
    return "unknown";
  }
  }
}

string PrintAST::getComparisonOperationName(GeneralComp::ComparisonOperation co)
{
  switch(co) {
  case GeneralComp::EQUAL: {
    return "equal";
  }
  case GeneralComp::NOT_EQUAL: {
    return "not_equal";
  }
  case GeneralComp::LESS_THAN: {
    return "less_than";
  }
  case GeneralComp::LESS_THAN_EQUAL: {
    return "less_than_equal";
  }
  case GeneralComp::GREATER_THAN: {
    return "greater_than";
  }
  case GeneralComp::GREATER_THAN_EQUAL: {
    return "greater_than_equal";
  }
  default: {
    return "unknown";
  }
  }
}
