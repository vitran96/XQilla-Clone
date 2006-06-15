/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

%{

#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include "../lexer/XQueryScanner.hpp"

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQDebugHook.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/dom/DOMXPathNamespace.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/util/XMLUri.hpp>

#include <xqilla/items/AnyAtomicTypeConstructor.hpp>

#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQParenthesizedExpr.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/ast/XQInstanceOf.hpp>
#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/ast/XQCastableAs.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQContextItem.hpp>

#include <xqilla/parser/QName.hpp>

#include <xqilla/operators/Equals.hpp>
#include <xqilla/operators/GeneralComp.hpp>
#include <xqilla/operators/NotEquals.hpp>
#include <xqilla/operators/LessThan.hpp>
#include <xqilla/operators/GreaterThan.hpp>
#include <xqilla/operators/LessThanEqual.hpp>
#include <xqilla/operators/GreaterThanEqual.hpp>
#include <xqilla/operators/Plus.hpp>
#include <xqilla/operators/Minus.hpp>
#include <xqilla/operators/Multiply.hpp>
#include <xqilla/operators/Divide.hpp>
#include <xqilla/operators/IntegerDivide.hpp>
#include <xqilla/operators/Mod.hpp>
#include <xqilla/operators/UnaryMinus.hpp>
#include <xqilla/operators/NodeComparison.hpp>
#include <xqilla/operators/OrderComparison.hpp>
#include <xqilla/operators/Intersect.hpp>
#include <xqilla/operators/Except.hpp>
#include <xqilla/operators/Union.hpp>
#include <xqilla/operators/Or.hpp>
#include <xqilla/operators/And.hpp>
#include <xqilla/operators/Range.hpp>

#include <xqilla/functions/FunctionConstructor.hpp>

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#ifdef HAVE_CONFIG_H
#include "../config/xqilla_config.h"
#endif

#define YYPARSE_PARAM qp
#define YYDEBUG 1
#define YYERROR_VERBOSE

// this removes a memory leak occurring when an error is found in the query (we throw an exception from inside
// yyerror, preventing the bison-generated code from cleaning up the memory); by defining this macro we use 
// stack-based memory instead of the heap
#define YYSTACK_USE_ALLOCA	1
#if HAVE_ALLOCA_H
#include <alloca.h>
#elif defined __GNUC__
#undef alloca
#define alloca __builtin_alloca
#elif defined _AIX
#define alloca __alloca
#elif defined _MSC_VER
#include <malloc.h>
#else
#include <stddef.h>
#ifdef __cplusplus
extern "C"
#endif
void *alloca (size_t);
#endif

#define QP						((XQueryParserArgs*)qp)
#define CONTEXT					(QP->_context)
#define MEMMGR					(CONTEXT->getMemoryManager())
#define WRAP(pos,object)		(wrapForDebug((QP),(object),NULL  ,(pos).first_line, (pos).first_column))
#define FNWRAP(pos,name,object)	(wrapForDebug((QP),(object),(name),(pos).first_line, (pos).first_column))

#define BIT_ORDERING_SPECIFIED	                0
#define BIT_BOUNDARY_SPECIFIED	                1
#define BIT_COLLATION_SPECIFIED	                2
#define BIT_BASEURI_SPECIFIED	                3
#define BIT_CONSTRUCTION_SPECIFIED	            4
#define BIT_EMPTYORDERING_SPECIFIED             5
#define BIT_COPYNAMESPACE_SPECIFIED             6
#define BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED   7
#define BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED  8
#define BIT_DECLARE_SECOND_STEP                 9

#undef yylex
#define yylex QP->_scanner->yylex
#undef yyerror
#define yyerror QP->_scanner->error

static XMLCh szQuote[]=		 { XERCES_CPP_NAMESPACE_QUALIFIER chDoubleQuote, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szApos[]=		 { XERCES_CPP_NAMESPACE_QUALIFIER chSingleQuote, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szCurlyOpen[]=  { XERCES_CPP_NAMESPACE_QUALIFIER chOpenCurly, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szCurlyClose[]= { XERCES_CPP_NAMESPACE_QUALIFIER chCloseCurly, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szFLWOR[] =     { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_L, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_W, 
                               XERCES_CPP_NAMESPACE_QUALIFIER chLatin_O, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_R, XERCES_CPP_NAMESPACE_QUALIFIER chNull }; 
static XMLCh sz1_0[]=        { XERCES_CPP_NAMESPACE_QUALIFIER chDigit_1, XERCES_CPP_NAMESPACE_QUALIFIER chPeriod, XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0, 
                               XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szTrue[]=       { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szFalse[]=      { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szNOTATION[] =  { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_O, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T, 
                               XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_I, 
                               XERCES_CPP_NAMESPACE_QUALIFIER chLatin_O, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chNull }; 

static inline bool isAllSpaces(const XMLCh* str)
{
	while(*str)
	{
		if(*str!='\r' && *str != '\n' && *str != ' ' && *str != '\t')
			return false;
		str++;
	}
	return true;
}

static inline XQNav* getNavigation(ASTNode *possibleNav, XPath2MemoryManager * expr)
{
	ASTNode* originalObj=possibleNav;
	if((unsigned int)possibleNav->getType()==ASTNode::DEBUG_HOOK)
		possibleNav=((XQDebugHook*)possibleNav)->m_impl;
	if(possibleNav->getType()==ASTNode::NAVIGATION)
		return (XQNav*)possibleNav;
	else
	{
		XQNav* nav=new (expr) XQNav(expr);
		nav->addStep(originalObj);
		return nav;
	}
}

static inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr)
{
	VectorOfASTNodes args=VectorOfASTNodes(2,(ASTNode*)NULL,XQillaAllocator<ASTNode*>(memMgr));
	args[0]=arg1Impl;
	args[1]=arg2Impl;

	return args;
}

static void merge_strings(DynamicContext* context, VectorOfASTNodes* vec, XMLCh* toBeAdded)
{
	if(vec->size()>0 && vec->back()->getType()==ASTNode::LITERAL)
	{
		XQLiteral *lit = (XQLiteral*)vec->back();
		const XMLCh* string=lit->getItemConstructor()->createItem(context)->asString(context);
		string=XPath2Utils::concatStrings(string,toBeAdded,context->getMemoryManager());

		AnyAtomicTypeConstructor *ic = new (context->getMemoryManager())
    		AnyAtomicTypeConstructor(
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
            string, AnyAtomicType::STRING);
    	lit->setItemConstructor(ic);
	}
	else
	{
    	AnyAtomicTypeConstructor *ic = new (context->getMemoryManager())
      		AnyAtomicTypeConstructor(
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
				toBeAdded, AnyAtomicType::STRING);

		vec->push_back(new (context->getMemoryManager())
                   XQLiteral(ic, context->getMemoryManager()));
	}
}

static ASTNode* wrapForDebug(XQueryParserArgs *qp, ASTNode* pObjToWrap,
                              const XMLCh* fnName, unsigned int line, unsigned int column)
{
  if(!CONTEXT->isDebuggingEnabled() && !CONTEXT->getDebugCallback())
    return pObjToWrap;
  if(fnName==NULL && (unsigned int)pObjToWrap->getType()==ASTNode::DEBUG_HOOK)
    return pObjToWrap;
  return new (MEMMGR) XQDebugHook(QP->_query->getFile(), line, column, pObjToWrap, fnName, MEMMGR);
}

namespace XQuery {

%}

/* this gives a nice name to the $end token */
%token MYEOF 0										"<end of file>"

/* str */
%token <str> _QNAME_								"<qualified name>"
%token <str> _FUNCTION_CALL_						"<function>("
%token <str> _TAG_NAME_								"<tag name>"
%token <str> _ATTRIBUTE_NAME_						"<attribute name>"
%token <str> _STRING_LITERAL_						"'...'"
%token <str> _VARIABLE_								"<variable name>"
%token <str> _CHAR_									"<char>"
%token <str> _CHAR_REF_								"&#XXX;"
%token <str> _PREDEFINED_ENTITY_REF_				"<predefined entity ref>"
%token <str> _NCNAME_COLON_STAR_					"<ns>:*"
%token <str> _STAR_COLON_NCNAME_					"*:<local name>"
%token <str> _NCNAME_								"<local name>"
%token <str> _PI_TARGET_							"<processing instruction target>"
%token <str> _NAMED_ATTRIBUTE_CONSTR_				"attribute <name> {"
%token <str> _NAMED_ELEMENT_CONSTR_					"element <name> {"
%token <str> _INTEGER_NUMBER_						"<integer number>"
%token <str> _DECIMAL_NUMBER_						"<decimal number>"
%token <str> _DOUBLE_NUMBER_						"<double number>"
%token <str> _XML_COMMENT_							"<!-- ... -->"
%token <str> _CDATA_SECTION_						"<![CDATA[...]]>"
%token <str> _PROCESSING_INSTRUCTION_CONTENT_		"...?>"
%token <str> _NAMED_PROCESSING_INSTRUCTION_CONSTR_  "processing-instruction <pi> {"
%token <str> _PRAGMA_NAME_							"<pragma name>"
%token <str> _PRAGMA_CONTENT_						"<pragma content>"

/* tok */
%token _XQUERY_COMMENT_					"(: comment :)"
%token _XQUERY_WHITESPACE_ 
%token _XQUERY_ERROR_ 
%token _PRAGMA_OPEN_					"(#"
%token _PRAGMA_CLOSE_					"#)"
%token _ESCAPE_APOS_					"''"
%token _ESCAPE_QUOT_					"\"\""
%token _COMMA_							","
%token _RETURN_							"return"
%token _FOR_							"for"
%token _IN_								"in"
%token _DOLLAR_SIGN_					"$"
%token _AT_KEYWORD_						"at"
%token _LET_							"let"
%token _COLON_EQ_						":="
%token _WHERE_							"where"
%token _BY_		        				"by"
%token _ORDER_  						"order"
%token _STABLE_         				"stable"
%token _ASCENDING_						"ascending"
%token _DESCENDING_						"descending"
%token _EMPTY_KEYWORD_                  "empty"
%token _GREATEST_					    "greatest"
%token _LEAST_					        "least"
%token _COLLATION_						"collation"
%token _SOME_							"some"
%token _EVERY_							"every"
%token _SATISFIES_						"satisfies"
%token _TYPESWITCH_						"typeswitch"
%token _CASE_							"case"
%token _AS_								"as"
%token _IF_								"if"
%token _THEN_							"then"
%token _ELSE_							"else"
%token _OR_								"or"
%token _AND_							"and"
%token _INSTANCE_   					"instance"
%token _OF_            					"of"
%token _CASTABLE_					    "castable"
%token _TO_								"to"
%token _PLUS_							"+ (arithmetic operator)"
%token _MINUS_							"- (arithmetic operator)"
%token _MULTIPLY_						"* (arithmetic operator)"
%token _DIV_							"div"
%token _INTEGER_DIV_					"idiv"
%token _MOD_							"mod"
%token _UNION_							"union"
%token _VERTICAL_BAR_					"|"
%token _INTERSECT_						"intersect"
%token _EXCEPT_							"except"
%token _SLASH_							"/"
%token _SLASHSLASH_						"//"
%token _LBRACK_							"["
%token _RBRACK_							"]"
%token _VALIDATE_       				"validate"
%token _MODE_LAX_				        "lax"
%token _MODE_STRICT_			        "strict"
%token _CAST_						    "cast"
%token _TREAT_  						"treat"
%token _EQUALS_							"= (comparison operator)"
%token _NOT_EQUALS_						"!="
%token _LT_								"< (comparison operator)"
%token _LT_EQUALS_						"<="
%token _GT_								"> (comparison operator)"
%token _GT_EQUALS_						">="
%token _FORTRAN_EQ_						"eq"
%token _FORTRAN_NE_						"ne"
%token _FORTRAN_LT_						"lt"
%token _FORTRAN_LE_						"le"
%token _FORTRAN_GT_						"gt"
%token _FORTRAN_GE_						"ge"
%token _IS_								"is"
%token _LT_LT_							"<<"
%token _GT_GT_							">>"
%token _DOT_							"."
%token _AT_								"@"
%token _DOT_DOT_						".."
%token _AXIS_CHILD_						"child::"
%token _AXIS_DESCENDANT_				"descendant::"
%token _AXIS_ATTRIBUTE_					"attribute::"
%token _AXIS_SELF_						"self::"
%token _AXIS_DESCENDANT_OR_SELF_		"descendant-or-self::"
%token _AXIS_PARENT_					"parent::"
%token _STAR_							"* (wildcard)"
%token _PROCESSING_INSTRUCTION_LPAR_	"processing-instruction("
%token _COMMENT_LPAR_					"comment("
%token _TEXT_LPAR_						"text("
%token _NODE_LPAR_						"node("
%token _LPAR_							"("
%token _RPAR_							")"
%token _START_TAG_OPEN_					"<"
%token _EMPTY_TAG_CLOSE_				"/>"
%token _VALUE_INDICATOR_				"="
%token _END_TAG_OPEN_					">"
%token _TAG_CLOSE_						"</"
%token _DOCUMENT_CONSTR_				"document {"
%token _ELEMENT_CONSTR_					"element {"
%token _ATTRIBUTE_CONSTR_				"attribute {"
%token _TEXT_CONSTR_					"text {"
%token _PROCESSING_INSTRUCTION_START_	"<?"
%token _LCURLY_BRACE_ESCAPE_			"{{"
%token _RCURLY_BRACE_ESCAPE_			"}}"
%token _OPEN_QUOT_						"\" (open)"
%token _CLOSE_QUOT_						"\" (close)"
%token _OPEN_APOS_						"' (open)"
%token _CLOSE_APOS_						"' (close)"
%token _LBRACE_							"{"
%token _RBRACE_							"}"
%token _PRESERVE_						"preserve"
%token _STRIP_							"strip"
%token _NAMESPACE_						"namespace"
%token _EXPR_AS_						") as"
%token _EMPTY_							"empty-sequence()"
%token _ITEM_							"item()"
%token _NILLABLE_						"?"
%token _DOCUMENT_NODE_LPAR_				"document-node("
%token _ATTRIBUTE_LPAR_					"attribute("
%token _ELEMENT_LPAR_					"element("
%token _EXTERNAL_						"external"
%token _PROCESSING_INSTRUCTION_CONSTR_	"processing-instruction {"
%token _COMMENT_CONSTR_					"comment {"
%token _AXIS_ANCESTOR_OR_SELF_			"ancestor-or-self::"
%token _AXIS_ANCESTOR_					"ancestor::"
%token _AXIS_FOLLOWING_SIBLING_			"following-sibling::"
%token _AXIS_FOLLOWING_					"following::"
%token _AXIS_PRECEDING_SIBLING_			"preceding-sibling::"
%token _AXIS_PRECEDING_					"preceding::"
%token _SEMICOLON_						";"
%token _SCHEMA_ELEMENT_LPAR_			"schema-element("
%token _SCHEMA_ATTRIBUTE_LPAR_			"schema-attribute("
%token _ORDERED_						"ordered {"
%token _UNORDERED_						"unordered {"
%token _ORDERING_UNORDERED_				"unordered"
%token _ORDERING_ORDERED_				"ordered"
%token _ZERO_OR_ONE_					"? (occurrence)"
%token _ONE_OR_MORE_					"+ (occurrence)"
%token _ZERO_OR_MORE_					"* (occurrence)"
%token _ENCODING_						"encoding"
%token _NO_PRESERVE_					"no-preserve"
%token _INHERIT_						"inherit"
%token _NO_INHERIT_						"no-inherit"
%token _DECLARE_						"declare"
%token _BOUNDARYSPACE_					"boundary-space"
%token _BASEURI_						"base-uri"
%token _CONSTRUCTION_					"construction"
%token _ORDERING_						"ordering"
%token _DEFAULT_					    "default"
%token _COPY_NAMESPACES_				"copy-namespaces"
%token _VARIABLE_KEYWORD_				"variable"
%token _OPTION_					        "option"
%token _XQUERY_							"xquery"
%token _VERSION_						"version"
%token _IMPORT_						    "import"
%token _SCHEMA_					        "schema"
%token _MODULE_					        "module"
%token _ELEMENT_				        "element"
%token _FUNCTION_				        "function"
%token _EOF_

%type <functDecl>			FunctionDecl 
%type <funcParam>			Param
%type <funcParams>			ParamList
%type <astNode>			Expr ExprSingle OrExpr AndExpr EnclosedExpr FLWORExpr IfExpr ComparisonExpr DecimalLiteral VarRef
%type <astNode>			RangeExpr AdditiveExpr MultiplicativeExpr UnionExpr QuantifiedExpr StringLiteral Literal ContextItemExpr
%type <astNode>			UnaryExpr ValidateExpr CastExpr TreatExpr IntersectExceptExpr ParenthesizedExpr PrimaryExpr FunctionCall
%type <astNode>			RelativePathExpr StepExpr AxisStep FilterExpr TypeswitchExpr ValueExpr PathExpr NumericLiteral IntegerLiteral 
%type <astNode>			CastableExpr Constructor ComputedConstructor DirElemConstructor DirCommentConstructor DirPIConstructor  
%type <astNode>			CompElemConstructor CompTextConstructor CompPIConstructor CompCommentConstructor OrderedExpr UnorderedExpr
%type <astNode>			CompAttrConstructor WhereClause CompDocConstructor DoubleLiteral InstanceofExpr DirectConstructor 
%type <astNode>			ContentExpr ExtensionExpr 
%type <astNode>      		ForwardStep ReverseStep AbbrevForwardStep AbbrevReverseStep
%type <itemList>			DirElementContent DirAttributeList QuotAttrValueContent AposAttrValueContent DirAttributeValue FunctionCallArgumentList
%type <predicates>    PredicateList
%type <axis>          		ForwardAxis ReverseAxis
%type <nodeTest>			NodeTest NameTest KindTest AttributeTest SchemaAttributeTest
%type <nodeTest>			Wildcard PITest CommentTest TextTest AnyKindTest ElementTest DocumentTest SchemaElementTest
%type <qName>				QName AtomicType TypeName ElementName AttributeName ElementNameOrWildcard AttribNameOrWildcard AttributeDeclaration ElementDeclaration
%type <sequenceType>		SequenceType TypeDeclaration SingleType
%type <occurrence>			OccurrenceIndicator
%type <itemType>			ItemType 
%type <variableBinding>		ForBinding LetBinding QuantifyBinding
%type <variableBindingList> FlworExprForLetList ForOrLetClause ForClause LetClause ForBindingList LetBindingList QuantifyBindingList
%type <clause>				CaseClause
%type <clauseList>			CaseClauseList
%type <sortModifier>		OrderDirection EmptyHandling
%type <sortSpecList>		OrderSpecList 
%type <sortSpec>			OrderSpec
%type <sort>				OrderByClause
%type <stringList>			ResourceLocations
%type <str>					PositionalVar SchemaPrefix CommonContent CdataSection URILiteral
%type <str>                 PreserveMode InheritMode

%start Module

%pure_parser

%%

// Parser rules go here.

// [1]    Module    ::=      VersionDecl? (MainModule | LibraryModule)
Module:
	VersionDecl MainModule
	| VersionDecl LibraryModule
	| MainModule
	| LibraryModule
	;

// [2]    VersionDecl    ::=    <"xquery" "version" StringLiteral> ("encoding" StringLiteral)? Separator
VersionDecl:
	_XQUERY_ _VERSION_ _STRING_LITERAL_ Separator
	{
		if(!XPath2Utils::equals($3,sz1_0))
			yyerror("This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
	}
	| _XQUERY_ _VERSION_ _STRING_LITERAL_ _ENCODING_ _STRING_LITERAL_ Separator
	{
		if(!XPath2Utils::equals($3,sz1_0))
			yyerror("This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
        bool bValidEnc=false;
        if(($5[0] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A && $5[0] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Z) ||
           ($5[0] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a && $5[0] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z))
        {
            bValidEnc=true;
            int nLen=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen($5);
            for(int i=1;i<nLen;i++)
            {
                if(($5[i] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A && $5[i] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Z) ||
                   ($5[i] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a && $5[i] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z) ||
                   ($5[i] >= XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0 && $5[i] <= XERCES_CPP_NAMESPACE_QUALIFIER chDigit_9) ||
                   $5[i] == XERCES_CPP_NAMESPACE_QUALIFIER chPeriod ||
                   $5[i] == XERCES_CPP_NAMESPACE_QUALIFIER chDash)
                {
                    continue;
                }
                bValidEnc=false;
                break;
            }
        }
        if(!bValidEnc)
          yyerror("The specified encoding does not conform to the definition of EncName [err:XQST0087]");
		// TODO: store the encoding somewhere
	}
	;

// [3]    MainModule    ::=    Prolog QueryBody 
MainModule:
	Prolog QueryBody
	{
	}
	;

// [4]    LibraryModule    ::=    ModuleDecl Prolog 
LibraryModule:
	ModuleDecl Prolog
	{
	}
	;

// [5]    ModuleDecl    ::=    <"module" "namespace"> NCName "=" URILiteral Separator
ModuleDecl:
	_MODULE_ _NAMESPACE_ _NCNAME_ _EQUALS_ URILiteral Separator
	{
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen($5)==0)
			yyerror("The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
		QP->_query->setIsLibraryModule();
		QP->_query->setModuleTargetNamespace($5);
		CONTEXT->setNamespaceBinding($3,$5);
	}
	;

// [6]    Prolog    ::=    ((Setter | Import | NamespaceDecl | DefaultNamespaceDecl) Separator)* 
//						   ((VarDecl | FunctionDecl | OptionDecl) Separator)*
Prolog:
	/* empty */
	| Prolog Setter Separator
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains a setter declaration after a variable, function or option declaration");
    }
	| Prolog Import Separator
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains an import declaration after a variable, function or option declaration");
    }
	| Prolog NamespaceDecl Separator
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains a namespace declaration after a variable, function or option declaration");
    }
	| Prolog DefaultNamespaceDecl Separator
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains a default namespace declaration after a variable, function or option declaration");
    }
	| Prolog VarDecl Separator
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    }
	| Prolog FunctionDecl Separator
	{
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
		XQUserFunction* decl=$2;
		CONTEXT->addCustomFunction(decl);
		QP->_query->addFunction(decl);
	}
	| Prolog OptionDecl Separator
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    }
;

// [7]    Setter    ::=   BoundarySpaceDecl  
//						| DefaultCollationDecl 
//						| BaseURIDecl 
//						| ConstructionDecl 
//						| OrderingModeDecl
//						| EmptyOrderDecl 
//						| CopyNamespacesDecl 
Setter:
	BoundarySpaceDecl  
	| DefaultCollationDecl 
	| BaseURIDecl 
	| ConstructionDecl 
	| OrderingModeDecl 
	| EmptyOrderDecl 
	| CopyNamespacesDecl 
;	

// [8]    Import    ::=    SchemaImport | ModuleImport 
Import:
	SchemaImport
	| ModuleImport
;

// [9]    Separator    ::=    ";" 
Separator:
	_SEMICOLON_
	;

// [10]    NamespaceDecl    ::=    <"declare" "namespace"> NCName "=" URILiteral 
NamespaceDecl:
	  _DECLARE_ _NAMESPACE_ _NCNAME_ _EQUALS_ URILiteral 
		{
            if(!XPath2Utils::equals($3,X("xml")) && !XPath2Utils::equals($3,X("xmlns")) &&
               !XPath2Utils::equals($3,X("xs")) && !XPath2Utils::equals($3,X("xsi")) &&
               !XPath2Utils::equals($3,X("fn")) && !XPath2Utils::equals($3,X("xdt")) && 
               !XPath2Utils::equals($3,X("local")) )
            {
		        try
		        {
			        CONTEXT->getUriBoundToPrefix($3);
                    // if it has already bound, report an error
                    yyerror("Namespace prefix has already been bound to a namespace [err:XQST0033]");
		        }
		        catch(NamespaceLookupException&)
		        {
                }
            }
            CONTEXT->setNamespaceBinding($3,$5);
		}
	;

// [11]    BoundarySpaceDecl     ::=    <"declare" "boundary-space"> ("preserve" |  "strip") 
BoundarySpaceDecl :
	  _DECLARE_ _BOUNDARYSPACE_ _PRESERVE_
		{
		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror("Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(true);
		}
	| _DECLARE_ _BOUNDARYSPACE_ _STRIP_
		{
		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror("Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(false);
		}
	;

// [12]    DefaultNamespaceDecl    ::=    (<"declare" "default" "element"> |  <"declare" "default" "function">) "namespace" URILiteral 
DefaultNamespaceDecl:
	  _DECLARE_ _DEFAULT_ _ELEMENT_ _NAMESPACE_ URILiteral
		{
		    if(QP->_flags.get(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED))
			    yyerror("Prolog contains more than one default element namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultElementAndTypeNS($5);
		}
	| _DECLARE_ _DEFAULT_ _FUNCTION_ _NAMESPACE_ URILiteral
		{ 
		    if(QP->_flags.get(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED))
			    yyerror("Prolog contains more than one default function namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultFuncNS($5);
		}
	;

// [13]   	OptionDecl	   ::=   	<"declare" "option"> QName StringLiteral
OptionDecl:
	  _DECLARE_ _OPTION_ _QNAME_ _STRING_LITERAL_
      {
        // validate the QName
		QualifiedName qName($3);
        const XMLCh* prefix=qName.getPrefix();
        if(prefix==NULL || *prefix==0)
			yyerror("The option name must have a prefix [err:XPST0081]");

		try
		{
			CONTEXT->getUriBoundToPrefix(prefix);
		}
		catch(NamespaceLookupException&)
		{
			yyerror("The option name is using an undefined namespace prefix [err:XPST0081]");
		}
      }
	;

// [14]    OrderingModeDecl    ::=    <"declare" "ordering"> ("ordered" | "unordered") 
OrderingModeDecl:
	_DECLARE_ _ORDERING_ _ORDERING_ORDERED_
	{
		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror("Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
	}
	| _DECLARE_ _ORDERING_ _ORDERING_UNORDERED_
	{
		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror("Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
	}
	;

// [15]    EmptyOrderDecl    ::=    <"declare" "default" "order"> (<"empty" "greatest"> | <"empty" "least">) 
EmptyOrderDecl:
	_DECLARE_ _DEFAULT_ _ORDER_ _EMPTY_KEYWORD_ _GREATEST_
	{ 
		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror("Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
	}
	| _DECLARE_ _DEFAULT_ _ORDER_ _EMPTY_KEYWORD_ _LEAST_
	{ 
		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror("Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
	}
	;

// [16]    CopyNamespacesDecl    ::=     <"declare" "copy-namespaces"> PreserveMode "," InheritMode
CopyNamespacesDecl:
	_DECLARE_ _COPY_NAMESPACES_ PreserveMode _COMMA_ InheritMode
    {
		if(QP->_flags.get(BIT_COPYNAMESPACE_SPECIFIED))
			yyerror("Prolog contains more than one copy namespace declaration [err:XQST0055]");
		QP->_flags.set(BIT_COPYNAMESPACE_SPECIFIED);
		CONTEXT->setPreserveNamespaces(XPath2Utils::equals($3,szTrue));
		CONTEXT->setInheritNamespaces(XPath2Utils::equals($5,szTrue));
    }
;

// [17]   	PreserveMode	   ::=   	"preserve" | "no-preserve"
PreserveMode:
	  _PRESERVE_
	{
        $$ = szTrue;
	}
	| _NO_PRESERVE_
	{
        $$ = szFalse;
	}
	;

// [18]   	InheritMode	   ::=   	"inherit" | "no-inherit"
InheritMode:
	  _INHERIT_
	{
        $$ = szTrue;
	}
	| _NO_INHERIT_
	{
        $$ = szFalse;
	}
	;

// [19]    DefaultCollationDecl    ::=    <"declare" "default" "collation"> URILiteral 
DefaultCollationDecl:
		_DECLARE_ _DEFAULT_ _COLLATION_ URILiteral
		{
		    if(QP->_flags.get(BIT_COLLATION_SPECIFIED))
			    yyerror("Prolog contains more than one default collation declaration [err:XQST0038]");
		    QP->_flags.set(BIT_COLLATION_SPECIFIED);
            try
            {
                CONTEXT->getCollation($4);
            }
            catch(ContextException&)
            {
			    yyerror("The specified collation does not exist [err:XQST0038]");
            }
			CONTEXT->setDefaultCollation($4);
		}
	  ;

// [20]    BaseURIDecl    ::=    <"declare" "base-uri"> URILiteral
BaseURIDecl:
		_DECLARE_ _BASEURI_ URILiteral
		{
		    if(QP->_flags.get(BIT_BASEURI_SPECIFIED))
			    yyerror("Prolog contains more than one base URI declaration [err:XQST0032]");
		    QP->_flags.set(BIT_BASEURI_SPECIFIED);
			CONTEXT->setBaseURI($3);
		}
	  ;

// [21]    SchemaImport    ::=    <"import" "schema"> SchemaPrefix? URILiteral (<"at" URILiteral> ("," URILiteral)*)?
SchemaImport:
        _IMPORT_ _SCHEMA_ SchemaPrefix URILiteral
		{
			if(XPath2Utils::equals($3, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				CONTEXT->setDefaultElementAndTypeNS($4);
			else if(XPath2Utils::equals($4, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				yyerror("A schema that has no target namespace cannot be bound to non-empty prefix [err:XQST0057]");
			else
				CONTEXT->setNamespaceBinding($3,$4);
            try {
			  CONTEXT->addSchemaLocation($4,NULL);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), @1.first_line, @1.first_column);
              throw e;
            }
		}
	  | _IMPORT_ _SCHEMA_ SchemaPrefix URILiteral ResourceLocations
		{
			if(XPath2Utils::equals($3, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				CONTEXT->setDefaultElementAndTypeNS($4);
			else if(XPath2Utils::equals($4, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				yyerror("A schema that has no target namespace cannot be bound to non-empty prefix [err:XQST0057]");
			else
				CONTEXT->setNamespaceBinding($3,$4);
            try {
			  CONTEXT->addSchemaLocation($4,$5);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), @1.first_line, @1.first_column);
              throw e;
            }
		}
	  | _IMPORT_ _SCHEMA_ URILiteral
		{ 
            try {
			  CONTEXT->addSchemaLocation($3,NULL);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), @1.first_line, @1.first_column);
              throw e;
            }
		}
	  | _IMPORT_ _SCHEMA_ URILiteral ResourceLocations
		{
            try {
			  CONTEXT->addSchemaLocation($3,$4);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), @1.first_line, @1.first_column);
              throw e;
            }
		}
	  ;

ResourceLocations:
	_AT_KEYWORD_ URILiteral
	{
		$$ = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
		$$->push_back($2);
	}
	| ResourceLocations _COMMA_ URILiteral
	{
		$1->push_back($3);
		$$ = $1;
	}
;

// [22]    SchemaPrefix    ::=    ("namespace" NCName "=") |  (<"default" "element"> "namespace") 
SchemaPrefix:
	  _NAMESPACE_ _NCNAME_ _EQUALS_
		{
			$$ = $2;
		}
	| _DEFAULT_ _ELEMENT_ _NAMESPACE_
		{
			$$ = (XMLCh*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
		}
	;

// [23]    ModuleImport    ::=    <"import" "module"> ("namespace" NCName "=")? URILiteral (<"at" URILiteral> ("," URILiteral)*)?
ModuleImport:
	_IMPORT_ _MODULE_ _NAMESPACE_ _NCNAME_ _EQUALS_ URILiteral ResourceLocations
	{
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen($6)==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
		CONTEXT->setNamespaceBinding($4,$6);
        try {
		  QP->_query->importModule($6,$7,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), @1.first_line, @1.first_column);
          throw e;
        }
	}
	| _IMPORT_ _MODULE_ _NAMESPACE_ _NCNAME_ _EQUALS_ URILiteral 
	{
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen($6)==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
		CONTEXT->setNamespaceBinding($4,$6);
        try {
		  QP->_query->importModule($6,NULL,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), @1.first_line, @1.first_column);
          throw e;
        }
	}
	| _IMPORT_ _MODULE_ URILiteral ResourceLocations
	{
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen($3)==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule($3,$4,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), @1.first_line, @1.first_column);
          throw e;
        }
	}
	| _IMPORT_ _MODULE_ URILiteral 
	{
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen($3)==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule($3,NULL,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), @1.first_line, @1.first_column);
          throw e;
        }
	}
	;

// [24]    VarDecl    ::=    <"declare" "variable" "$"> VarName TypeDeclaration? ((":=" ExprSingle) | "external")
VarDecl:
	_DECLARE_ _VARIABLE_KEYWORD_ _DOLLAR_SIGN_ _VARIABLE_ TypeDeclaration _COLON_EQ_ ExprSingle
	{
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable($4,$5,
                                                            WRAP(@7, $7),MEMMGR);
		QP->_query->addVariable(var);
	}
	| _DECLARE_ _VARIABLE_KEYWORD_ _DOLLAR_SIGN_ _VARIABLE_ _COLON_EQ_ ExprSingle
	{
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable($4,new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),
                                                            WRAP(@6, $6),MEMMGR);
		QP->_query->addVariable(var);
	}
	| _DECLARE_ _VARIABLE_KEYWORD_ _DOLLAR_SIGN_ _VARIABLE_ TypeDeclaration _EXTERNAL_
	{
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable($4,$5,NULL,MEMMGR);
		QP->_query->addVariable(var);
	}
	| _DECLARE_ _VARIABLE_KEYWORD_ _DOLLAR_SIGN_ _VARIABLE_ _EXTERNAL_
	{
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable($4,new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),
                                                            NULL,MEMMGR);
		QP->_query->addVariable(var);
	}
	;

// [25]    ConstructionDecl    ::=    <"declare" "construction"> ("preserve" | "strip") 
ConstructionDecl:
	_DECLARE_ _CONSTRUCTION_ _PRESERVE_
	{
		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror("Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
	}
	| _DECLARE_ _CONSTRUCTION_ _STRIP_
	{
		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror("Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
	}
	;

// [26]    FunctionDecl    ::=    <"declare" "function"> <QName "("> ParamList? (")" |  (<")" "as"> SequenceType)) 
//										(EnclosedExpr | "external")
FunctionDecl:
	  _DECLARE_ _FUNCTION_ _FUNCTION_CALL_ ParamList _RPAR_ EnclosedExpr
		{
			$$ = new (MEMMGR) XQUserFunction($3,$4,WRAP(@6, $6),NULL, CONTEXT); 
		}
	| _DECLARE_ _FUNCTION_ _FUNCTION_CALL_ _RPAR_ EnclosedExpr
		{
			$$ = new (MEMMGR) XQUserFunction($3,NULL,WRAP(@5, $5),NULL, CONTEXT); 
		}
	| _DECLARE_ _FUNCTION_ _FUNCTION_CALL_ ParamList _EXPR_AS_ SequenceType EnclosedExpr
		{
			$$ = new (MEMMGR) XQUserFunction($3,$4,WRAP(@7, $7),$6, CONTEXT); 
		}
	| _DECLARE_ _FUNCTION_ _FUNCTION_CALL_ _EXPR_AS_ SequenceType EnclosedExpr
		{
			$$ = new (MEMMGR) XQUserFunction($3,NULL,WRAP(@6, $6),$5, CONTEXT); 
		}
	| _DECLARE_ _FUNCTION_ _FUNCTION_CALL_ ParamList _RPAR_ _EXTERNAL_
		{
			$$ = new (MEMMGR) XQUserFunction($3,$4,NULL,NULL, CONTEXT); 
		}
	| _DECLARE_ _FUNCTION_ _FUNCTION_CALL_ _RPAR_ _EXTERNAL_
		{
			$$ = new (MEMMGR) XQUserFunction($3,NULL,NULL,NULL, CONTEXT); 
		}
	| _DECLARE_ _FUNCTION_ _FUNCTION_CALL_ ParamList _EXPR_AS_ SequenceType _EXTERNAL_
		{
			$$ = new (MEMMGR) XQUserFunction($3,$4,NULL,$6, CONTEXT); 
		}
	| _DECLARE_ _FUNCTION_ _FUNCTION_CALL_ _EXPR_AS_ SequenceType _EXTERNAL_
		{
			$$ = new (MEMMGR) XQUserFunction($3,NULL,NULL,$5, CONTEXT); 
		}
	;

// [27]    ParamList    ::=    Param ("," Param)* 
ParamList:
        ParamList _COMMA_ Param
		{
			$1->push_back($3);
			$$ = $1;
		}
      | Param
		{
			XQUserFunction::VectorOfFunctionParameters* paramList = new (MEMMGR) XQUserFunction::VectorOfFunctionParameters(XQillaAllocator<XQUserFunction::XQFunctionParameter*>(MEMMGR));
			paramList->push_back($1);
			$$ = paramList;
		}
      ;

// [28]    Param    ::=    "$" VarName TypeDeclaration? 
Param:
        _DOLLAR_SIGN_ _VARIABLE_ TypeDeclaration
		{
			$$ = new (MEMMGR) XQUserFunction::XQFunctionParameter($2,$3,MEMMGR);
		}
	  | _DOLLAR_SIGN_ _VARIABLE_
		{
			$$ = new (MEMMGR) XQUserFunction::XQFunctionParameter($2,new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR) ,MEMMGR);
		}
      ;

// [29]    EnclosedExpr    ::=    "{" Expr "}" 
EnclosedExpr:
		_LBRACE_ Expr _RBRACE_
		{ 
			$$ = WRAP(@2, $2); 
		}
      ;

// [30]    QueryBody    ::=    Expr
QueryBody:
	Expr
	{
	    QP->_query->setQueryBody($1);
	}
	;

// [31]    Expr    ::=    ExprSingle ("," ExprSingle)* 
Expr:
		Expr _COMMA_ ExprSingle
		{
			ASTNode* prevExpr=$1;
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==ASTNode::PARENTHESIZED)
			{
				((XQParenthesizedExpr *)prevExpr)->addItem($3);
				$$ = $1;
			}
			else
			{
				XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
				dis->addItem($1);
				dis->addItem($3);
				$$ = dis;
			}
		}
	  | ExprSingle
		{
			$$ = $1;
		}
	  ;

// [32]     ExprSingle    ::=    FLWORExpr |  QuantifiedExpr |  TypeswitchExpr |  IfExpr |  OrExpr 
ExprSingle:
		FLWORExpr
	  | QuantifiedExpr
	  | TypeswitchExpr
	  | IfExpr
	  | OrExpr
	  ;

// [33]    FLWORExpr    ::=    (ForClause |  LetClause)+ WhereClause? OrderByClause? "return" ExprSingle 
FLWORExpr:
	    FlworExprForLetList WhereClause OrderByClause _RETURN_ ExprSingle
		{
			$$ = FNWRAP(@1, szFLWOR, new (MEMMGR) XQFLWOR($1, $2, $3, WRAP(@4, $5), MEMMGR));
		}
	  | FlworExprForLetList WhereClause _RETURN_ ExprSingle
		{
			$$ = FNWRAP(@1, szFLWOR, new (MEMMGR) XQFLWOR($1, $2, NULL, WRAP(@3, $4), MEMMGR));
		}
	  | FlworExprForLetList OrderByClause _RETURN_ ExprSingle
		{
			$$ = FNWRAP(@1, szFLWOR, new (MEMMGR) XQFLWOR($1, NULL, $2, WRAP(@3, $4), MEMMGR));
		}
	  | FlworExprForLetList _RETURN_ ExprSingle
		{
			$$ = FNWRAP(@1, szFLWOR, new (MEMMGR) XQFLWOR($1, NULL, NULL, WRAP(@2, $3), MEMMGR));
		}
	;

FlworExprForLetList:
		FlworExprForLetList ForOrLetClause
		{
			$$ = $1;
			for (VectorOfVariableBinding::iterator it = $2->begin(); it != $2->end (); ++it) 
				$1->push_back(*it);
		}
	  | ForOrLetClause
      ;

ForOrLetClause:
		ForClause
      | LetClause
      ;

// [34]    ForClause    ::=    <"for" "$"> VarName TypeDeclaration? PositionalVar? "in" ExprSingle 
//								  ("," "$" VarName TypeDeclaration? PositionalVar? "in" ExprSingle)* 
ForClause:
		_FOR_ ForBindingList
		{
			$$ = $2;
		}
	  ;

ForBindingList:
		ForBindingList _COMMA_ ForBinding
		{
			$$->push_back($3);
		}
	  | ForBinding
		{
			$$ = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			$$->push_back($1);
		}
	  ;

ForBinding:
	    _DOLLAR_SIGN_ _VARIABLE_ _IN_ ExprSingle 
		{
			$$ = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,$2,$4);
			$$->_line=@1.first_line;
			$$->_file=QP->_query->getFile();
		}
	  | _DOLLAR_SIGN_ _VARIABLE_ PositionalVar _IN_ ExprSingle 
		{
			$$ = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,$2,$5,$3);
			$$->_line=@1.first_line;
			$$->_file=QP->_query->getFile();
		}
	  |	_DOLLAR_SIGN_ _VARIABLE_ TypeDeclaration _IN_ ExprSingle 
		{
			$$ = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,$2,$5,NULL,$3);
			$$->_line=@1.first_line;
			$$->_file=QP->_query->getFile();
		}
	  |	_DOLLAR_SIGN_ _VARIABLE_ TypeDeclaration PositionalVar _IN_ ExprSingle 
		{
			$$ = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,$2,$6,$4,$3);
			$$->_line=@1.first_line;
			$$->_file=QP->_query->getFile();
		}
	  ;

// [35]    PositionalVar    ::=    "at" "$" VarName 
PositionalVar:
      _AT_KEYWORD_ _DOLLAR_SIGN_ _VARIABLE_
		{ 
			$$ = $3; 
		}
    ;

// [36]    LetClause    ::=    <"let" "$"> VarName TypeDeclaration? ":=" ExprSingle 
//								  ("," "$" VarName TypeDeclaration? ":=" ExprSingle)* 
LetClause:
		_LET_ LetBindingList
		{
			$$ = $2;
		}
	  ;

LetBindingList:
      LetBindingList _COMMA_ LetBinding
		{
			$1->push_back($3);
			$$ = $1;
		}
    | LetBinding
		{
			$$ = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			$$->push_back($1);
		}
    ;

LetBinding:
      _DOLLAR_SIGN_ _VARIABLE_ _COLON_EQ_ ExprSingle
		{
			$$ = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,$2,$4);
			$$->_line=@1.first_line;
			$$->_file=QP->_query->getFile();
		}
	| _DOLLAR_SIGN_ _VARIABLE_ TypeDeclaration _COLON_EQ_ ExprSingle
		{
			$$ = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,$2,$5,NULL,$3);
			$$->_line=@1.first_line;
			$$->_file=QP->_query->getFile();
		}
    ;

// [37]    WhereClause    ::=    "where" ExprSingle 
WhereClause:
      _WHERE_ ExprSingle
		{ 
			$$ = WRAP(@1, $2);
		}
    ;

// [38]    OrderByClause    ::=    (<"order" "by"> |  <"stable" "order" "by">) OrderSpecList 
OrderByClause:
	  _ORDER_ _BY_ OrderSpecList
		{
			$$=new (MEMMGR) XQSort(XQSort::unstable,$3);
		}
	| _STABLE_ _ORDER_ _BY_ OrderSpecList
		{
			$$=new (MEMMGR) XQSort(XQSort::stable,$4);
		}
	;

// [39]    OrderSpecList    ::=    OrderSpec ("," OrderSpec)* 
OrderSpecList:
	  OrderSpecList _COMMA_ OrderSpec
		{
			$1->push_back($3);
			$$ = $1;
		}
	| OrderSpec
		{
			$$ = new (MEMMGR) XQSort::VectorOfSortSpec(XQillaAllocator<XQSort::SortSpec*>(MEMMGR));
			$$->push_back($1);
		}
	;

// [40]    OrderSpec    ::=    ExprSingle OrderModifier 
// [41]    OrderModifier    ::=    ("ascending" |  "descending")? (<"empty" "greatest"> |  <"empty" "least">)? ("collation" URILiteral)? 
OrderSpec:
	  ExprSingle OrderDirection EmptyHandling
		{
			$$ = new (MEMMGR) XQSort::SortSpec($1,$2+$3,NULL);
		}
	| ExprSingle OrderDirection EmptyHandling _COLLATION_ URILiteral
		{
            try
            {
                CONTEXT->getCollation($5);
            }
            catch(ContextException&)
            {
			    yyerror("The specified collation does not exist [err:XQST0076]");
            }
			$$ = new (MEMMGR) XQSort::SortSpec($1,$2+$3,$5);
		}
	;

OrderDirection:
	  /* empty */
		{ $$ = XQSort::SortSpec::ascending; }
	|  _ASCENDING_
		{ $$ = XQSort::SortSpec::ascending; }
    | _DESCENDING_
		{ $$ = XQSort::SortSpec::descending; }
	;

EmptyHandling:
	  /* empty */
		{ 
			switch(CONTEXT->getDefaultFLWOROrderingMode())
			{
			case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
				$$ = XQSort::SortSpec::empty_least; break;
			case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
				$$ = XQSort::SortSpec::empty_greatest; break;
			}
		}
    | _EMPTY_KEYWORD_ _GREATEST_
		{ $$ = XQSort::SortSpec::empty_greatest; }
    | _EMPTY_KEYWORD_ _LEAST_
		{ $$ = XQSort::SortSpec::empty_least; }
	;

// [42]    QuantifiedExpr    ::=    (<"some" "$"> |  <"every" "$">) VarName TypeDeclaration? "in" ExprSingle 
//										("," "$" VarName TypeDeclaration? "in" ExprSingle)* "satisfies" ExprSingle 
QuantifiedExpr:
	_SOME_ QuantifyBindingList _SATISFIES_ ExprSingle
	{
		$$ = new (MEMMGR) XQQuantified(XQQuantified::some, $2, WRAP(@3, $4), MEMMGR);
	}
	| _EVERY_ QuantifyBindingList _SATISFIES_ ExprSingle
	{
		$$ = new (MEMMGR) XQQuantified(XQQuantified::every, $2, WRAP(@3, $4), MEMMGR);
	}
	;

QuantifyBindingList:
		QuantifyBindingList _COMMA_ QuantifyBinding
		{
			$$->push_back($3);
		}
	  | QuantifyBinding
		{
			$$ = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			$$->push_back($1);
		}
	  ;

QuantifyBinding:
	    _DOLLAR_SIGN_ _VARIABLE_ _IN_ ExprSingle 
		{
			$$ = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,$2,$4);
			$$->_line=@1.first_line;
			$$->_file=QP->_query->getFile();
		}
	  |	_DOLLAR_SIGN_ _VARIABLE_ TypeDeclaration _IN_ ExprSingle 
		{
			$$ = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,$2,$5,NULL,$3);
			$$->_line=@1.first_line;
			$$->_file=QP->_query->getFile();
		}
	  ;

// [43]    TypeswitchExpr    ::=    <"typeswitch" "("> Expr ")" CaseClause+ "default" ("$" VarName)? "return" ExprSingle 
TypeswitchExpr:
		_TYPESWITCH_ _LPAR_ Expr _RPAR_ CaseClauseList _DEFAULT_ _DOLLAR_SIGN_ _VARIABLE_ _RETURN_ ExprSingle
		{
			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP(@6, $10),MEMMGR->getPooledString($8));
			$$ = new (MEMMGR) XQTypeswitch( WRAP(@1, $3), $5, defClause, MEMMGR);
		}
	  | _TYPESWITCH_ _LPAR_ Expr _RPAR_ CaseClauseList _DEFAULT_ _RETURN_ ExprSingle
		{
			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP(@6, $8),NULL);
			$$ = new (MEMMGR) XQTypeswitch( WRAP(@1, $3), $5, defClause, MEMMGR);
		}
	  ;

CaseClauseList:
		CaseClauseList CaseClause
		{
			$1->push_back($2);
			$$=$1;
		}
	  | CaseClause
		{
			$$=new (MEMMGR) XQTypeswitch::VectorOfClause(XQillaAllocator<XQTypeswitch::Clause*>(MEMMGR));
			$$->push_back($1);
		}
	  ;

// [44]    CaseClause    ::=    "case" ("$" VarName "as")? SequenceType "return" ExprSingle
CaseClause:
	  _CASE_ SequenceType _RETURN_ ExprSingle
		{ 
			$$ = new (MEMMGR) XQTypeswitch::Clause($2, WRAP(@1, $4), NULL);
		}
	|  _CASE_ _DOLLAR_SIGN_ _VARIABLE_ _AS_ SequenceType _RETURN_ ExprSingle
		{ 
			$$ = new (MEMMGR) XQTypeswitch::Clause($5, WRAP(@1, $7), MEMMGR->getPooledString($3));
		}
	;

// [45]    IfExpr    ::=    <"if" "("> Expr ")" "then" ExprSingle "else" ExprSingle 
IfExpr:
	  _IF_ _LPAR_ Expr _RPAR_ _THEN_ ExprSingle _ELSE_ ExprSingle
		{ 
	        $$ = WRAP(@1, new (MEMMGR) XQIf($3, $6, $8, MEMMGR));
		}
	;

// [46]    OrExpr    ::=    AndExpr ( "or"  AndExpr )* 
OrExpr:
		OrExpr _OR_ AndExpr
		{
			ASTNode* prevExpr=$1;
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==ASTNode::OPERATOR && 
			   XPath2Utils::equals(((XQOperator*)prevExpr)->getOperatorName(),Or::name))
			{
				((Or*)prevExpr)->addArgument($3);
				$$ = prevExpr;
			}
			else
				$$ = WRAP(@1, new (MEMMGR) Or(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
	  | AndExpr
	  ;

// [47]    AndExpr    ::=    ComparisonExpr ( "and" ComparisonExpr )* 
AndExpr:
		AndExpr _AND_ ComparisonExpr
		{
			ASTNode* prevExpr=$1;
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==ASTNode::OPERATOR && 
			   XPath2Utils::equals(((XQOperator*)prevExpr)->getOperatorName(),And::name))
			{
				((And*)prevExpr)->addArgument($3);
				$$ = prevExpr;
			}
			else
				$$ = WRAP(@1, new (MEMMGR) And(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
	  | ComparisonExpr
      ;

// [48]    ComparisonExpr    ::=    RangeExpr ( (ValueComp 
//									|  GeneralComp 
//									|  NodeComp)  RangeExpr )? 
// [60]    GeneralComp    ::=    "=" |  "!=" |  "<" |  "<=" |  ">" |  ">=" 
// [61]    ValueComp    ::=    "eq" |  "ne" |  "lt" |  "le" |  "gt" |  "ge" 
// [62]    NodeComp    ::=    "is" |  "<<" |  ">>" 
ComparisonExpr:
	  RangeExpr _EQUALS_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs($1,$3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _NOT_EQUALS_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs($1,$3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _LT_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs($1,$3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _LT_EQUALS_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs($1,$3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _GT_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs($1,$3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _GT_EQUALS_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs($1,$3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _FORTRAN_EQ_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) Equals(packageArgs($1, $3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _FORTRAN_NE_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) NotEquals(packageArgs($1, $3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _FORTRAN_LT_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) LessThan(packageArgs($1, $3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _FORTRAN_LE_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) LessThanEqual(packageArgs($1, $3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _FORTRAN_GT_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) GreaterThan(packageArgs($1, $3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _FORTRAN_GE_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) GreaterThanEqual(packageArgs($1, $3, MEMMGR),MEMMGR));
		}	
	| RangeExpr _IS_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) NodeComparison(packageArgs($1, $3, MEMMGR), MEMMGR));
		}
	| RangeExpr _LT_LT_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) OrderComparison(packageArgs($1, $3, MEMMGR), true, MEMMGR));
		}
	| RangeExpr _GT_GT_ RangeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) OrderComparison(packageArgs($1, $3, MEMMGR), false,MEMMGR));
		}
	| RangeExpr
	;

// [49]    RangeExpr    ::=    AdditiveExpr ( "to"  AdditiveExpr )?
RangeExpr:
      AdditiveExpr _TO_ AdditiveExpr
		{
			$$ = WRAP(@2, new (MEMMGR) Range(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
	| AdditiveExpr
    ;

// [50]    AdditiveExpr    ::=    MultiplicativeExpr ( ("+" |  "-")  MultiplicativeExpr )* 
AdditiveExpr:
      AdditiveExpr _PLUS_ MultiplicativeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) Plus(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
    | AdditiveExpr _MINUS_ MultiplicativeExpr
		{
			$$ = WRAP(@2, new (MEMMGR) Minus(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
	| MultiplicativeExpr
    ;

// [51]    MultiplicativeExpr    ::=    UnionExpr ( ("*" |  "div" |  "idiv" |  "mod")  UnionExpr )* 
MultiplicativeExpr:
      MultiplicativeExpr _MULTIPLY_ UnionExpr 
		{
			$$ = WRAP(@2, new (MEMMGR) Multiply(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
    | MultiplicativeExpr _DIV_ UnionExpr 
		{
			$$ = WRAP(@2, new (MEMMGR) Divide(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
    | MultiplicativeExpr _INTEGER_DIV_ UnionExpr 
		{
			$$ = WRAP(@2, new (MEMMGR) IntegerDivide(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
    | MultiplicativeExpr _MOD_ UnionExpr 
		{
			$$ = WRAP(@2, new (MEMMGR) Mod(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
	| UnionExpr 
    ;

// [52]    UnionExpr    ::=    IntersectExceptExpr ( ("union" |  "|")  IntersectExceptExpr )* 
UnionExpr:
      UnionExpr _VERTICAL_BAR_ IntersectExceptExpr
		{
			$$ = WRAP(@2, new (MEMMGR) Union(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
    | UnionExpr _UNION_ IntersectExceptExpr
		{
			$$ = WRAP(@2, new (MEMMGR) Union(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
	| IntersectExceptExpr
    ;

// [53]    IntersectExceptExpr    ::=    InstanceofExpr ( ("intersect" |  "except")  InstanceofExpr )* 
IntersectExceptExpr:
      IntersectExceptExpr _INTERSECT_ InstanceofExpr
		{
			$$ = WRAP(@2, new (MEMMGR) Intersect(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
    | IntersectExceptExpr _EXCEPT_ InstanceofExpr
		{
			$$ = WRAP(@2, new (MEMMGR) Except(packageArgs($1, $3, MEMMGR),MEMMGR));
		}
	| InstanceofExpr
    ;

// [54]    InstanceofExpr    ::=    TreatExpr ( <"instance" "of"> SequenceType )? 
InstanceofExpr:
	TreatExpr _INSTANCE_ _OF_ SequenceType
	{
		$$ = WRAP(@2, new (MEMMGR) XQInstanceOf($1,$4,MEMMGR));
	}
	| TreatExpr
	;

// [55]    TreatExpr    ::=    CastableExpr ( <"treat" "as"> SequenceType )? 
TreatExpr:
	CastableExpr _TREAT_ _AS_ SequenceType
	{
		$$ = WRAP(@2, new (MEMMGR) XQTreatAs($1,$4,MEMMGR));
	}
	| CastableExpr
	;

// [56]    CastableExpr    ::=    CastExpr ( <"castable" "as"> SingleType )? 
CastableExpr:
	CastExpr _CASTABLE_ _AS_ SingleType
	{
        const SequenceType::ItemType* itemType=$4->getItemType();
        if((XPath2Utils::equals(itemType->getTypeURI(CONTEXT), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
            XPath2Utils::equals(itemType->getType()->getName(), szNOTATION)) ||
           (XPath2Utils::equals(itemType->getTypeURI(CONTEXT), FunctionConstructor::XMLChXPath2DatatypesURI) &&
            XPath2Utils::equals(itemType->getType()->getName(), AnyAtomicType::fgDT_ANYATOMICTYPE)))
          yyerror("The target type of a castable expression must be an atomic type that is in the in-scope schema types and is not xs:NOTATION or xdt:anyAtomicType [err:XPST0080]");
		$$ = WRAP(@2, new (MEMMGR) XQCastableAs($1,$4,MEMMGR));
	}
	| CastExpr
	;

// [57]    CastExpr    ::=    UnaryExpr (<"cast" "as"> SingleType)?
CastExpr:
	UnaryExpr _CAST_ _AS_ SingleType
	{
        const SequenceType::ItemType* itemType=$4->getItemType();
        if((XPath2Utils::equals(itemType->getTypeURI(CONTEXT), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
            XPath2Utils::equals(itemType->getType()->getName(), szNOTATION)) ||
           (XPath2Utils::equals(itemType->getTypeURI(CONTEXT), FunctionConstructor::XMLChXPath2DatatypesURI) &&
            XPath2Utils::equals(itemType->getType()->getName(), AnyAtomicType::fgDT_ANYATOMICTYPE)))
          yyerror("The target type of a cast expression must be an atomic type that is in the in-scope schema types and is not xs:NOTATION or xdt:anyAtomicType [err:XPST0080]");
		$$ = WRAP(@1, new (MEMMGR) XQCastAs($1,$4,MEMMGR));
	}
	| UnaryExpr
	;

// [58]    UnaryExpr    ::=    ("-" |  "+")* ValueExpr 
UnaryExpr:
      _MINUS_ UnaryExpr
		{
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			args.push_back($2);
			$$ = new (MEMMGR) UnaryMinus(args, MEMMGR);
		}
    | _PLUS_ UnaryExpr
		{
			$$ = $2;
		}
	| ValueExpr 
    ;

// [59]    ValueExpr    ::=    ValidateExpr | PathExpr | ExtensionExpr
ValueExpr:
	  ValidateExpr
	| PathExpr
	| ExtensionExpr
	;

// [63]    ValidateExpr    ::=    (<"validate" "{"> |  
//								   (<"validate" ValidationMode> "{")
//								  ) Expr "}" 
ValidateExpr:
	  _VALIDATE_ _LBRACE_ Expr _RBRACE_
		{
			$$ = WRAP(@1, new (MEMMGR) XQValidate($3,DocumentCache::VALIDATION_STRICT,MEMMGR));
		}
	| _VALIDATE_ _MODE_LAX_ _LBRACE_ Expr _RBRACE_
		{
			$$ = WRAP(@1, new (MEMMGR) XQValidate($4,DocumentCache::VALIDATION_LAX,MEMMGR));
		}
	| _VALIDATE_ _MODE_STRICT_ _LBRACE_ Expr _RBRACE_
		{
			$$ = WRAP(@1, new (MEMMGR) XQValidate($4,DocumentCache::VALIDATION_STRICT,MEMMGR));
		}
	;

// [64]   	ExtensionExpr	   ::=   	Pragma+ "{" Expr? "}"
ExtensionExpr:
	  PragmaList _LBRACE_ _RBRACE_
	{
		// we don't support any pragma
		yyerror("This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
	}
	| PragmaList _LBRACE_ Expr _RBRACE_
	{
		// we don't support any pragma
		$$ = $3;
	}
	;

PragmaList:
	  Pragma
	| PragmaList Pragma
	;

// [65]   	Pragma	   ::=   	"(#" S? QName PragmaContents "#)"
// [66]   	PragmaContents	   ::=   	(Char* - (Char* '#)' Char*))
Pragma:
	  _PRAGMA_OPEN_ _PRAGMA_NAME_ _PRAGMA_CONTENT_ _PRAGMA_CLOSE_
      {
        // validate the QName
		QualifiedName qName($2);
        const XMLCh* prefix=qName.getPrefix();
        if(prefix==NULL || *prefix==0)
			yyerror("The pragma name must have a prefix [err:XPST0081]");

		try
		{
			CONTEXT->getUriBoundToPrefix(prefix);
		}
		catch(NamespaceLookupException&)
		{
			yyerror("The pragma name is using an undefined namespace prefix [err:XPST0081]");
		}
      }
    |  _PRAGMA_OPEN_ _PRAGMA_NAME_ _PRAGMA_CLOSE_
      {
        // validate the QName
		QualifiedName qName($2);
        const XMLCh* prefix=qName.getPrefix();
        if(prefix==NULL || *prefix==0)
			yyerror("The pragma name must have a prefix [err:XPST0081]");

		try
		{
			CONTEXT->getUriBoundToPrefix(prefix);
		}
		catch(NamespaceLookupException&)
		{
			yyerror("The pragma name is using an undefined namespace prefix [err:XPST0081]");
		}
      }
	;

// [67]    PathExpr    ::=    ("/" RelativePathExpr?) |  ("//" RelativePathExpr) |  RelativePathExpr 
PathExpr:
	  _SLASH_
  		{
			XQNav *nav = new (MEMMGR) XQNav(MEMMGR);
			nav->addInitialRootStep(MEMMGR);
			$$ = nav;
		}
	| _SLASH_ RelativePathExpr
  		{
			XQNav* nav=getNavigation($2,MEMMGR);
			nav->addInitialRootStep(MEMMGR);
			$$ = nav;
		}
	| _SLASHSLASH_ RelativePathExpr
  		{
            XQNav *newNavigation = getNavigation($2,MEMMGR);

            NodeTest *step = new (MEMMGR) NodeTest();
            step->setTypeWildcard();
            step->setNameWildcard();
            step->setNamespaceWildcard();
            newNavigation->addStepFront(new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR));        

            newNavigation->addInitialRootStep(MEMMGR);

            $$ = newNavigation;
		}
	| RelativePathExpr
	;

// [68]    RelativePathExpr    ::=    StepExpr (("/" |  "//") StepExpr)* 
RelativePathExpr:
	  RelativePathExpr _SLASH_ StepExpr
  		{
			XQNav *nav = getNavigation($1,MEMMGR);
			nav->addStep($3);
			$$ = nav;
		}
	| RelativePathExpr _SLASHSLASH_ StepExpr
  		{
			XQNav *nav = getNavigation($1,MEMMGR);

            NodeTest *step = new (MEMMGR) NodeTest();
            step->setTypeWildcard();
            step->setNameWildcard();
            step->setNamespaceWildcard();
            nav->addStep(XQStep::DESCENDANT_OR_SELF, step);
			nav->addStep($3);

			$$ = nav;
		}
	| StepExpr
	;

// [69]    StepExpr    ::=    AxisStep |  FilterExpr 
StepExpr:
	  AxisStep
	| FilterExpr
	;

// [70]    AxisStep    ::=    (ForwardStep |  ReverseStep) PredicateList 
AxisStep:
	  ForwardStep PredicateList
		{
      $$ = XQPredicate::addPredicates($1, $2);
		}
	| ReverseStep PredicateList
		{
      $$ = XQPredicate::addPredicates($1, $2);
      $$ = WRAP(@1, new (MEMMGR) XQDocumentOrder($$, MEMMGR));
		}
	;

// [71]    ForwardStep    ::=    (ForwardAxis NodeTest) |  AbbrevForwardStep 
ForwardStep:
	  ForwardAxis NodeTest
		{
      if(!$2->isNodeTypeSet()) {
        switch($1) {
        case XQStep::NAMESPACE: $2->setNodeType(Node::namespace_string); break;
        case XQStep::ATTRIBUTE: $2->setNodeType(Node::attribute_string); break;
        default: $2->setNodeType(Node::element_string); break;
        }
      }

			$$ = new (MEMMGR) XQStep($1,$2,MEMMGR);
		}
	| AbbrevForwardStep
	;

// [72]    ForwardAxis    ::=    <"child" "::">
//								|  <"descendant" "::">
//								|  <"attribute" "::">
//								|  <"self" "::">
//								|  <"descendant-or-self" "::"> 
//								|  <"following-sibling" "::">
//								|  <"following" "::">
ForwardAxis:
	  _AXIS_CHILD_ 
		{
      $$ = XQStep::CHILD;
		}
	| _AXIS_DESCENDANT_ 
		{
      $$ = XQStep::DESCENDANT;
		}
	| _AXIS_ATTRIBUTE_
		{
      $$ = XQStep::ATTRIBUTE;
		}
	| _AXIS_SELF_
		{
      $$ = XQStep::SELF;
		}
	| _AXIS_DESCENDANT_OR_SELF_ 
		{
      $$ = XQStep::DESCENDANT_OR_SELF;
		}
	| _AXIS_FOLLOWING_SIBLING_ 
		{
      $$ = XQStep::FOLLOWING_SIBLING;
		}
	| _AXIS_FOLLOWING_ 
		{
      $$ = XQStep::FOLLOWING;
		}
	;

// [73]    AbbrevForwardStep    ::=    "@"? NodeTest
AbbrevForwardStep:
	_AT_ NodeTest
		{
      if(!$2->isNodeTypeSet()) {
        $2->setNodeType(Node::attribute_string);
      }

      $$ = new (MEMMGR) XQStep(XQStep::ATTRIBUTE, $2, MEMMGR);
		}
	| NodeTest
		{
      XQStep::Axis axis = XQStep::CHILD;
      SequenceType::ItemType *itemtype = $1->getItemType();
      if(itemtype != 0 &&
         itemtype->getItemTestType() == SequenceType::ItemType::TEST_ATTRIBUTE) {
        axis = XQStep::ATTRIBUTE;
      }
      else if(!$1->isNodeTypeSet()) {
        $1->setNodeType(Node::element_string);
      }

      $$ = new (MEMMGR) XQStep(axis, $1, MEMMGR);
		}
	;

// [74]    ReverseStep    ::=    (ReverseAxis NodeTest) |  AbbrevReverseStep 
ReverseStep:
	  ReverseAxis NodeTest
		{
      if(!$2->isNodeTypeSet()) {
        $2->setNodeType(Node::element_string);
      }

      $$ = new (MEMMGR) XQStep($1, $2, MEMMGR);
		}
	| AbbrevReverseStep 
	;

// [75]    ReverseAxis    ::=    <"parent" "::"> 
//								| <"ancestor" "::">
//								| <"preceding-sibling" "::">
//								| <"preceding" "::">
//								| <"ancestor-or-self" "::">
ReverseAxis:
	  _AXIS_PARENT_
		{
      $$ = XQStep::PARENT;
		}
	| _AXIS_ANCESTOR_
		{
      $$ = XQStep::ANCESTOR;
		}
	| _AXIS_PRECEDING_SIBLING_
		{
      $$ = XQStep::PRECEDING_SIBLING;
		}
	| _AXIS_PRECEDING_
		{
      $$ = XQStep::PRECEDING;
		}
	| _AXIS_ANCESTOR_OR_SELF_
		{
      $$ = XQStep::ANCESTOR_OR_SELF;
		}
	;

// [76]    AbbrevReverseStep    ::=    ".." 
AbbrevReverseStep:
	  _DOT_DOT_
		{
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			step->setTypeWildcard();
			$$ = new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR);
		}	
	;

// [77]    NodeTest    ::=    KindTest |  NameTest 
NodeTest:
	  KindTest 
	| NameTest
	;

// [78]    NameTest    ::=    QName |  Wildcard 
NameTest:
	  QName
		{
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodePrefix($1->getPrefix());
			step->setNodeName($1->getName());
			$$ = step;
		}
	| Wildcard
	;

// [79]    Wildcard    ::=    "*" |  <NCName ":" "*"> |  <"*" ":" NCName> 
Wildcard:
      _STAR_
		{
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			$$ = step;
		}
    | _NCNAME_COLON_STAR_
		{
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodePrefix($1);
			step->setNameWildcard();
			$$ = step;
		}
	| _STAR_COLON_NCNAME_
		{
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodeName($1);
			step->setNamespaceWildcard();
			$$ = step;
		}
	;

// [80]    FilterExpr    ::=    PrimaryExpr PredicateList 
FilterExpr:
	  PrimaryExpr PredicateList
		{
      $$ = XQPredicate::addPredicates($1, $2);
		}
	;

// [81]    PredicateList    ::=    Predicate* 
// [82]    Predicate    ::=    "[" Expr "]" 
PredicateList:
	  /* empty */
		{
	        $$ = new (MEMMGR) VectorOfPredicates(MEMMGR);
		}
	| PredicateList _LBRACK_ Expr _RBRACK_
		{
      XQPredicate *pred = new (MEMMGR) XQPredicate($3, MEMMGR);
			$1->push_back(pred);
			$$ = $1; 
		}
	;

// [83]    PrimaryExpr    ::=    Literal |  VarRef | ParenthesizedExpr | ContextItemExpr | FunctionCall | Constructor | OrderedExpr | UnorderedExpr
PrimaryExpr:
	   Literal 
	|  VarRef
	|  ParenthesizedExpr 
	|  ContextItemExpr
	|  FunctionCall 
	|  Constructor
	|  OrderedExpr 
	|  UnorderedExpr
	;

// [84]    Literal    ::=    NumericLiteral |  StringLiteral 
Literal:
	  NumericLiteral 
	| StringLiteral 
	;

// [85]    NumericLiteral    ::=    IntegerLiteral |  DecimalLiteral |  DoubleLiteral 
NumericLiteral:
	  IntegerLiteral 
	| DecimalLiteral 
	| DoubleLiteral 
	;

// [86]    VarRef    ::=    "$" VarName 
VarRef:
	_DOLLAR_SIGN_ _VARIABLE_
		{
		    int nColon=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::indexOf($2,':');
			if(nColon!=-1)
  				$$ = new (MEMMGR) XQVariable($2,MEMMGR);
			else
				$$ = new (MEMMGR) XQVariable(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, $2,MEMMGR);
		}
	;
		
// [87]    ParenthesizedExpr    ::=    "(" Expr? ")" 
ParenthesizedExpr:
      _LPAR_ Expr _RPAR_
		{ 
			ASTNode* prevExpr=$2;
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()!=ASTNode::PARENTHESIZED)
			{
				XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
				dis->addItem($2);
				$$ = WRAP(@2, dis);
			}
			else
				$$ = WRAP(@2, $2);
		}
    | _LPAR_ _RPAR_
		{ 
			$$ = WRAP(@1, new (MEMMGR) XQSequence(MEMMGR));
		}
    ;

// [88]    ContextItemExpr    ::=    "." 
ContextItemExpr:
	  _DOT_
		{
			$$ = new (MEMMGR) XQContextItem(MEMMGR);
		}
	;

// [89]    OrderedExpr    ::=    <"ordered" "{"> Expr "}" 
OrderedExpr:
	_ORDERED_ _LBRACE_ Expr _RBRACE_
		{
			$$ = new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, $3, MEMMGR);
		}
	;

// [90]    UnorderedExpr    ::=    <"unordered" "{"> Expr "}" 
UnorderedExpr:
	_UNORDERED_ _LBRACE_ Expr _RBRACE_
		{
			$$ = new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, $3, MEMMGR);
		}
	;

// [91]    FunctionCall    ::=    <QName "("> (ExprSingle ("," ExprSingle)*)? ")" 
FunctionCall:
	  _FUNCTION_CALL_ _RPAR_
		{
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			$$ = FNWRAP(@1, $1, new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName($1, MEMMGR), args, MEMMGR));
		}
	| _FUNCTION_CALL_ FunctionCallArgumentList _RPAR_
		{
			$$ = FNWRAP(@1, $1, new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName($1, MEMMGR), *$2,MEMMGR));
		}
	;

FunctionCallArgumentList:
	  FunctionCallArgumentList _COMMA_ ExprSingle
		{
			$1->push_back($3);
			$$ = $1;
		}
	| ExprSingle
		{
			$$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			$$->push_back($1);
		}	
	;

// [92]    Constructor    ::=    DirectConstructor | ComputedConstructor 
Constructor:
	  DirectConstructor
	| ComputedConstructor
	;

// [93]    DirectConstructor    ::=    DirElemConstructor
//									 | DirCommentConstructor
//									 | DirPIConstructor 
DirectConstructor:
	  DirElemConstructor
	| DirCommentConstructor
	| DirPIConstructor
	;

// [94]    DirElemConstructor    ::=    "<" QName DirAttributeList ("/>" |  (">" DirElementContent* "</" QName S? ">")) 
DirElemConstructor:
      _START_TAG_OPEN_ _TAG_NAME_ DirAttributeList _EMPTY_TAG_CLOSE_
		{ 
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::element_string,
								new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										$2, AnyAtomicType::STRING),
										MEMMGR), 
								$3, content, MEMMGR));
		}
	| _START_TAG_OPEN_ _TAG_NAME_ DirAttributeList _TAG_CLOSE_ DirElementContent _END_TAG_OPEN_ _TAG_NAME_ _TAG_CLOSE_
		{ 
			if(!XPath2Utils::equals($2,$7))
				yyerror("Close tag does not match open tag");
			// if we are requested to strip whitespace-only nodes, check if the last element content should be removed
			VectorOfASTNodes* elemContent=$5;
			if(elemContent->size()>0)
			{
				if(elemContent->back()==0)
					elemContent->pop_back();
				else if(!CONTEXT->getPreserveBoundarySpace() &&
					    elemContent->back()->getType()==ASTNode::LITERAL)
				{
					Item::Ptr litVal = ((XQLiteral*)elemContent->back())->getItemConstructor()->createItem(CONTEXT);
					if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING &&
					   isAllSpaces(litVal->asString(CONTEXT)))
						elemContent->pop_back();
				}
			}
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::element_string,
							  new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										$2, AnyAtomicType::STRING),
										MEMMGR), 
							  $3, elemContent,MEMMGR));
		}
	;

// [95]    DirAttributeList    ::=    (S (QName S? "=" S? DirAttributeValue)?)* 
DirAttributeList: 
		/* empty */
		{
			$$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		}
      | DirAttributeList _ATTRIBUTE_NAME_ _VALUE_INDICATOR_ DirAttributeValue
        {
            $$ = $1;
            ASTNode* attrItem=WRAP(@2, new (MEMMGR) XQDOMConstructor(Node::attribute_string,
                                            new (MEMMGR) XQLiteral(
                                                new (MEMMGR) AnyAtomicTypeConstructor(
                                                    XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                    XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
                                                    $2, AnyAtomicType::STRING),
                                                MEMMGR), 
                                            0, $4,MEMMGR));
            if(XPath2Utils::equals($2, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSString) ||
               XERCES_CPP_NAMESPACE_QUALIFIER XMLString::startsWith($2, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSColonString))
            {
                $$->insert($$->begin(), attrItem);
            }
            else
            {
                $$->push_back(attrItem);
            }
        }
	  ;

// [96]    DirAttributeValue    ::=    ('"' (EscapeQuot |  QuotAttrValueContent)* '"')
//								 |  ("'" (EscapeApos |  AposAttrValueContent)* "'") 
DirAttributeValue:
		_OPEN_QUOT_ QuotAttrValueContent _CLOSE_QUOT_
		{ 
			$$ = $2;
		}
	  | _OPEN_APOS_ AposAttrValueContent _CLOSE_APOS_
		{ 
			$$ = $2;
		}
	;

// [97]    QuotAttrValueContent    ::=    QuotAttContentChar
//										|  CommonContent
QuotAttrValueContent:
		/* empty */
		{ 
			$$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		}
      | QuotAttrValueContent EnclosedExpr
		{
			$$ = $1;
			$$->push_back($2);
		}
      | QuotAttrValueContent _ESCAPE_QUOT_
		{
			$$ = $1;
			merge_strings(CONTEXT,$$,szQuote);
		}
	  | QuotAttrValueContent _CHAR_
		{
			$$ = $1;
			merge_strings(CONTEXT,$$,$2);
		}
	  | QuotAttrValueContent CommonContent
		{
			$$ = $1;
			merge_strings(CONTEXT,$$,$2);
		}
	;

// [98]    AposAttrValueContent    ::=    AposAttContentChar
//										|  CommonContent
AposAttrValueContent:
		/* empty */
		{ 
			$$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		}
      | AposAttrValueContent EnclosedExpr
		{
			$$ = $1;
			$$->push_back($2);
		}
      | AposAttrValueContent _ESCAPE_APOS_
		{
			$$ = $1;
			merge_strings(CONTEXT,$$,szApos);
		}
	  | AposAttrValueContent _CHAR_
		{
			$$ = $1;
			merge_strings(CONTEXT,$$,$2);
		}
      | AposAttrValueContent CommonContent
		{
			$$ = $1;
			merge_strings(CONTEXT,$$,$2);
		}
	  ;

// [99]    DirElementContent    ::=    DirectConstructor 
//									|  ElementContentChar
//									|  CdataSection 
//									|  CommonContent

// As literal strings generated by entity references or enclosed expressions should not be merged with real literal strings,
// I add a NULL pointer after them that has to be removed by the next fragment or by the parent rule
DirElementContent:
	  /* empty */
		{
			$$ = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
		}
	  |	DirElementContent DirectConstructor
		{
			$$ = $1;
			// if the last token was a string literal made of whitespace and
			// we are adding a node constructor, and the context tells us to strip whitespace, remove it
			if($$->size()>0)
			{
				if($$->back()==0)
					$$->pop_back();
				else if($$->back()->getType()==ASTNode::LITERAL)
				{
					const XMLCh* lastString=NULL;
					Item::Ptr litVal = ((XQLiteral*)$$->back())->getItemConstructor()->createItem(CONTEXT);
					if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
						lastString=litVal->asString(CONTEXT);
					if(lastString!=NULL && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(lastString)>0 && isAllSpaces(lastString) && !CONTEXT->getPreserveBoundarySpace())
						$$->pop_back();
				}
			}
			$$->push_back($2);
		}
	  | DirElementContent _CHAR_
		{
			$$ = $1;
			if($$->size()>0 && $$->back() && $$->back()->getType()==ASTNode::LITERAL)
			{
				XQLiteral *lit = (XQLiteral*)$$->back();
				const XMLCh* string=lit->getItemConstructor()->createItem(CONTEXT)->asString(CONTEXT);
				string=XPath2Utils::concatStrings(string,$2,MEMMGR);

				AnyAtomicTypeConstructor *ic = new (MEMMGR)
    				AnyAtomicTypeConstructor(
								XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
								XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
					string, AnyAtomicType::STRING);
    			lit->setItemConstructor(ic);
			}
			else
			{
				if($$->size()>0 && $$->back()==0)
					$$->pop_back();
    			AnyAtomicTypeConstructor *ic = new (MEMMGR)
      				AnyAtomicTypeConstructor(
								XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
								XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
						$2, AnyAtomicType::STRING);

				$$->push_back(new (MEMMGR) XQLiteral(ic, MEMMGR));
			}
		}
      | DirElementContent CdataSection
		{
			$$ = $1;
			if($$->size()>0 && $$->back()==0)
				$$->pop_back();

    		AnyAtomicTypeConstructor *ic = new (MEMMGR)
      			AnyAtomicTypeConstructor(
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
					$2, AnyAtomicType::STRING);

			$$->push_back(new (MEMMGR) XQLiteral(ic, MEMMGR));
			$$->push_back(0);
		}
	  | DirElementContent EnclosedExpr
		{
			$$ = $1;
			// if the last token was a string literal made of whitespace and
			// we are adding an enclosed expression, and the context tells us to strip whitespace, remove it
			if($$->size()>0)
			{
				if($$->back()==0)
					$$->pop_back();
				else if($$->back()->getType()==ASTNode::LITERAL)
				{
					const XMLCh* lastString=NULL;
					Item::Ptr litVal = ((XQLiteral*)$$->back())->getItemConstructor()->createItem(CONTEXT);
					if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
						lastString=litVal->asString(CONTEXT);
					if(lastString!=NULL && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(lastString)>0 && isAllSpaces(lastString) && !CONTEXT->getPreserveBoundarySpace())
						$$->pop_back();
				}
			}
			$$->push_back($2);
			$$->push_back(0);
		}
	  | DirElementContent CommonContent
		{
			$$ = $1;
			if($$->size()>0 && $$->back()==0)
				$$->pop_back();

    		AnyAtomicTypeConstructor *ic = new (MEMMGR)
      			AnyAtomicTypeConstructor(
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
					$2, AnyAtomicType::STRING);

			$$->push_back(new (MEMMGR) XQLiteral(ic, MEMMGR));
			$$->push_back(0);
		}
	;

// [100]    CommonContent    ::=    PredefinedEntityRef | CharRef | "{{" | "}}" | EnclosedExpr 
// we choose to remove the EnclosedExpr, so that the type can be a string
CommonContent:
	_PREDEFINED_ENTITY_REF_
	| _CHAR_REF_
	| _LCURLY_BRACE_ESCAPE_
	{
		$$ = szCurlyOpen;
	} 
	| _RCURLY_BRACE_ESCAPE_ 
	{
		$$ = szCurlyClose;
	} 
	;

// [101]    DirCommentConstructor    ::=    "<!--" DirCommentContents "-->"
// [102]    DirCommentContents    ::=    ((Char - '-') | <'-' (Char - '-')>)* 
DirCommentConstructor:
	_XML_COMMENT_
		{
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										$1, AnyAtomicType::STRING),
										MEMMGR));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::comment_string, 0, 0, content, MEMMGR));
		}
	;

// [103]    DirPIConstructor    ::=    "<?" PITarget (S DirPIContents)? "?>"
// [104]    DirPIContents    ::=    (Char* - (Char* '?>' Char*)) 
DirPIConstructor:
	_PROCESSING_INSTRUCTION_START_ _PI_TARGET_ _PROCESSING_INSTRUCTION_CONTENT_
		{
			if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareIString($2, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLString)==0)
			  yyerror("The target for the processing instruction must not be 'XML'");
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										$3, AnyAtomicType::STRING),
										MEMMGR));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										$2, AnyAtomicType::STRING),
										MEMMGR), 
									  empty, content, MEMMGR));
		}
	;

// [105]    CDataSection    ::=    "<![CDATA[" CDataSectionContents "]]>"
// [106]    CDataSectionContents    ::=    (Char* - (Char* ']]>' Char*)) 
CdataSection:
	  _CDATA_SECTION_
		{
			$$ = $1;
		}
	;

// [107]    ComputedConstructor    ::=   CompDocConstructor
//									   | CompElemConstructor
//									   | CompAttrConstructor
//									   | CompTextConstructor
//									   | CompCommentConstructor
//									   | CompPIConstructor 
ComputedConstructor:
	CompDocConstructor
	| CompElemConstructor
	| CompAttrConstructor
	| CompTextConstructor
	| CompCommentConstructor
	| CompPIConstructor 
	;

// [108]    CompDocConstructor    ::=    <"document" "{"> Expr "}" 
CompDocConstructor:
	  _DOCUMENT_CONSTR_ _LBRACE_ Expr _RBRACE_
		{
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP(@3, $3));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::document_string,
								  new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, AnyAtomicType::STRING),
										MEMMGR), 
								  empty, content,MEMMGR));
		}
	;

// [109]    CompElemConstructor    ::=    (<"element" QName "{"> |  (<"element" "{"> Expr "}" "{")) ContentExpr? "}" 
CompElemConstructor:
	  _NAMED_ELEMENT_CONSTR_ _LBRACE_ ContentExpr _RBRACE_ 
		{
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP(@3, $3));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::element_string,
								  new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
										$1, AnyAtomicType::QNAME),
										MEMMGR), 
								  empty, content,MEMMGR));
		}
	| _NAMED_ELEMENT_CONSTR_ _LBRACE_ _RBRACE_ 
		{
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::element_string,
								  new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
										$1, AnyAtomicType::QNAME),
										MEMMGR), 
								  empty, empty,MEMMGR));
		}
	| _ELEMENT_CONSTR_ _LBRACE_ Expr _RBRACE_ _LBRACE_ ContentExpr _RBRACE_ 
		{
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP(@6, $6));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP(@3, $3), 
								  empty, content, MEMMGR));
		}
	| _ELEMENT_CONSTR_ _LBRACE_ Expr _RBRACE_ _LBRACE_ _RBRACE_ 
		{
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP(@3, $3), 
								  empty, empty, MEMMGR));
		}
	;

// [110]    ContentExpr    ::=    Expr
ContentExpr:
	Expr
	;

// [111]    CompAttrConstructor    ::=    (<"attribute" QName "{"> |  (<"attribute" "{"> Expr "}" "{")) Expr? "}" 
CompAttrConstructor:
	  _NAMED_ATTRIBUTE_CONSTR_ _LBRACE_ Expr _RBRACE_ 
		{
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP(@3, $3));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::attribute_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
										$1, AnyAtomicType::QNAME),
										MEMMGR), 
									  0, content,MEMMGR));
		}
	| _NAMED_ATTRIBUTE_CONSTR_ _LBRACE_ _RBRACE_ 
		{
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::attribute_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
										$1, AnyAtomicType::QNAME),
										MEMMGR), 
									  0, empty,MEMMGR));
		}
	| _ATTRIBUTE_CONSTR_ _LBRACE_ Expr _RBRACE_ _LBRACE_ Expr _RBRACE_ 
		{
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP(@6, $6));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP(@3, $3), 
									  0, content, MEMMGR));
		}
	| _ATTRIBUTE_CONSTR_ _LBRACE_ Expr _RBRACE_ _LBRACE_ _RBRACE_ 
		{
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP(@3, $3), 
									  0, empty, MEMMGR));
		}
	;

// [112]    CompTextConstructor    ::=    <"text" "{"> Expr "}" 
CompTextConstructor:
	  _TEXT_CONSTR_ _LBRACE_ Expr _RBRACE_
		{
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP(@3, $3));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::text_string, 0, 0, content, MEMMGR));
		}
	;

// [113]    CompCommentConstructor    ::=    <"comment" "{"> Expr "}" 
CompCommentConstructor:
	  _COMMENT_CONSTR_ _LBRACE_ Expr _RBRACE_
		{
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP(@3, $3));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::comment_string, 0, 0, content, MEMMGR));
		}
	;

// [114]    CompPIConstructor    ::=    (<"processing-instruction" NCName "{"> | (<"processing-instruction" "{"> Expr "}" "{")) Expr? "}" 
CompPIConstructor:
	  _NAMED_PROCESSING_INSTRUCTION_CONSTR_ _LBRACE_ Expr _RBRACE_
	  {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP(@3, $3));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										$1, AnyAtomicType::STRING),
										MEMMGR), 
									  0, content, MEMMGR));
	  }
	| _NAMED_PROCESSING_INSTRUCTION_CONSTR_ _LBRACE_ _RBRACE_
	  {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										$1, AnyAtomicType::STRING),
										MEMMGR), 
									  0, empty, MEMMGR));
	  }
	| _PROCESSING_INSTRUCTION_CONSTR_ _LBRACE_ Expr _RBRACE_ _LBRACE_ Expr _RBRACE_
	  {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP(@6, $6));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP(@3, $3), 
									  0, content, MEMMGR));
	  }
	| _PROCESSING_INSTRUCTION_CONSTR_ _LBRACE_ Expr _RBRACE_ _LBRACE_ _RBRACE_
	  {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			$$ = WRAP(@1, new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP(@3, $3), 
									  0, empty, MEMMGR));
	  }
	;

// [115]    SingleType    ::=    AtomicType "?"? 
SingleType:
		AtomicType _ZERO_OR_ONE_
	    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,$1));
			seq->setOccurrence(SequenceType::QUESTION_MARK);
			$$ = seq;
		}
	  | AtomicType
	    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,$1));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			$$ = seq;
		}
	;

// [116]    TypeDeclaration    ::=    "as" SequenceType 
TypeDeclaration:
	  _AS_ SequenceType
		{
			$$ = $2;
		}
	;

// [117]    SequenceType    ::=    (ItemType OccurrenceIndicator?) |  <" empty-sequence" "(" ")">
SequenceType:
	    ItemType OccurrenceIndicator
		{
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType($1);
			seq->setOccurrence($2);
			$$ = seq;
		}
	  | ItemType 
		{
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType($1);
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			$$ = seq;
		}
	  | _EMPTY_
		{ 
			$$ = new (MEMMGR) SequenceType(); 
		}
	  ;


// [118]    OccurrenceIndicator    ::=    "*" |  "+" |  "?"
OccurrenceIndicator:
	_ZERO_OR_MORE_
	{ $$ = SequenceType::STAR; }
	| _ONE_OR_MORE_ 
	{ $$ = SequenceType::PLUS; }
	| _ZERO_OR_ONE_ 
	{ $$ = SequenceType::QUESTION_MARK; }
	;

// [119]    ItemType    ::=    AtomicType | KindTest | <"item" "(" ")"> 
ItemType:
	AtomicType 
	{
        $$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, $1);
	}
	| KindTest 
	{
		$$ = $1->getItemType();
		$1->setItemType(NULL);
	}
	| _ITEM_ 
	{
		$$ = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
	}
	;

// [120]    AtomicType    ::=    QName 
AtomicType:
	QName
	{
		$$ = $1;
	}
	;

// [121]    KindTest    ::=    DocumentTest
//							|  ElementTest
//							|  AttributeTest
//							|  SchemaElementTest
//							|  SchemaAttributeTest
//							|  PITest 
//							|  CommentTest 
//							|  TextTest 
//							|  AnyKindTest 
KindTest:
	   DocumentTest
	|  ElementTest
	|  AttributeTest
	|  SchemaElementTest
	|  SchemaAttributeTest
	|  PITest
	|  CommentTest
	|  TextTest
	|  AnyKindTest
	;

// [122]    AnyKindTest    ::=    <"node" "("> ")" 
AnyKindTest:
	_NODE_LPAR_ _RPAR_
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		$$ = step;
	}
	;

// [123]    DocumentTest    ::=    <"document-node" "("> (ElementTest | SchemaElementTest)? ")"
DocumentTest:
	_DOCUMENT_NODE_LPAR_ _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		$$ = step;
	}
	| _DOCUMENT_NODE_LPAR_ ElementTest _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=$2->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		$$ = step;
	}
	| _DOCUMENT_NODE_LPAR_ SchemaElementTest _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=$2->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		$$ = step;
	}
	;
	
// [124]    TextTest    ::=    <"text" "("> ")" 
TextTest:
	_TEXT_LPAR_ _RPAR_
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		$$ = step;
	}
	;

// [125]    CommentTest    ::=    <"comment" "("> ")" 
CommentTest: 
	_COMMENT_LPAR_ _RPAR_
	{
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		$$ = step;
	}
	;

// [126]    PITest    ::=    <"processing-instruction" "("> (NCName | StringLiteral)? ")" 
PITest:
	_PROCESSING_INSTRUCTION_LPAR_ _RPAR_
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		$$ = step;
	}
	| _PROCESSING_INSTRUCTION_LPAR_ _NCNAME_ _RPAR_
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName($2)));
		$$ = step;
	}
	| _PROCESSING_INSTRUCTION_LPAR_ _STRING_LITERAL_ _RPAR_
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName($2)));
		$$ = step;
	}
	;

// [127]    AttributeTest    ::=    <"attribute" "("> (AttribNameOrWildcard ("," TypeName)?)? ")" 
AttributeTest:
	_ATTRIBUTE_LPAR_ _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		$$ = step;
	}
	| _ATTRIBUTE_LPAR_ AttribNameOrWildcard _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,$2));
		$$ = step;
	}
	| _ATTRIBUTE_LPAR_ AttribNameOrWildcard _COMMA_ TypeName _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,$2,$4));
		$$ = step;
	}
	;

// [128]    AttribNameOrWildcard    ::=    AttributeName | "*" 
AttribNameOrWildcard:
	AttributeName
	| _STAR_
	{
		$$ = NULL;
	}
	;

// [129]    SchemaAttributeTest    ::=    <"schema-attribute" "("> AttributeDeclaration ")" 
SchemaAttributeTest:
	_SCHEMA_ATTRIBUTE_LPAR_ AttributeDeclaration _RPAR_
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,$2));
		$$ = step;
	}
	;

// [130]    AttributeDeclaration    ::=    AttributeName 
AttributeDeclaration:
	AttributeName 
	;

// [131]    ElementTest    ::=    <"element" "("> (ElementNameOrWildcard ("," TypeName "?"?)?)? ")" 
ElementTest:
	_ELEMENT_LPAR_ _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		$$ = step;
	}
	| _ELEMENT_LPAR_ ElementNameOrWildcard _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,$2));
		$$ = step;
	}
	| _ELEMENT_LPAR_ ElementNameOrWildcard _COMMA_ TypeName _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,$2,$4));
		$$ = step;
	}
	| _ELEMENT_LPAR_ ElementNameOrWildcard _COMMA_ TypeName _NILLABLE_ _RPAR_ 
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* pType=new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,$2,$4);
		pType->setAllowNilled(true);
        step->setItemType(pType);
		$$ = step;
	}
	;

// [132]    ElementNameOrWildcard    ::=    ElementName | "*" 
ElementNameOrWildcard:
	ElementName
	| _STAR_
	{
		$$ = NULL;
	}
	;

// [133]    SchemaElementTest    ::=    <"schema-element" "("> ElementDeclaration ")" 
SchemaElementTest:
	_SCHEMA_ELEMENT_LPAR_ ElementDeclaration _RPAR_
	{
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,$2));
		$$ = step;
	}
	;

// [134]    ElementDeclaration    ::=    ElementName 
ElementDeclaration:
	ElementName 
	;

// [135]    AttributeName    ::=    QName
AttributeName:
	QName
	;

// [136]    ElementName    ::=    QName
ElementName:
	QName
	;

// [137]    TypeName    ::=    QName
TypeName:
	QName
	;

// [138]   	IntegerLiteral	   ::=   	Digits
IntegerLiteral:
      _INTEGER_NUMBER_
		{
			$$ = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
										$1, AnyAtomicType::DECIMAL),
										MEMMGR);
		}
	;

// [139]   	DecimalLiteral	   ::=   	("." Digits) | (Digits "." [0-9]*)
DecimalLiteral:
      _DECIMAL_NUMBER_
		{
			$$ = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
										$1, AnyAtomicType::DECIMAL),
										MEMMGR);
		}
	;

// [140]   	DoubleLiteral	   ::=   	(("." Digits) | (Digits ("." [0-9]*)?)) [eE] [+-]? Digits
DoubleLiteral:
      _DOUBLE_NUMBER_
		{
			$$ = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
										$1, AnyAtomicType::DOUBLE),
										MEMMGR);
		}
	;

// [141]   	URILiteral	   ::=   	StringLiteral
URILiteral:
	_STRING_LITERAL_
	{
		// the string must be whitespace-normalized
		XERCES_CPP_NAMESPACE_QUALIFIER XMLString::collapseWS($1, MEMMGR);
        if($1 && *$1 && !XPath2Utils::isValidURI($1, MEMMGR))
          yyerror("The URI literal is not valid [err:XQST0046]");
		$$ = $1;
	}
	;

// [142]   	StringLiteral	   ::=   	('"' (PredefinedEntityRef | CharRef | ('"' '"') | [^"&])* '"') | 
//										("'" (PredefinedEntityRef | CharRef | ("'" "'") | [^'&])* "'")
StringLiteral:
      _STRING_LITERAL_
		{
			$$ = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										$1, AnyAtomicType::STRING),
										MEMMGR);
		}
	;


QName:
	  _QNAME_
		{
			$$ = new (MEMMGR) QualifiedName($1,MEMMGR);
		}
	;
%%

}	// namespace XQuery


