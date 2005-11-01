/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

#include "../config/pathan_config.h"
#include <xqilla/functions/FunctionDeepEqual.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/Collation.hpp>
#include <xqilla/context/impl/CodepointCollation.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include "../exceptions/InvalidLexicalSpaceException.hpp"
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/ATQNameOrDerived.hpp>
#include <xqilla/items/ATAnyURIOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/operators/Equals.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/PathanFactory.hpp>

#include <xercesc/dom/DOM.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

#include <assert.h>

const XMLCh FunctionDeepEqual::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_q, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionDeepEqual::minArgs = 2;
const unsigned int FunctionDeepEqual::maxArgs = 3;

/**
 * fn:deep-equal($parameter1 as item()*, $parameter2 as item()*) as xs:boolean
 * fn:deep-equal($parameter1 as item()*, $parameter2 as item()*, $collation as string) as xs:boolean
**/

FunctionDeepEqual::FunctionDeepEqual(const VectorOfDataItems &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*,item()*,string", args, memMgr)
{
}

/*static*/ bool FunctionDeepEqual::deep_equal(Sequence seq1, Sequence seq2, Collation* collation, DynamicContext* context)
{
  // if both of the arguments are the empty sequence, return true
  if(seq1.isEmpty() && seq2.isEmpty()) { 
    return true;
  } 

  // if one, but not both, of the arguments is the empty sequence, return false
  if(seq1.isEmpty() != seq2.isEmpty()) {
    return false;
  }

	// Check if they have the same number of items
	if(seq1.getLength()!=seq2.getLength()) {
		return false;
  }

	// Check if items in corresponding positions in the two sequences compare equal if they are values 
	// or if they have deep equality if they are nodes
  Sequence::iterator end1 = seq1.end();
  for(Sequence::iterator it1 = seq1.begin(), it2 = seq2.begin(); it1 != end1; ++it1, ++it2) 
  {
		const Item::Ptr item1 = *it1;
		const Item::Ptr item2 = *it2;

 		if(item1->isNode() && item2->isNode())
    {
      if(!node_deep_equal((const Node::Ptr )item1, (const Node::Ptr )item2, collation, context)) {
        return false;
      }
    }
    else if(item1->isAtomicValue() && item2->isAtomicValue()) {
      AnyAtomicType::Ptr atom1 = (const AnyAtomicType::Ptr )item1;
      AnyAtomicType::Ptr atom2 = (const AnyAtomicType::Ptr )item2;
      // need to manually convert xdt:untypedAtomic to xs:string
      if(atom1->getPrimitiveTypeIndex() == AnyAtomicType::UNTYPED_ATOMIC)
          atom1 = atom1->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING, context);
      if(atom2->getPrimitiveTypeIndex() == AnyAtomicType::UNTYPED_ATOMIC)
          atom2 = atom2->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING, context);
      try {
        if(!Equals::equals(atom1,atom2,collation,context)) {
          return false;
        }
      } catch (XPath2ErrorException &e) {
        return false;
      } catch (IllegalArgumentException &e) {
        return false;
      }
    } else {
      // one item is a node, the other is an atomic value
      return false;
    }
  }
  return true;
}


/*static*/ bool FunctionDeepEqual::node_deep_equal(const Node::Ptr &node1, const Node::Ptr &node2, Collation* collation, DynamicContext* context)
{
	// If the two nodes are of different node-kinds, the result is false.
	if(!(XPath2Utils::equals(node1->dmNodeKind(), node2->dmNodeKind()))) {
    return false;
  }
  // If the two nodes have names, and the names are different when compared as expanded-QNames,
  // the result is false.
  ATQNameOrDerived::Ptr qname1 = node1->dmNodeName(context);
  ATQNameOrDerived::Ptr qname2 = node2->dmNodeName(context);
  if((qname1.isNull() && qname2.notNull()) || (qname1.notNull() && qname2.isNull())) {
    return false;
  }
  if(qname1.notNull() && qname2.notNull() && !qname1->equals(qname2, context)) {
    return false;
  }

  // If the two nodes are text nodes, comment nodes, processing instruction nodes, or namespace nodes,
  // then the result is true if and only if the two nodes have equal string-values, when compared using
  // the selected collation.
  const XMLCh* nodeType=node1->dmNodeKind();
  if(XPath2Utils::equals(nodeType, Node::text_string) ||
     XPath2Utils::equals(nodeType, Node::comment_string) ||
     XPath2Utils::equals(nodeType, Node::processing_instruction_string) ||
     XPath2Utils::equals(nodeType, Node::namespace_string)) {

    const XMLCh *node1str = node1->dmStringValue(context);
    const XMLCh *node2str = node2->dmStringValue(context);

    return context->getDefaultCollation()->compare(node1str, node2str) == 0;
  }

  if(XPath2Utils::equals(nodeType, Node::attribute_string)) {
    return deep_equal(node1->dmTypedValue(context), node2->dmTypedValue(context), collation, context);
  }

  // If either node has attributes, then the result is false if either node has an attribute that is not
  // deep-equal to an attribute of the other node, using the selected collation.
  Sequence attrs1 = node1->dmAttributes(context).toSequence(context);
  Sequence attrs2 = node2->dmAttributes(context).toSequence(context);
  if(attrs1.getLength() != attrs2.getLength()) return false;

  for(Sequence::iterator i = attrs1.begin(); i != attrs1.end(); ++i) {
    bool result = false;
    for(Sequence::iterator j = attrs2.begin(); j != attrs2.end(); ++j) {
      result = node_deep_equal((const Node::Ptr)*i, (const Node::Ptr)*j, collation, context);
      if(result) break;
    }
    if(!result) return false;
  }
  // If neither node has element children, then the result is true only if the other node also has simple
  // content, and if the simple content of the two nodes (that is, the result of the xf:data function) is
  // equal under the rules for the xf:deep-equal function, using the selected collation.
  // (Note: attributes always have simple content.)
  Result children1 = node1->dmChildren(context);
  Result children2 = node2->dmChildren(context);
  bool bHasSubElements1 = false, bHasSubElements2 = false;

  Sequence sChildren1 = Sequence(context->getMemoryManager());
  Sequence sChildren2 = Sequence(context->getMemoryManager());

  if(!children1.isNull() && !children2.isNull())
  {
    Node::Ptr child;
    while((child = children1.next(context)).notNull()) {
      if(child->dmNodeKind() == Node::element_string) {
        bHasSubElements1=true;
        sChildren1.addItem(child);
      }
      else if(child->dmNodeKind() == Node::text_string) {
        sChildren1.addItem(child);
      }
    }
    while((child = children2.next(context)).notNull()) {
      if(child->dmNodeKind() == Node::element_string) {
        bHasSubElements2=true;
        sChildren2.addItem(child);
      }
      else if(child->dmNodeKind() == Node::text_string) {
        sChildren2.addItem(child);
      }
    }
  }
  if(!bHasSubElements1 && !bHasSubElements2) {
    return deep_equal(node1->dmTypedValue(context),node2->dmTypedValue(context), collation, context);
  }
  return deep_equal(sChildren1,sChildren2,collation,context);
}

Sequence FunctionDeepEqual::collapseTreeInternal(DynamicContext* context, int flags) const
{
	Sequence arg1=getParamNumber(1,context);
	Sequence arg2=getParamNumber(2,context);

	Collation* collation=NULL;
	if(getNumArgs()>2) {
      Sequence collArg = getParamNumber(3,context);
      const XMLCh* collName = collArg.first()->asString(context);
      try {
        context->getPathanFactory()->createAnyURI(collName, context);
      } catch(InvalidLexicalSpaceException &e) {
        DSLthrow(FunctionException, X("FunctionDeepEqual::collapseTreeInternal"), X("Invalid collationURI"));  
      }
      collation=context->getCollation(collName);
      if(collation==NULL)
        DSLthrow(FunctionException,X("FunctionDeepEqual::collapseTreeInternal"),X("Collation object is not available"));
	}
	else
      collation=context->getDefaultCollation();
    if(collation==NULL)
      collation=context->getCollation(CodepointCollation::getCodepointCollationName());

    bool bEqual=deep_equal(arg1, arg2, collation, context);

	return Sequence(context->getPathanFactory()->createBoolean(bEqual, context),
                  context->getMemoryManager());
}




