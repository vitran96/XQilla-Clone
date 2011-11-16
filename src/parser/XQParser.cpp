
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 20 "../src/parser/XQParser.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include <cstdio>
#include <iostream>
#include <sstream>

#include <xqilla/utils/UTF8Str.hpp>

#include "../lexer/XQLexer.hpp"

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/XQDocumentConstructor.hpp>
#include <xqilla/ast/XQElementConstructor.hpp>
#include <xqilla/ast/XQAttributeConstructor.hpp>
#include <xqilla/ast/XQNamespaceConstructor.hpp>
#include <xqilla/ast/XQPIConstructor.hpp>
#include <xqilla/ast/XQCommentConstructor.hpp>
#include <xqilla/ast/XQTextConstructor.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQSwitch.hpp>
#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQTypeAlias.hpp>
#include <xqilla/ast/XQRewriteRule.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQExprSubstitution.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>
#include <xqilla/ast/XQReturn.hpp>
#include <xqilla/ast/XQTupleConstructor.hpp>
#include <xqilla/ast/XQTupleMember.hpp>
#include <xqilla/ast/XQNamespaceBinding.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/dom/DOMXPathNSResolver.hpp>

#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/ast/XQCastableAs.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQFunctionConversion.hpp>
#include <xqilla/ast/XQAnalyzeString.hpp>
#include <xqilla/ast/XQCopyOf.hpp>
#include <xqilla/ast/XQCopy.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/ConvertFunctionArg.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/ast/XQPredicate.hpp>
#include <xqilla/ast/XQApplyTemplates.hpp>
#include <xqilla/ast/XQInlineFunction.hpp>
#include <xqilla/ast/XQFunctionDeref.hpp>
#include <xqilla/ast/XQFunctionRef.hpp>
#include <xqilla/ast/XQPartialApply.hpp>
#include <xqilla/ast/XQMap.hpp>

#include <xqilla/fulltext/FTContains.hpp>
#include <xqilla/fulltext/FTOr.hpp>
#include <xqilla/fulltext/FTAnd.hpp>
#include <xqilla/fulltext/FTMildnot.hpp>
#include <xqilla/fulltext/FTUnaryNot.hpp>
#include <xqilla/fulltext/FTOrder.hpp>
#include <xqilla/fulltext/FTDistance.hpp>
#include <xqilla/fulltext/FTScope.hpp>
#include <xqilla/fulltext/FTContent.hpp>
#include <xqilla/fulltext/FTWindow.hpp>

#include <xqilla/update/UDelete.hpp>
#include <xqilla/update/URename.hpp>
#include <xqilla/update/UReplace.hpp>
#include <xqilla/update/UReplaceValueOf.hpp>
#include <xqilla/update/UInsertAsFirst.hpp>
#include <xqilla/update/UInsertAsLast.hpp>
#include <xqilla/update/UInsertInto.hpp>
#include <xqilla/update/UInsertAfter.hpp>
#include <xqilla/update/UInsertBefore.hpp>
#include <xqilla/update/UTransform.hpp>
#include <xqilla/update/UApplyUpdates.hpp>

#include <xqilla/ast/ContextTuple.hpp>
#include <xqilla/ast/ForTuple.hpp>
#include <xqilla/ast/LetTuple.hpp>
#include <xqilla/ast/WhereTuple.hpp>
#include <xqilla/ast/OrderByTuple.hpp>
#include <xqilla/ast/CountTuple.hpp>

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

#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/functions/FunctionId.hpp>
#include <xqilla/functions/XQillaFunction.hpp>
#include <xqilla/functions/BuiltInModules.hpp>

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/items/impl/ATDecimalOrDerivedImpl.hpp>
#include <xqilla/items/impl/ATDoubleOrDerivedImpl.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/ContextException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/UTF8Str.hpp>
#include "../config/xqilla_config.h"

#define YYPARSE_PARAM qp
#define YYDEBUG 1
#define YYERROR_VERBOSE

// this removes a memory leak occurring when an error is found in the query (we throw an exception from inside
// yyerror, preventing the bison-generated code from cleaning up the memory); by defining this macro we use 
// stack-based memory instead of the heap
#define YYSTACK_USE_ALLOCA  1
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

#define QP       ((XQParserArgs*)qp)
#define CONTEXT  (QP->_context)
#define LANGUAGE (QP->_lexer->getLanguage())
#define MEMMGR   (QP->_lexer->getMemoryManager())

#define REJECT_NOT_XQUERY(where,pos)    if(!QP->_lexer->isXQuery()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_VERSION3(where,pos) if(!QP->_lexer->isVersion3()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

#define WRAP(pos,object)        (wrapForDebug((QP), (object), (pos).first_line, (pos).first_column))

#define LOCATION(pos,name) LocationInfo name(QP->_lexer->getFile(), (pos).first_line, (pos).first_column)

#define GET_NAVIGATION(pos, object) (((object)->getType() == ASTNode::NAVIGATION) ? (XQNav*)(object) : WRAP(pos, new (MEMMGR) XQNav((object), MEMMGR)))

#define PRESERVE_NS(pos, object) (QP->_lexer->getNSResolver() == 0 ? (object) : WRAP((pos), new (MEMMGR) XQNamespaceBinding(QP->_lexer->getNSResolver(), (object), MEMMGR)))

#define BIT_ORDERING_SPECIFIED                  0
#define BIT_BOUNDARY_SPECIFIED                  1
#define BIT_COLLATION_SPECIFIED                 2
#define BIT_BASEURI_SPECIFIED                   3
#define BIT_CONSTRUCTION_SPECIFIED              4
#define BIT_EMPTYORDERING_SPECIFIED             5
#define BIT_COPYNAMESPACE_SPECIFIED             6
#define BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED   7
#define BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED  8
#define BIT_DECLARE_SECOND_STEP                 9
#define BIT_REVALIDATION_SPECIFIED              10

#define CHECK_SECOND_STEP(pos, name) { \
  if(QP->_flags.get(BIT_DECLARE_SECOND_STEP)) \
    yyerror((pos), "Prolog contains " name " declaration after a variable, function or option declaration"); \
}

#define CHECK_SPECIFIED(pos, bit, name, error) { \
  if(QP->_flags.get(bit)) \
    yyerror((pos), "Prolog contains more than one " name " declaration [err:" error "]"); \
  QP->_flags.set(bit); \
}

#define SET_NAMESPACE(pos, prefix, uri) { \
  if(QP->_namespaceDecls.containsKey((prefix))) \
    yyerror((pos), "Namespace prefix has already been bound to a namespace [err:XQST0033]"); \
  QP->_namespaceDecls.put((prefix), NULL); \
  CONTEXT->setNamespaceBinding((prefix), (uri)); \
}

#undef yylex
#define yylex QP->_lexer->yylex
#undef yyerror
#define yyerror QP->_lexer->error

XERCES_CPP_NAMESPACE_USE;
using namespace std;

static const XMLCh sz1_0[] = { chDigit_1, chPeriod, chDigit_0, chNull };
static const XMLCh sz3_0[] = { chDigit_3, chPeriod, chDigit_0, chNull };
static const XMLCh option_projection[] = { 'p', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n', 0 };
static const XMLCh option_psvi[] = { 'p', 's', 'v', 'i', 0 };
static const XMLCh option_lint[] = { 'l', 'i', 'n', 't', 0 };
static const XMLCh option_extensions[] = { 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', 0 };
static const XMLCh option_rule[] = { 'r', 'u', 'l', 'e', 0 };
static const XMLCh var_name[] = { 'n', 'a', 'm', 'e', 0 };

static inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr)
{
  VectorOfASTNodes args=VectorOfASTNodes(2,(ASTNode*)NULL,XQillaAllocator<ASTNode*>(memMgr));
  args[0]=arg1Impl;
  args[1]=arg2Impl;

  return args;
}

static inline TupleNode *getLastAncestor(TupleNode *node)
{
  while(node->getParent()) node = const_cast<TupleNode*>(node->getParent());
  return node;
}

static inline TupleNode *setLastAncestor(TupleNode *node, TupleNode *ancestor)
{
  getLastAncestor(node)->setParent(ancestor);
  return node;
}

template<typename TYPE>
TYPE *wrapForDebug(XQParserArgs *qp, TYPE* pObjToWrap, unsigned int line, unsigned int column)
{
  if(pObjToWrap->getLine() == 0)
    pObjToWrap->setLocationInfo(QP->_lexer->getFile(), line, column);
  return pObjToWrap;
}

#define RESOLVE_QNAME(pos, qname) const XMLCh *uri, *name; resolveQName((pos), QP, (qname), uri, name)

static void resolveQName(const yyltype &pos, XQParserArgs *qp, const XMLCh *qname, const XMLCh *&uri, const XMLCh *&name)
{
  const XMLCh *prefix = XPath2NSUtils::getPrefix(qname, MEMMGR);
  name = XPath2NSUtils::getLocalName(qname);

  if(prefix == 0 || *prefix == 0) {
    uri = 0;
  }
  else {
    if(QP->_lexer->getNSResolver() == 0) {
      if(prefix == 0 || *prefix == 0)
        uri = CONTEXT->getDefaultElementAndTypeNS();
      else uri = CONTEXT->getNSResolver()->lookupNamespaceURI(prefix);
    }
    else {
      uri = QP->_lexer->getNSResolver()->lookupNamespaceURI(prefix);
    }

    if(uri == 0 || *uri == 0) {
      ostringstream oss;
      oss << "No namespace binding for prefix '" << UTF8(prefix) << "' [err:XTSE0280]";
      yyerror(pos, oss.str().c_str());
    }
  }
}

#define XSLT_VARIABLE_VALUE(pos, select, seqConstruct, seqType) variableValueXSLT((pos), QP, (select), (seqConstruct), (seqType))

static ASTNode *variableValueXSLT(const yyltype &pos, XQParserArgs *qp, ASTNode *select, XQSequence *seqConstruct, SequenceType *seqType)
{
  if(!seqConstruct->getChildren().empty()) {
    if(select != 0) return 0; // signifies an error
    
    if(seqType == 0) {
      return WRAP(pos, new (MEMMGR) XQDocumentConstructor(seqConstruct, MEMMGR));
    }

    return WRAP(pos, new (MEMMGR) XQFunctionConversion(seqConstruct, seqType, MEMMGR));
  }

  if(select != 0) {
    if(seqType == 0) return select;

    return WRAP(pos, new (MEMMGR) XQFunctionConversion(select, seqType, MEMMGR));
  }

  if(seqType == 0) {
    return WRAP(pos, new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING,
        XMLUni::fgZeroLenString, MEMMGR));
  }

  return WRAP(pos, new (MEMMGR) XQFunctionConversion(WRAP(pos, new (MEMMGR) XQSequence(MEMMGR)), seqType, MEMMGR));
}

static void DM_outputDecl(const char *type, const char *name, int size, bool privte, int line, int column, const XMLCh *body, int bodylen)
{
  XMLBuffer buf;
  printf("  {\n    DelayedModule::Decl::%s, \"%s\", %d, %s, %d, %d,\n", type, name, size,
         privte ? "true" : "false", line, column);
  printf("    \"");
  const XMLCh *ptr = body;
  const XMLCh *start = ptr;
  const XMLCh *end = body + bodylen;
  for(;ptr < end; ++ptr) {
    if(*ptr == '"') {
      if((ptr - start) == 0) buf.reset();
      else buf.set(start, ptr - start);
      printf("%s\\\"", UTF8(buf.getRawBuffer()));
      start = ptr + 1;
    }
    else if(*ptr == '\\') {
      if((ptr - start) == 0) buf.reset();
      else buf.set(start, ptr - start);
      printf("%s\\\\", UTF8(buf.getRawBuffer()));
      start = ptr + 1;
    }
    else if(*ptr == '\n') {
      if((ptr - start) == 0) buf.reset();
      else buf.set(start, ptr - start);
      printf("%s\\n\"\n    \"", UTF8(buf.getRawBuffer()));
      start = ptr + 1;
    }
  }
  buf.set(start, ptr - start);
  printf("%s\"\n", UTF8(buf.getRawBuffer()));
  printf("  },\n");
}

namespace XQParser {



/* Line 189 of yacc.c  */
#line 427 "../src/parser/XQParser.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MYEOF = 0,
     _LANG_XPATH2_ = 258,
     _LANG_XQUERY_ = 259,
     _LANG_XSLT2_ = 260,
     _LANG_FUNCDECL_ = 261,
     _LANG_DELAYEDMODULE_ = 262,
     _LANG_FUNCTION_SIGNATURE_ = 263,
     _LANG_REWRITE_RULE_ = 264,
     _LANG_REWRITE_PATTERN_ = 265,
     _LANG_SEQUENCE_TYPE_ = 266,
     _LANG_CARROT_ = 267,
     _DOLLAR_ = 268,
     _COLON_EQUALS_ = 269,
     _ASTERISK_ = 270,
     _BAR_ = 271,
     _BANG_EQUALS_ = 272,
     _LESS_THAN_EQUALS_ = 273,
     _GREATER_THAN_ = 274,
     _GREATER_THAN_EQUALS_ = 275,
     _LESS_THAN_LESS_THAN_ = 276,
     _GREATER_THAN_GREATER_THAN_ = 277,
     _COLON_COLON_ = 278,
     _AT_SIGN_ = 279,
     _LSQUARE_ = 280,
     _RSQUARE_ = 281,
     _QUESTION_MARK_ = 282,
     _LESS_THAN_OP_OR_TAG_ = 283,
     _START_TAG_CLOSE_ = 284,
     _END_TAG_CLOSE_ = 285,
     _PI_START_ = 286,
     _XML_COMMENT_START_ = 287,
     _XML_COMMENT_END_ = 288,
     _SLASH_SLASH_ = 289,
     _END_TAG_OPEN_ = 290,
     _PRAGMA_OPEN_ = 291,
     _COMMA_ = 292,
     _PLUS_ = 293,
     _MINUS_ = 294,
     _SLASH_ = 295,
     _EQUALS_ = 296,
     _DOT_ = 297,
     _DOT_DOT_ = 298,
     _LPAR_ = 299,
     _RPAR_ = 300,
     _EMPTY_TAG_CLOSE_ = 301,
     _VALUE_INDICATOR_ = 302,
     _OPEN_QUOT_ = 303,
     _CLOSE_QUOT_ = 304,
     _OPEN_APOS_ = 305,
     _CLOSE_APOS_ = 306,
     _LBRACE_ = 307,
     _RBRACE_ = 308,
     _SEMICOLON_ = 309,
     _HASH_ = 310,
     _PERCENT_ = 311,
     _COLON_ = 312,
     _TILDE_ = 313,
     _MINUS_GREATER_THAN_ = 314,
     _BAR_BAR_ = 315,
     _BANG_ = 316,
     _CARROT_ = 317,
     _INTEGER_LITERAL_ = 318,
     _DECIMAL_LITERAL_ = 319,
     _DOUBLE_LITERAL_ = 320,
     _ATTRIBUTE_ = 321,
     _COMMENT_ = 322,
     _DOCUMENT_NODE_ = 323,
     _NAMESPACE_NODE_ = 324,
     _NODE_ = 325,
     _PROCESSING_INSTRUCTION_ = 326,
     _SCHEMA_ATTRIBUTE_ = 327,
     _SCHEMA_ELEMENT_ = 328,
     _TEXT_ = 329,
     _EMPTY_SEQUENCE_ = 330,
     _BOUNDARY_SPACE_ = 331,
     _FT_OPTION_ = 332,
     _BASE_URI_ = 333,
     _LAX_ = 334,
     _STRICT_ = 335,
     _IDIV_ = 336,
     _CHILD_ = 337,
     _DESCENDANT_ = 338,
     _SELF_ = 339,
     _DESCENDANT_OR_SELF_ = 340,
     _FOLLOWING_SIBLING_ = 341,
     _FOLLOWING_ = 342,
     _PARENT_ = 343,
     _ANCESTOR_ = 344,
     _PRECEDING_SIBLING_ = 345,
     _PRECEDING_ = 346,
     _ANCESTOR_OR_SELF_ = 347,
     _DOCUMENT_ = 348,
     _NOT_ = 349,
     _USING_ = 350,
     _NO_ = 351,
     _SENSITIVE_ = 352,
     _INSENSITIVE_ = 353,
     _DIACRITICS_ = 354,
     _WITHOUT_ = 355,
     _WITHOUT_C_ = 356,
     _STEMMING_ = 357,
     _THESAURUS_ = 358,
     _STOP_ = 359,
     _WILDCARDS_ = 360,
     _ENTIRE_ = 361,
     _CONTENT_ = 362,
     _WORD_ = 363,
     _TYPE_ = 364,
     _START_ = 365,
     _END_ = 366,
     _MOST_ = 367,
     _SKIP_ = 368,
     _COPY_ = 369,
     _VALUE_ = 370,
     _WHITESPACE_ = 371,
     _PI_CONTENT_ = 372,
     _XML_COMMENT_CONTENT_ = 373,
     _EQ_ = 374,
     _NE_ = 375,
     _LT_ = 376,
     _LE_ = 377,
     _GT_ = 378,
     _GE_ = 379,
     _AT_ = 380,
     _QUOT_ATTR_CONTENT_ = 381,
     _APOS_ATTR_CONTENT_ = 382,
     _WHITESPACE_ELEMENT_CONTENT_ = 383,
     _ELEMENT_CONTENT_ = 384,
     _AT_LM_ = 385,
     _ORDERED_ = 386,
     _UNORDERED_ = 387,
     _QNAME_ = 388,
     _XMLNS_QNAME_ = 389,
     _CONSTR_QNAME_ = 390,
     _STRING_LITERAL_ = 391,
     _VARIABLE_ = 392,
     _NCNAME_COLON_STAR_ = 393,
     _STAR_COLON_NCNAME_ = 394,
     _PI_TARGET_ = 395,
     _PRAGMA_CONTENT_ = 396,
     _RETURN_ = 397,
     _FOR_ = 398,
     _IN_ = 399,
     _LET_ = 400,
     _WHERE_ = 401,
     _COUNT_ = 402,
     _BY_ = 403,
     _ORDER_ = 404,
     _STABLE_ = 405,
     _ASCENDING_ = 406,
     _DESCENDING_ = 407,
     _EMPTY_ = 408,
     _GREATEST_ = 409,
     _LEAST_ = 410,
     _COLLATION_ = 411,
     _SOME_ = 412,
     _EVERY_ = 413,
     _SATISFIES_ = 414,
     _TYPESWITCH_ = 415,
     _SWITCH_ = 416,
     _CASE_ = 417,
     _CASE_S_ = 418,
     _AS_ = 419,
     _IF_ = 420,
     _THEN_ = 421,
     _ELSE_ = 422,
     _OR_ = 423,
     _AND_ = 424,
     _INSTANCE_ = 425,
     _OF_ = 426,
     _CASTABLE_ = 427,
     _TO_ = 428,
     _DIV_ = 429,
     _MOD_ = 430,
     _UNION_ = 431,
     _INTERSECT_ = 432,
     _EXCEPT_ = 433,
     _VALIDATE_ = 434,
     _CAST_ = 435,
     _TREAT_ = 436,
     _IS_ = 437,
     _PRESERVE_ = 438,
     _STRIP_ = 439,
     _NAMESPACE_ = 440,
     _ITEM_ = 441,
     _EXTERNAL_ = 442,
     _ENCODING_ = 443,
     _NO_PRESERVE_ = 444,
     _INHERIT_ = 445,
     _NO_INHERIT_ = 446,
     _DECLARE_ = 447,
     _CONSTRUCTION_ = 448,
     _ORDERING_ = 449,
     _DEFAULT_ = 450,
     _COPY_NAMESPACES_ = 451,
     _OPTION_ = 452,
     _XQUERY_ = 453,
     _VERSION_ = 454,
     _IMPORT_ = 455,
     _SCHEMA_ = 456,
     _MODULE_ = 457,
     _ELEMENT_ = 458,
     _FUNCTION_ = 459,
     _FUNCTION_EXT_ = 460,
     _SCORE_ = 461,
     _CONTAINS_ = 462,
     _WEIGHT_ = 463,
     _WINDOW_ = 464,
     _DISTANCE_ = 465,
     _OCCURS_ = 466,
     _TIMES_ = 467,
     _SAME_ = 468,
     _DIFFERENT_ = 469,
     _LOWERCASE_ = 470,
     _UPPERCASE_ = 471,
     _RELATIONSHIP_ = 472,
     _LEVELS_ = 473,
     _LANGUAGE_ = 474,
     _ANY_ = 475,
     _ALL_ = 476,
     _PHRASE_ = 477,
     _EXACTLY_ = 478,
     _FROM_ = 479,
     _WORDS_ = 480,
     _SENTENCES_ = 481,
     _PARAGRAPHS_ = 482,
     _SENTENCE_ = 483,
     _PARAGRAPH_ = 484,
     _REPLACE_ = 485,
     _MODIFY_ = 486,
     _FIRST_ = 487,
     _INSERT_ = 488,
     _BEFORE_ = 489,
     _AFTER_ = 490,
     _REVALIDATION_ = 491,
     _WITH_ = 492,
     _NODES_ = 493,
     _RENAME_ = 494,
     _LAST_ = 495,
     _DELETE_ = 496,
     _INTO_ = 497,
     _UPDATING_ = 498,
     _ID_ = 499,
     _KEY_ = 500,
     _TEMPLATE_ = 501,
     _MATCHES_ = 502,
     _TUPLE_ = 503,
     _MAP_ = 504,
     _NAME_ = 505,
     _CALL_ = 506,
     _APPLY_ = 507,
     _TEMPLATES_ = 508,
     _MODE_ = 509,
     _FTOR_ = 510,
     _FTAND_ = 511,
     _FTNOT_ = 512,
     _TYPE_ALIAS_ = 513,
     _XSLT_END_ELEMENT_ = 514,
     _XSLT_STYLESHEET_ = 515,
     _XSLT_TEMPLATE_ = 516,
     _XSLT_VALUE_OF_ = 517,
     _XSLT_TEXT_ = 518,
     _XSLT_APPLY_TEMPLATES_ = 519,
     _XSLT_CALL_TEMPLATE_ = 520,
     _XSLT_WITH_PARAM_ = 521,
     _XSLT_SEQUENCE_ = 522,
     _XSLT_PARAM_ = 523,
     _XSLT_FUNCTION_ = 524,
     _XSLT_CHOOSE_ = 525,
     _XSLT_WHEN_ = 526,
     _XSLT_OTHERWISE_ = 527,
     _XSLT_IF_ = 528,
     _XSLT_VARIABLE_ = 529,
     _XSLT_COMMENT_ = 530,
     _XSLT_PI_ = 531,
     _XSLT_DOCUMENT_ = 532,
     _XSLT_ATTRIBUTE_ = 533,
     _XSLT_NAMESPACE_ = 534,
     _XSLT_ELEMENT_ = 535,
     _XSLT_ANALYZE_STRING_ = 536,
     _XSLT_MATCHING_SUBSTRING_ = 537,
     _XSLT_NON_MATCHING_SUBSTRING_ = 538,
     _XSLT_COPY_OF_ = 539,
     _XSLT_COPY_ = 540,
     _XSLT_FOR_EACH_ = 541,
     _XSLT_OUTPUT_ = 542,
     _XSLT_IMPORT_SCHEMA_ = 543,
     _XSLT_TYPE_ALIAS_ = 544,
     _XSLT_VERSION_ = 545,
     _XSLT_MODE_ = 546,
     _XSLT_NAME_ = 547,
     _XSLT_DOCTYPE_PUBLIC_ = 548,
     _XSLT_DOCTYPE_SYSTEM_ = 549,
     _XSLT_ENCODING_ = 550,
     _XSLT_MEDIA_TYPE_ = 551,
     _XSLT_NORMALIZATION_FORM_ = 552,
     _XSLT_STANDALONE_ = 553,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 554,
     _XSLT_NAMESPACE_STR_ = 555,
     _XSLT_SCHEMA_LOCATION_ = 556,
     _XSLT_TUNNEL_ = 557,
     _XSLT_REQUIRED_ = 558,
     _XSLT_OVERRIDE_ = 559,
     _XSLT_COPY_NAMESPACES_ = 560,
     _XSLT_INHERIT_NAMESPACES_ = 561,
     _XSLT_BYTE_ORDER_MARK_ = 562,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 563,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 564,
     _XSLT_INDENT_ = 565,
     _XSLT_OMIT_XML_DECLARATION_ = 566,
     _XSLT_UNDECLARE_PREFIXES_ = 567,
     _XSLT_MATCH_ = 568,
     _XSLT_AS_ = 569,
     _XSLT_SELECT_ = 570,
     _XSLT_PRIORITY_ = 571,
     _XSLT_TEST_ = 572,
     _XSLT_SEPARATOR_ = 573,
     _XSLT_NAMESPACE_A_ = 574,
     _XSLT_REGEX_ = 575,
     _XSLT_FLAGS_ = 576,
     _XSLT_METHOD_ = 577,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 578,
     _XSLT_USE_CHARACTER_MAPS_ = 579,
     _XSLT_ELEMENT_NAME_ = 580,
     _XSLT_XMLNS_ATTR_ = 581,
     _XSLT_ATTR_NAME_ = 582,
     _XSLT_TEXT_NODE_ = 583,
     _XSLT_WS_TEXT_NODE_ = 584,
     _HASH_DEFAULT_ = 585,
     _HASH_ALL_ = 586,
     _HASH_CURRENT_ = 587,
     _XML_ = 588,
     _HTML_ = 589,
     _XHTML_ = 590
   };
#endif
/* Tokens.  */
#define MYEOF 0
#define _LANG_XPATH2_ 258
#define _LANG_XQUERY_ 259
#define _LANG_XSLT2_ 260
#define _LANG_FUNCDECL_ 261
#define _LANG_DELAYEDMODULE_ 262
#define _LANG_FUNCTION_SIGNATURE_ 263
#define _LANG_REWRITE_RULE_ 264
#define _LANG_REWRITE_PATTERN_ 265
#define _LANG_SEQUENCE_TYPE_ 266
#define _LANG_CARROT_ 267
#define _DOLLAR_ 268
#define _COLON_EQUALS_ 269
#define _ASTERISK_ 270
#define _BAR_ 271
#define _BANG_EQUALS_ 272
#define _LESS_THAN_EQUALS_ 273
#define _GREATER_THAN_ 274
#define _GREATER_THAN_EQUALS_ 275
#define _LESS_THAN_LESS_THAN_ 276
#define _GREATER_THAN_GREATER_THAN_ 277
#define _COLON_COLON_ 278
#define _AT_SIGN_ 279
#define _LSQUARE_ 280
#define _RSQUARE_ 281
#define _QUESTION_MARK_ 282
#define _LESS_THAN_OP_OR_TAG_ 283
#define _START_TAG_CLOSE_ 284
#define _END_TAG_CLOSE_ 285
#define _PI_START_ 286
#define _XML_COMMENT_START_ 287
#define _XML_COMMENT_END_ 288
#define _SLASH_SLASH_ 289
#define _END_TAG_OPEN_ 290
#define _PRAGMA_OPEN_ 291
#define _COMMA_ 292
#define _PLUS_ 293
#define _MINUS_ 294
#define _SLASH_ 295
#define _EQUALS_ 296
#define _DOT_ 297
#define _DOT_DOT_ 298
#define _LPAR_ 299
#define _RPAR_ 300
#define _EMPTY_TAG_CLOSE_ 301
#define _VALUE_INDICATOR_ 302
#define _OPEN_QUOT_ 303
#define _CLOSE_QUOT_ 304
#define _OPEN_APOS_ 305
#define _CLOSE_APOS_ 306
#define _LBRACE_ 307
#define _RBRACE_ 308
#define _SEMICOLON_ 309
#define _HASH_ 310
#define _PERCENT_ 311
#define _COLON_ 312
#define _TILDE_ 313
#define _MINUS_GREATER_THAN_ 314
#define _BAR_BAR_ 315
#define _BANG_ 316
#define _CARROT_ 317
#define _INTEGER_LITERAL_ 318
#define _DECIMAL_LITERAL_ 319
#define _DOUBLE_LITERAL_ 320
#define _ATTRIBUTE_ 321
#define _COMMENT_ 322
#define _DOCUMENT_NODE_ 323
#define _NAMESPACE_NODE_ 324
#define _NODE_ 325
#define _PROCESSING_INSTRUCTION_ 326
#define _SCHEMA_ATTRIBUTE_ 327
#define _SCHEMA_ELEMENT_ 328
#define _TEXT_ 329
#define _EMPTY_SEQUENCE_ 330
#define _BOUNDARY_SPACE_ 331
#define _FT_OPTION_ 332
#define _BASE_URI_ 333
#define _LAX_ 334
#define _STRICT_ 335
#define _IDIV_ 336
#define _CHILD_ 337
#define _DESCENDANT_ 338
#define _SELF_ 339
#define _DESCENDANT_OR_SELF_ 340
#define _FOLLOWING_SIBLING_ 341
#define _FOLLOWING_ 342
#define _PARENT_ 343
#define _ANCESTOR_ 344
#define _PRECEDING_SIBLING_ 345
#define _PRECEDING_ 346
#define _ANCESTOR_OR_SELF_ 347
#define _DOCUMENT_ 348
#define _NOT_ 349
#define _USING_ 350
#define _NO_ 351
#define _SENSITIVE_ 352
#define _INSENSITIVE_ 353
#define _DIACRITICS_ 354
#define _WITHOUT_ 355
#define _WITHOUT_C_ 356
#define _STEMMING_ 357
#define _THESAURUS_ 358
#define _STOP_ 359
#define _WILDCARDS_ 360
#define _ENTIRE_ 361
#define _CONTENT_ 362
#define _WORD_ 363
#define _TYPE_ 364
#define _START_ 365
#define _END_ 366
#define _MOST_ 367
#define _SKIP_ 368
#define _COPY_ 369
#define _VALUE_ 370
#define _WHITESPACE_ 371
#define _PI_CONTENT_ 372
#define _XML_COMMENT_CONTENT_ 373
#define _EQ_ 374
#define _NE_ 375
#define _LT_ 376
#define _LE_ 377
#define _GT_ 378
#define _GE_ 379
#define _AT_ 380
#define _QUOT_ATTR_CONTENT_ 381
#define _APOS_ATTR_CONTENT_ 382
#define _WHITESPACE_ELEMENT_CONTENT_ 383
#define _ELEMENT_CONTENT_ 384
#define _AT_LM_ 385
#define _ORDERED_ 386
#define _UNORDERED_ 387
#define _QNAME_ 388
#define _XMLNS_QNAME_ 389
#define _CONSTR_QNAME_ 390
#define _STRING_LITERAL_ 391
#define _VARIABLE_ 392
#define _NCNAME_COLON_STAR_ 393
#define _STAR_COLON_NCNAME_ 394
#define _PI_TARGET_ 395
#define _PRAGMA_CONTENT_ 396
#define _RETURN_ 397
#define _FOR_ 398
#define _IN_ 399
#define _LET_ 400
#define _WHERE_ 401
#define _COUNT_ 402
#define _BY_ 403
#define _ORDER_ 404
#define _STABLE_ 405
#define _ASCENDING_ 406
#define _DESCENDING_ 407
#define _EMPTY_ 408
#define _GREATEST_ 409
#define _LEAST_ 410
#define _COLLATION_ 411
#define _SOME_ 412
#define _EVERY_ 413
#define _SATISFIES_ 414
#define _TYPESWITCH_ 415
#define _SWITCH_ 416
#define _CASE_ 417
#define _CASE_S_ 418
#define _AS_ 419
#define _IF_ 420
#define _THEN_ 421
#define _ELSE_ 422
#define _OR_ 423
#define _AND_ 424
#define _INSTANCE_ 425
#define _OF_ 426
#define _CASTABLE_ 427
#define _TO_ 428
#define _DIV_ 429
#define _MOD_ 430
#define _UNION_ 431
#define _INTERSECT_ 432
#define _EXCEPT_ 433
#define _VALIDATE_ 434
#define _CAST_ 435
#define _TREAT_ 436
#define _IS_ 437
#define _PRESERVE_ 438
#define _STRIP_ 439
#define _NAMESPACE_ 440
#define _ITEM_ 441
#define _EXTERNAL_ 442
#define _ENCODING_ 443
#define _NO_PRESERVE_ 444
#define _INHERIT_ 445
#define _NO_INHERIT_ 446
#define _DECLARE_ 447
#define _CONSTRUCTION_ 448
#define _ORDERING_ 449
#define _DEFAULT_ 450
#define _COPY_NAMESPACES_ 451
#define _OPTION_ 452
#define _XQUERY_ 453
#define _VERSION_ 454
#define _IMPORT_ 455
#define _SCHEMA_ 456
#define _MODULE_ 457
#define _ELEMENT_ 458
#define _FUNCTION_ 459
#define _FUNCTION_EXT_ 460
#define _SCORE_ 461
#define _CONTAINS_ 462
#define _WEIGHT_ 463
#define _WINDOW_ 464
#define _DISTANCE_ 465
#define _OCCURS_ 466
#define _TIMES_ 467
#define _SAME_ 468
#define _DIFFERENT_ 469
#define _LOWERCASE_ 470
#define _UPPERCASE_ 471
#define _RELATIONSHIP_ 472
#define _LEVELS_ 473
#define _LANGUAGE_ 474
#define _ANY_ 475
#define _ALL_ 476
#define _PHRASE_ 477
#define _EXACTLY_ 478
#define _FROM_ 479
#define _WORDS_ 480
#define _SENTENCES_ 481
#define _PARAGRAPHS_ 482
#define _SENTENCE_ 483
#define _PARAGRAPH_ 484
#define _REPLACE_ 485
#define _MODIFY_ 486
#define _FIRST_ 487
#define _INSERT_ 488
#define _BEFORE_ 489
#define _AFTER_ 490
#define _REVALIDATION_ 491
#define _WITH_ 492
#define _NODES_ 493
#define _RENAME_ 494
#define _LAST_ 495
#define _DELETE_ 496
#define _INTO_ 497
#define _UPDATING_ 498
#define _ID_ 499
#define _KEY_ 500
#define _TEMPLATE_ 501
#define _MATCHES_ 502
#define _TUPLE_ 503
#define _MAP_ 504
#define _NAME_ 505
#define _CALL_ 506
#define _APPLY_ 507
#define _TEMPLATES_ 508
#define _MODE_ 509
#define _FTOR_ 510
#define _FTAND_ 511
#define _FTNOT_ 512
#define _TYPE_ALIAS_ 513
#define _XSLT_END_ELEMENT_ 514
#define _XSLT_STYLESHEET_ 515
#define _XSLT_TEMPLATE_ 516
#define _XSLT_VALUE_OF_ 517
#define _XSLT_TEXT_ 518
#define _XSLT_APPLY_TEMPLATES_ 519
#define _XSLT_CALL_TEMPLATE_ 520
#define _XSLT_WITH_PARAM_ 521
#define _XSLT_SEQUENCE_ 522
#define _XSLT_PARAM_ 523
#define _XSLT_FUNCTION_ 524
#define _XSLT_CHOOSE_ 525
#define _XSLT_WHEN_ 526
#define _XSLT_OTHERWISE_ 527
#define _XSLT_IF_ 528
#define _XSLT_VARIABLE_ 529
#define _XSLT_COMMENT_ 530
#define _XSLT_PI_ 531
#define _XSLT_DOCUMENT_ 532
#define _XSLT_ATTRIBUTE_ 533
#define _XSLT_NAMESPACE_ 534
#define _XSLT_ELEMENT_ 535
#define _XSLT_ANALYZE_STRING_ 536
#define _XSLT_MATCHING_SUBSTRING_ 537
#define _XSLT_NON_MATCHING_SUBSTRING_ 538
#define _XSLT_COPY_OF_ 539
#define _XSLT_COPY_ 540
#define _XSLT_FOR_EACH_ 541
#define _XSLT_OUTPUT_ 542
#define _XSLT_IMPORT_SCHEMA_ 543
#define _XSLT_TYPE_ALIAS_ 544
#define _XSLT_VERSION_ 545
#define _XSLT_MODE_ 546
#define _XSLT_NAME_ 547
#define _XSLT_DOCTYPE_PUBLIC_ 548
#define _XSLT_DOCTYPE_SYSTEM_ 549
#define _XSLT_ENCODING_ 550
#define _XSLT_MEDIA_TYPE_ 551
#define _XSLT_NORMALIZATION_FORM_ 552
#define _XSLT_STANDALONE_ 553
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 554
#define _XSLT_NAMESPACE_STR_ 555
#define _XSLT_SCHEMA_LOCATION_ 556
#define _XSLT_TUNNEL_ 557
#define _XSLT_REQUIRED_ 558
#define _XSLT_OVERRIDE_ 559
#define _XSLT_COPY_NAMESPACES_ 560
#define _XSLT_INHERIT_NAMESPACES_ 561
#define _XSLT_BYTE_ORDER_MARK_ 562
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 563
#define _XSLT_INCLUDE_CONTENT_TYPE_ 564
#define _XSLT_INDENT_ 565
#define _XSLT_OMIT_XML_DECLARATION_ 566
#define _XSLT_UNDECLARE_PREFIXES_ 567
#define _XSLT_MATCH_ 568
#define _XSLT_AS_ 569
#define _XSLT_SELECT_ 570
#define _XSLT_PRIORITY_ 571
#define _XSLT_TEST_ 572
#define _XSLT_SEPARATOR_ 573
#define _XSLT_NAMESPACE_A_ 574
#define _XSLT_REGEX_ 575
#define _XSLT_FLAGS_ 576
#define _XSLT_METHOD_ 577
#define _XSLT_CDATA_SECTION_ELEMENTS_ 578
#define _XSLT_USE_CHARACTER_MAPS_ 579
#define _XSLT_ELEMENT_NAME_ 580
#define _XSLT_XMLNS_ATTR_ 581
#define _XSLT_ATTR_NAME_ 582
#define _XSLT_TEXT_NODE_ 583
#define _XSLT_WS_TEXT_NODE_ 584
#define _HASH_DEFAULT_ 585
#define _HASH_ALL_ 586
#define _HASH_CURRENT_ 587
#define _XML_ 588
#define _HTML_ 589
#define _XHTML_ 590




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 1153 "../src/parser/XQParser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  413
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9680

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  336
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  397
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1854

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   590

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    14,    17,    21,    24,    27,
      30,    33,    37,    38,    40,    41,    45,    49,    53,    59,
      65,    75,    76,    78,    80,    84,    85,    88,    90,    97,
      98,   100,   101,   103,   104,   107,   116,   117,   119,   123,
     127,   134,   135,   138,   141,   144,   153,   159,   166,   168,
     173,   175,   176,   179,   182,   183,   186,   189,   192,   195,
     198,   201,   204,   209,   211,   215,   218,   222,   226,   230,
     231,   234,   237,   240,   242,   244,   246,   251,   253,   256,
     260,   263,   264,   267,   271,   273,   276,   280,   284,   287,
     290,   294,   296,   299,   303,   307,   310,   313,   317,   319,
     322,   326,   330,   333,   335,   338,   342,   345,   349,   352,
     355,   358,   361,   364,   367,   370,   373,   376,   379,   382,
     386,   389,   391,   393,   395,   397,   399,   401,   404,   407,
     409,   412,   416,   419,   421,   424,   427,   431,   435,   440,
     441,   445,   448,   449,   452,   455,   456,   459,   462,   465,
     467,   469,   471,   473,   475,   477,   479,   481,   483,   485,
     487,   489,   491,   493,   495,   497,   499,   501,   505,   507,
     511,   515,   519,   521,   523,   527,   529,   533,   537,   539,
     541,   543,   544,   547,   551,   553,   556,   557,   560,   564,
     566,   569,   573,   577,   580,   583,   587,   591,   595,   600,
     602,   605,   609,   613,   614,   618,   623,   625,   629,   633,
     637,   638,   642,   643,   647,   652,   654,   657,   661,   665,
     669,   671,   675,   679,   681,   685,   689,   693,   695,   699,
     701,   705,   709,   713,   717,   721,   723,   727,   731,   735,
     737,   741,   745,   748,   750,   754,   757,   761,   763,   766,
     769,   773,   775,   779,   783,   785,   787,   789,   791,   793,
     795,   800,   807,   809,   811,   813,   815,   817,   820,   824,
     828,   832,   836,   839,   841,   845,   849,   852,   853,   858,
     861,   864,   865,   869,   874,   878,   881,   884,   887,   890,
     897,   898,   902,   906,   910,   914,   918,   922,   926,   930,
     934,   938,   940,   942,   944,   946,   948,   950,   952,   954,
     956,   958,   960,   966,   970,   974,   980,   986,   991,   995,
     999,  1003,  1009,  1015,  1021,  1023,  1025,  1027,  1029,  1034,
    1038,  1044,  1049,  1050,  1053,  1057,  1061,  1065,  1073,  1078,
    1082,  1086,  1087,  1090,  1092,  1094,  1096,  1104,  1107,  1109,
    1117,  1120,  1124,  1125,  1128,  1130,  1132,  1135,  1141,  1143,
    1147,  1151,  1153,  1157,  1161,  1163,  1167,  1169,  1171,  1173,
    1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,
    1195,  1199,  1201,  1204,  1207,  1209,  1211,  1213,  1215,  1217,
    1220,  1224,  1226,  1234,  1235,  1239,  1240,  1244,  1247,  1251,
    1253,  1259,  1265,  1268,  1272,  1276,  1281,  1285,  1287,  1291,
    1297,  1299,  1300,  1302,  1304,  1305,  1308,  1311,  1316,  1321,
    1325,  1327,  1333,  1340,  1343,  1345,  1351,  1355,  1359,  1363,
    1367,  1368,  1372,  1377,  1382,  1390,  1393,  1397,  1406,  1410,
    1412,  1416,  1418,  1422,  1426,  1427,  1432,  1436,  1440,  1444,
    1448,  1452,  1456,  1460,  1464,  1468,  1472,  1476,  1480,  1482,
    1487,  1493,  1495,  1499,  1501,  1505,  1507,  1511,  1515,  1517,
    1521,  1525,  1529,  1533,  1535,  1539,  1543,  1545,  1549,  1553,
    1555,  1560,  1562,  1567,  1569,  1574,  1576,  1581,  1583,  1586,
    1589,  1591,  1593,  1595,  1597,  1602,  1608,  1614,  1618,  1623,
    1625,  1628,  1633,  1635,  1638,  1640,  1643,  1646,  1648,  1650,
    1654,  1658,  1662,  1664,  1666,  1668,  1670,  1672,  1674,  1679,
    1681,  1686,  1689,  1691,  1694,  1697,  1700,  1703,  1706,  1709,
    1712,  1715,  1718,  1720,  1723,  1725,  1728,  1731,  1734,  1737,
    1740,  1742,  1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,
    1763,  1765,  1767,  1769,  1771,  1773,  1775,  1777,  1779,  1781,
    1783,  1785,  1787,  1789,  1791,  1793,  1796,  1798,  1802,  1805,
    1807,  1812,  1817,  1821,  1826,  1830,  1832,  1834,  1836,  1838,
    1840,  1842,  1844,  1846,  1852,  1863,  1865,  1867,  1868,  1876,
    1884,  1885,  1887,  1891,  1895,  1899,  1903,  1904,  1907,  1910,
    1911,  1914,  1917,  1918,  1921,  1924,  1925,  1928,  1931,  1932,
    1935,  1938,  1941,  1944,  1948,  1949,  1951,  1955,  1957,  1960,
    1962,  1964,  1966,  1968,  1970,  1972,  1974,  1979,  1983,  1985,
    1989,  1992,  1996,  2000,  2002,  2006,  2010,  2015,  2020,  2024,
    2026,  2030,  2033,  2037,  2040,  2041,  2043,  2044,  2047,  2050,
    2054,  2055,  2057,  2059,  2061,  2065,  2067,  2069,  2071,  2073,
    2075,  2077,  2079,  2081,  2083,  2085,  2087,  2089,  2091,  2093,
    2095,  2099,  2103,  2108,  2113,  2117,  2121,  2125,  2129,  2134,
    2139,  2143,  2148,  2155,  2157,  2159,  2164,  2166,  2170,  2175,
    2182,  2190,  2192,  2194,  2199,  2201,  2203,  2205,  2207,  2209,
    2213,  2214,  2217,  2218,  2221,  2225,  2227,  2231,  2233,  2238,
    2240,  2243,  2245,  2247,  2250,  2253,  2257,  2259,  2262,  2267,
    2271,  2276,  2277,  2279,  2282,  2284,  2287,  2289,  2290,  2294,
    2297,  2301,  2305,  2310,  2312,  2316,  2320,  2323,  2326,  2329,
    2332,  2335,  2337,  2339,  2341,  2343,  2345,  2348,  2352,  2354,
    2356,  2358,  2360,  2362,  2364,  2366,  2368,  2371,  2374,  2376,
    2378,  2381,  2384,  2386,  2389,  2392,  2395,  2401,  2407,  2410,
    2411,  2415,  2418,  2423,  2428,  2435,  2440,  2444,  2449,  2450,
    2453,  2456,  2460,  2462,  2466,  2469,  2472,  2475,  2477,  2480,
    2484,  2488,  2492,  2496,  2500,  2507,  2514,  2519,  2524,  2529,
    2532,  2535,  2538,  2541,  2544,  2552,  2558,  2564,  2571,  2575,
    2577,  2582,  2584,  2586,  2588,  2590,  2592,  2594,  2600,  2608,
    2617,  2628,  2635,  2644,  2645,  2648,  2651,  2655,  2656,  2659,
    2661,  2665,  2667,  2669,  2671,  2675,  2683,  2687,  2695,  2701,
    2711,  2713,  2715,  2717,  2719,  2723,  2729,  2731,  2733,  2737,
    2742,  2746,  2751,  2753,  2755,  2761,  2762,  2765,  2772,  2780,
    2782,  2786,  2790,  2792,  2794,  2799,  2803,  2805,  2809,  2812,
    2819,  2823,  2825,  2827,  2832,  2836,  2838,  2842,  2847,  2852,
    2856,  2858,  2862,  2866,  2868,  2872,  2878,  2880,  2882,  2888,
    2891,  2892,  2895,  2899,  2908,  2910,  2914,  2916,  2920,  2922,
    2926,  2930,  2934,  2938,  2942,  2946,  2948,  2952,  2956,  2958,
    2962,  2966,  2970,  2974,  2976,  2979,  2982,  2984,  2989,  2991,
    2996,  3000,  3003,  3005,  3007,  3009,  3011,  3012,  3014,  3016,
    3020,  3022,  3025,  3027,  3029,  3031,  3033,  3035,  3037,  3039,
    3041,  3043,  3045,  3047,  3049,  3051,  3053,  3055,  3057,  3059,
    3061,  3063,  3065,  3067,  3069,  3071,  3073,  3075,  3077,  3079,
    3081,  3083,  3085,  3087,  3089,  3091,  3093,  3095,  3097,  3099,
    3101,  3103,  3105,  3107,  3109,  3111,  3113,  3115,  3117,  3119,
    3121,  3123,  3125,  3127,  3129,  3131,  3133,  3135,  3137,  3139,
    3141,  3143,  3145,  3147,  3149,  3151,  3153,  3155,  3157,  3159,
    3161,  3163,  3165,  3167,  3169,  3171,  3173,  3175,  3177,  3179,
    3181,  3183,  3185,  3187,  3189,  3191,  3193,  3195,  3197,  3199,
    3201,  3203,  3205,  3207,  3209,  3211,  3213,  3215,  3217,  3219,
    3221,  3223,  3225,  3227,  3229,  3231,  3233,  3235,  3237,  3239,
    3241,  3243,  3245,  3247,  3249,  3251,  3253,  3255,  3257,  3259,
    3261,  3263,  3265,  3267,  3269,  3271,  3273,  3275,  3277,  3279,
    3281,  3283,  3285,  3287,  3289,  3291,  3293,  3295,  3297,  3299,
    3301,  3303,  3305,  3307,  3309,  3311,  3313,  3315,  3317,  3319,
    3321,  3323,  3325,  3327,  3329,  3331,  3333,  3335,  3337,  3339,
    3341,  3343,  3345,  3347,  3349,  3351,  3353,  3355,  3357,  3359,
    3361,  3363,  3365,  3367,  3369
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     337,     0,    -1,     3,   489,    -1,     4,   338,   447,    -1,
       6,   338,   352,    -1,     5,   361,    -1,     7,   338,   355,
      -1,     8,   354,    -1,     9,   714,    -1,    10,   715,    -1,
      11,   608,    -1,    12,   338,   339,    -1,    -1,   340,    -1,
      -1,   340,   341,    54,    -1,   340,   342,    54,    -1,   340,
     343,    54,    -1,    13,   567,   607,    14,   491,    -1,   732,
     481,   482,    14,   491,    -1,    62,   344,    44,   437,   346,
      45,   482,    14,   491,    -1,    -1,   345,    -1,   686,    -1,
     345,    16,   686,    -1,    -1,    54,   486,    -1,   348,    -1,
      62,   350,    44,   349,   351,    45,    -1,    -1,   491,    -1,
      -1,   689,    -1,    -1,    54,   690,    -1,   192,   475,   204,
     732,   481,   482,   488,   353,    -1,    -1,   457,    -1,   475,
     481,   482,    -1,   448,   356,   357,    -1,   202,   185,   679,
      41,   630,   457,    -1,    -1,   357,   358,    -1,   357,   359,
      -1,   357,   360,    -1,   192,   475,   204,   732,   481,   482,
     488,   457,    -1,   192,   197,   731,   136,   457,    -1,   192,
     185,   679,    41,   630,   457,    -1,   362,    -1,   260,   363,
     364,   259,    -1,   386,    -1,    -1,   363,   290,    -1,   363,
     299,    -1,    -1,   364,   365,    -1,   364,   369,    -1,   364,
     374,    -1,   364,   376,    -1,   364,   378,    -1,   364,   384,
      -1,   364,   382,    -1,   366,   371,   389,   259,    -1,   261,
      -1,   366,   313,   437,    -1,   366,   292,    -1,   366,   316,
     368,    -1,   366,   291,   367,    -1,   366,   314,   608,    -1,
      -1,   367,   133,    -1,   367,   330,    -1,   367,   331,    -1,
      63,    -1,    64,    -1,    65,    -1,   370,   371,   389,   259,
      -1,   269,    -1,   370,   292,    -1,   370,   314,   608,    -1,
     370,   304,    -1,    -1,   371,   372,    -1,   373,   389,   259,
      -1,   268,    -1,   373,   292,    -1,   373,   315,   490,    -1,
     373,   314,   608,    -1,   373,   303,    -1,   373,   302,    -1,
     375,   389,   259,    -1,   268,    -1,   375,   292,    -1,   375,
     315,   490,    -1,   375,   314,   608,    -1,   375,   303,    -1,
     375,   302,    -1,   377,   389,   259,    -1,   274,    -1,   377,
     292,    -1,   377,   315,   490,    -1,   377,   314,   608,    -1,
     379,   259,    -1,   287,    -1,   379,   292,    -1,   379,   322,
     380,    -1,   379,   307,    -1,   379,   323,   381,    -1,   379,
     293,    -1,   379,   294,    -1,   379,   295,    -1,   379,   308,
      -1,   379,   309,    -1,   379,   310,    -1,   379,   296,    -1,
     379,   297,    -1,   379,   311,    -1,   379,   298,    -1,   379,
     312,    -1,   379,   324,   381,    -1,   379,   290,    -1,   333,
      -1,   334,    -1,   335,    -1,    74,    -1,   133,    -1,   133,
      -1,   381,   133,    -1,   383,   259,    -1,   289,    -1,   383,
     292,    -1,   383,   314,   610,    -1,   385,   259,    -1,   288,
      -1,   288,   300,    -1,   288,   301,    -1,   288,   300,   301,
      -1,   288,   301,   300,    -1,   325,   387,   389,   259,    -1,
      -1,   387,   327,   388,    -1,   387,   326,    -1,    -1,   388,
     488,    -1,   388,   126,    -1,    -1,   389,   394,    -1,   389,
     386,    -1,   389,   390,    -1,   391,    -1,   393,    -1,   395,
      -1,   399,    -1,   404,    -1,   408,    -1,   406,    -1,   417,
      -1,   419,    -1,   421,    -1,   423,    -1,   425,    -1,   427,
      -1,   429,    -1,   413,    -1,   431,    -1,   433,    -1,   435,
      -1,   392,   389,   259,    -1,   262,    -1,   392,   315,   490,
      -1,   392,   318,   388,    -1,   263,   394,   259,    -1,   328,
      -1,   329,    -1,   396,   398,   259,    -1,   264,    -1,   396,
     315,   490,    -1,   396,   291,   397,    -1,   133,    -1,   330,
      -1,   332,    -1,    -1,   398,   402,    -1,   400,   401,   259,
      -1,   265,    -1,   400,   292,    -1,    -1,   401,   402,    -1,
     403,   389,   259,    -1,   266,    -1,   403,   292,    -1,   403,
     315,   490,    -1,   403,   314,   608,    -1,   403,   302,    -1,
     405,   259,    -1,   267,   315,   490,    -1,   407,   389,   259,
      -1,   273,   317,   490,    -1,   270,   409,   412,   259,    -1,
     410,    -1,   409,   410,    -1,   411,   389,   259,    -1,   271,
     317,   490,    -1,    -1,   272,   389,   259,    -1,   414,   415,
     416,   259,    -1,   281,    -1,   414,   315,   490,    -1,   414,
     320,   388,    -1,   414,   321,   388,    -1,    -1,   282,   389,
     259,    -1,    -1,   283,   389,   259,    -1,   418,   389,   259,
     389,    -1,   274,    -1,   418,   292,    -1,   418,   315,   490,
      -1,   418,   314,   608,    -1,   420,   389,   259,    -1,   275,
      -1,   420,   315,   490,    -1,   422,   389,   259,    -1,   276,
      -1,   422,   292,   388,    -1,   422,   315,   490,    -1,   424,
     389,   259,    -1,   277,    -1,   426,   389,   259,    -1,   278,
      -1,   426,   292,   388,    -1,   426,   319,   388,    -1,   426,
     315,   490,    -1,   426,   318,   388,    -1,   428,   389,   259,
      -1,   279,    -1,   428,   292,   388,    -1,   428,   315,   490,
      -1,   430,   389,   259,    -1,   280,    -1,   430,   292,   388,
      -1,   430,   319,   388,    -1,   432,   259,    -1,   284,    -1,
     432,   315,   490,    -1,   432,   305,    -1,   434,   389,   259,
      -1,   285,    -1,   434,   305,    -1,   434,   306,    -1,   436,
     389,   259,    -1,   286,    -1,   436,   315,   490,    -1,   437,
      16,   438,    -1,   438,    -1,   443,    -1,    40,    -1,   440,
      -1,    40,    -1,    34,    -1,   244,    44,   441,    45,    -1,
     245,    44,   678,    37,   442,    45,    -1,   678,    -1,   566,
      -1,   564,    -1,   566,    -1,   444,    -1,   439,   444,    -1,
     440,    40,   444,    -1,   440,    34,   444,    -1,   443,    40,
     444,    -1,   443,    34,   444,    -1,   445,   446,    -1,   560,
      -1,    82,    23,   560,    -1,    66,    23,   560,    -1,    24,
     560,    -1,    -1,   446,    25,   490,    26,    -1,   448,   451,
      -1,   448,   452,    -1,    -1,   198,   449,   457,    -1,   198,
     449,   450,   457,    -1,   198,   450,   457,    -1,   199,   136,
      -1,   188,   136,    -1,   454,   489,    -1,   453,   454,    -1,
     202,   185,   679,    41,   630,   457,    -1,    -1,   454,   455,
     457,    -1,   454,   456,   457,    -1,   454,   458,   457,    -1,
     454,   460,   457,    -1,   454,   478,   457,    -1,   454,   480,
     457,    -1,   454,   681,   457,    -1,   454,   461,   457,    -1,
     454,   462,   457,    -1,   454,   713,   457,    -1,   459,    -1,
     468,    -1,   469,    -1,   474,    -1,   463,    -1,   464,    -1,
     665,    -1,   465,    -1,   470,    -1,   473,    -1,    54,    -1,
     192,   185,   679,    41,   630,    -1,   192,    76,   183,    -1,
     192,    76,   184,    -1,   192,   195,   203,   185,   630,    -1,
     192,   195,   204,   185,   630,    -1,   192,   197,   731,   136,
      -1,   192,    77,   648,    -1,   192,   194,   131,    -1,   192,
     194,   132,    -1,   192,   195,   149,   153,   154,    -1,   192,
     195,   149,   153,   155,    -1,   192,   196,   466,    37,   467,
      -1,   183,    -1,   189,    -1,   190,    -1,   191,    -1,   192,
     195,   156,   630,    -1,   192,    78,   630,    -1,   200,   201,
     472,   630,   471,    -1,   200,   201,   630,   471,    -1,    -1,
     125,   630,    -1,   471,    37,   630,    -1,   185,   679,    41,
      -1,   195,   203,   185,    -1,   200,   202,   185,   679,    41,
     630,   471,    -1,   200,   202,   630,   471,    -1,   192,   193,
     183,    -1,   192,   193,   184,    -1,    -1,   475,   476,    -1,
     477,    -1,   484,    -1,   243,    -1,   192,   475,   137,    13,
     567,   607,   479,    -1,    14,   491,    -1,   187,    -1,   192,
     475,   204,   732,   481,   482,   483,    -1,    44,    45,    -1,
      44,   486,    45,    -1,    -1,   164,   608,    -1,   488,    -1,
     187,    -1,    56,   731,    -1,    56,   731,    44,   485,    45,
      -1,   564,    -1,   485,    37,   564,    -1,   486,    37,   487,
      -1,   487,    -1,    13,   567,   607,    -1,    52,   490,    53,
      -1,   490,    -1,   490,    37,   491,    -1,   491,    -1,   492,
      -1,   512,    -1,   515,    -1,   521,    -1,   524,    -1,   666,
      -1,   668,    -1,   671,    -1,   670,    -1,   672,    -1,   525,
      -1,   687,    -1,   688,    -1,   493,   142,   491,    -1,   494,
      -1,   493,   506,    -1,   493,   495,    -1,   496,    -1,   501,
      -1,   494,    -1,   504,    -1,   505,    -1,   143,   497,    -1,
     497,    37,   498,    -1,   498,    -1,    13,   567,   607,   499,
     500,   144,   491,    -1,    -1,   125,    13,   567,    -1,    -1,
     206,    13,   567,    -1,   145,   502,    -1,   502,    37,   503,
      -1,   503,    -1,    13,   567,   607,    14,   491,    -1,   206,
      13,   567,    14,   491,    -1,   146,   491,    -1,   147,    13,
     567,    -1,   149,   148,   507,    -1,   150,   149,   148,   507,
      -1,   507,    37,   508,    -1,   508,    -1,   509,   510,   511,
      -1,   509,   510,   511,   156,   630,    -1,   491,    -1,    -1,
     151,    -1,   152,    -1,    -1,   153,   154,    -1,   153,   155,
      -1,   157,   513,   159,   491,    -1,   158,   513,   159,   491,
      -1,   513,    37,   514,    -1,   514,    -1,    13,   567,   607,
     144,   491,    -1,   160,    44,   490,    45,   516,   517,    -1,
     516,   518,    -1,   518,    -1,   195,    13,   567,   142,   491,
      -1,   195,   142,   491,    -1,   519,   142,   491,    -1,   162,
     520,   608,    -1,   519,    16,   608,    -1,    -1,    13,   567,
     164,    -1,   522,   195,   142,   491,    -1,   522,   523,   142,
     491,    -1,   161,    44,   490,    45,   523,   142,   491,    -1,
     162,   491,    -1,   523,   162,   491,    -1,   165,    44,   490,
      45,   166,   491,   167,   491,    -1,   525,   168,   526,    -1,
     526,    -1,   526,   169,   527,    -1,   527,    -1,   529,    41,
     529,    -1,   529,    17,   529,    -1,    -1,   529,    28,   528,
     529,    -1,   529,    18,   529,    -1,   529,    19,   529,    -1,
     529,    20,   529,    -1,   529,   119,   529,    -1,   529,   120,
     529,    -1,   529,   121,   529,    -1,   529,   122,   529,    -1,
     529,   123,   529,    -1,   529,   124,   529,    -1,   529,   182,
     529,    -1,   529,    21,   529,    -1,   529,    22,   529,    -1,
     529,    -1,   530,   207,    74,   631,    -1,   530,   207,    74,
     631,   664,    -1,   530,    -1,   530,    60,   531,    -1,   531,
      -1,   532,   173,   532,    -1,   532,    -1,   532,    38,   533,
      -1,   532,    39,   533,    -1,   533,    -1,   533,    15,   534,
      -1,   533,   174,   534,    -1,   533,    81,   534,    -1,   533,
     175,   534,    -1,   534,    -1,   534,    16,   535,    -1,   534,
     176,   535,    -1,   535,    -1,   535,   177,   536,    -1,   535,
     178,   536,    -1,   536,    -1,   537,   170,   171,   608,    -1,
     537,    -1,   538,   181,   164,   608,    -1,   538,    -1,   539,
     172,   164,   605,    -1,   539,    -1,   540,   180,   164,   605,
      -1,   540,    -1,    39,   540,    -1,    38,   540,    -1,   541,
      -1,   542,    -1,   547,    -1,   543,    -1,   179,    52,   490,
      53,    -1,   179,    79,    52,   490,    53,    -1,   179,    80,
      52,   490,    53,    -1,   544,    52,    53,    -1,   544,    52,
     490,    53,    -1,   545,    -1,   544,   545,    -1,    36,   580,
     731,   546,    -1,   141,    -1,   116,   141,    -1,   548,    -1,
     548,   549,    -1,    34,   549,    -1,   549,    -1,    40,    -1,
     549,    40,   550,    -1,   549,    34,   550,    -1,   549,    61,
     550,    -1,   550,    -1,   551,    -1,   563,    -1,   552,    -1,
     553,    -1,   554,    -1,   552,    25,   490,    26,    -1,   557,
      -1,   553,    25,   490,    26,    -1,   555,   560,    -1,   556,
      -1,    82,    23,    -1,    83,    23,    -1,    66,    23,    -1,
      84,    23,    -1,    85,    23,    -1,    86,    23,    -1,    87,
      23,    -1,   185,    23,    -1,    24,   560,    -1,   560,    -1,
     558,   560,    -1,   559,    -1,    88,    23,    -1,    89,    23,
      -1,    90,    23,    -1,    91,    23,    -1,    92,    23,    -1,
      43,    -1,   612,    -1,   561,    -1,   680,    -1,   562,    -1,
      15,    -1,   138,    -1,   139,    -1,   347,    -1,   563,    25,
     490,    26,    -1,   695,    -1,   564,    -1,   566,    -1,   568,
      -1,   569,    -1,   572,    -1,   575,    -1,   570,    -1,   571,
      -1,   692,    -1,   565,    -1,   678,    -1,   675,    -1,   676,
      -1,   677,    -1,    13,   567,    -1,   731,    -1,    44,   490,
      45,    -1,    44,    45,    -1,    42,    -1,   131,    52,   490,
      53,    -1,   132,    52,   490,    53,    -1,   732,    44,    45,
      -1,   732,    44,   573,    45,    -1,   573,    37,   574,    -1,
     574,    -1,   491,    -1,    27,    -1,   576,    -1,   592,    -1,
     577,    -1,   588,    -1,   590,    -1,    28,   578,   579,   580,
      46,    -1,    28,   578,   579,   580,    29,   587,    35,   578,
     580,    30,    -1,   133,    -1,   134,    -1,    -1,   579,   116,
     133,   580,    47,   580,   581,    -1,   579,   116,   134,   580,
      47,   580,   582,    -1,    -1,   116,    -1,    48,   583,    49,
      -1,    50,   585,    51,    -1,    48,   584,    49,    -1,    50,
     586,    51,    -1,    -1,   583,   488,    -1,   583,   126,    -1,
      -1,   584,   488,    -1,   584,   126,    -1,    -1,   585,   488,
      -1,   585,   127,    -1,    -1,   586,   488,    -1,   586,   127,
      -1,    -1,   587,   576,    -1,   587,   488,    -1,   587,   129,
      -1,   587,   128,    -1,    32,   589,    33,    -1,    -1,   118,
      -1,    31,   140,   591,    -1,   117,    -1,   116,   117,    -1,
     593,    -1,   594,    -1,   597,    -1,   599,    -1,   600,    -1,
     601,    -1,   602,    -1,    93,    52,   490,    53,    -1,   203,
     595,   596,    -1,   135,    -1,    52,   490,    53,    -1,    52,
      53,    -1,    52,   490,    53,    -1,    66,   598,   596,    -1,
     135,    -1,    52,   490,    53,    -1,   185,   603,   596,    -1,
      74,    52,   490,    53,    -1,    67,    52,   490,    53,    -1,
      71,   603,   604,    -1,   135,    -1,    52,   490,    53,    -1,
      52,    53,    -1,    52,   490,    53,    -1,   611,   606,    -1,
      -1,    27,    -1,    -1,   164,   608,    -1,   610,   609,    -1,
      75,    44,    45,    -1,    -1,    15,    -1,    38,    -1,    27,
      -1,   186,    44,    45,    -1,   611,    -1,   612,    -1,   696,
      -1,   701,    -1,   680,    -1,   614,    -1,   623,    -1,   619,
      -1,   625,    -1,   621,    -1,   618,    -1,   616,    -1,   615,
      -1,   617,    -1,   613,    -1,    70,    44,    45,    -1,    68,
      44,    45,    -1,    68,    44,   623,    45,    -1,    68,    44,
     625,    45,    -1,    74,    44,    45,    -1,    67,    44,    45,
      -1,    69,    44,    45,    -1,    71,    44,    45,    -1,    71,
      44,   679,    45,    -1,    71,    44,   136,    45,    -1,    66,
      44,    45,    -1,    66,    44,   620,    45,    -1,    66,    44,
     620,    37,   629,    45,    -1,   627,    -1,    15,    -1,    72,
      44,   622,    45,    -1,   627,    -1,   203,    44,    45,    -1,
     203,    44,   624,    45,    -1,   203,    44,   624,    37,   629,
      45,    -1,   203,    44,   624,    37,   629,    27,    45,    -1,
     628,    -1,    15,    -1,    73,    44,   626,    45,    -1,   628,
      -1,   680,    -1,   680,    -1,   680,    -1,   136,    -1,   634,
     633,   632,    -1,    -1,   208,   531,    -1,    -1,   633,   645,
      -1,   634,   255,   635,    -1,   635,    -1,   635,   256,   636,
      -1,   636,    -1,   636,    94,   144,   637,    -1,   637,    -1,
     257,   638,    -1,   638,    -1,   639,    -1,   639,   648,    -1,
     640,   643,    -1,    44,   631,    45,    -1,   641,    -1,   564,
     642,    -1,    52,   490,    53,   642,    -1,   544,    52,    53,
      -1,   544,    52,   631,    53,    -1,    -1,   220,    -1,   220,
     108,    -1,   221,    -1,   221,   225,    -1,   222,    -1,    -1,
     211,   644,   212,    -1,   223,   532,    -1,   130,   155,   532,
      -1,   130,   112,   532,    -1,   224,   532,   173,   532,    -1,
     131,    -1,   209,   532,   646,    -1,   210,   644,   646,    -1,
     213,   647,    -1,   214,   647,    -1,   125,   110,    -1,   125,
     111,    -1,   106,   107,    -1,   225,    -1,   226,    -1,   227,
      -1,   228,    -1,   229,    -1,    95,   649,    -1,   648,    95,
     649,    -1,   661,    -1,   662,    -1,   653,    -1,   652,    -1,
     650,    -1,   651,    -1,   656,    -1,   663,    -1,   163,    98,
      -1,   163,    97,    -1,   215,    -1,   216,    -1,    99,    98,
      -1,    99,    97,    -1,   102,    -1,    96,   102,    -1,   103,
     655,    -1,   103,   195,    -1,   103,    44,   655,   654,    45,
      -1,   103,    44,   195,   654,    45,    -1,    96,   103,    -1,
      -1,   654,    37,   655,    -1,   125,   630,    -1,   125,   630,
     217,   678,    -1,   125,   630,   644,   218,    -1,   125,   630,
     217,   678,   644,   218,    -1,   104,   225,   658,   657,    -1,
      96,   104,   225,    -1,   104,   225,   195,   657,    -1,    -1,
     657,   660,    -1,   125,   630,    -1,    44,   659,    45,    -1,
     678,    -1,   659,    37,   678,    -1,   176,   658,    -1,   178,
     658,    -1,   219,   678,    -1,   105,    -1,    96,   105,    -1,
     197,   731,   136,    -1,   101,   107,   534,    -1,   192,   236,
      80,    -1,   192,   236,    79,    -1,   192,   236,   113,    -1,
     667,   491,   164,   232,   242,   491,    -1,   667,   491,   164,
     240,   242,   491,    -1,   667,   491,   242,   491,    -1,   667,
     491,   235,   491,    -1,   667,   491,   234,   491,    -1,   233,
      70,    -1,   233,   238,    -1,   669,   491,    -1,   241,    70,
      -1,   241,   238,    -1,   230,   115,   171,    70,   491,   237,
     491,    -1,   230,    70,   491,   237,   491,    -1,   239,    70,
     491,   164,   491,    -1,   114,   673,   231,   491,   142,   491,
      -1,   673,    37,   674,    -1,   674,    -1,    13,   567,    14,
     491,    -1,    63,    -1,    64,    -1,    65,    -1,   136,    -1,
     731,    -1,   731,    -1,   192,   246,   250,   731,   488,    -1,
     192,   246,   250,   731,   683,   682,   488,    -1,   192,   246,
     250,   731,   684,   247,   437,   488,    -1,   192,   246,   250,
     731,   684,   247,   437,   683,   682,   488,    -1,   192,   246,
     684,   247,   437,   488,    -1,   192,   246,   684,   247,   437,
     683,   682,   488,    -1,    -1,   164,   608,    -1,    44,    45,
      -1,    44,   486,    45,    -1,    -1,   254,   685,    -1,   686,
      -1,   685,    37,   686,    -1,   133,    -1,   330,    -1,   331,
      -1,   251,   246,   731,    -1,   251,   246,   731,   237,    44,
     690,    45,    -1,   252,   253,   491,    -1,   252,   253,   491,
     237,    44,   690,    45,    -1,   252,   253,   491,   254,   689,
      -1,   252,   253,   491,   254,   689,   237,    44,   690,    45,
      -1,   731,    -1,   330,    -1,   332,    -1,   691,    -1,   690,
      37,   691,    -1,    13,   567,   607,    14,   491,    -1,   693,
      -1,   694,    -1,   732,    55,    63,    -1,   205,   481,   607,
     488,    -1,   563,    44,    45,    -1,   563,    44,   573,    45,
      -1,   697,    -1,   699,    -1,   698,   205,    44,    15,    45,
      -1,    -1,   698,   484,    -1,   698,   205,    44,    45,   164,
     608,    -1,   698,   205,    44,   700,    45,   164,   608,    -1,
     608,    -1,   700,    37,   608,    -1,    44,   610,    45,    -1,
     702,    -1,   705,    -1,   248,    44,   703,    45,    -1,   248,
      44,    45,    -1,   704,    -1,   703,    37,   704,    -1,   731,
     607,    -1,   249,    44,   611,    37,   608,    45,    -1,   249,
      44,    45,    -1,   706,    -1,   709,    -1,   248,    52,   707,
      53,    -1,   248,    52,    53,    -1,   708,    -1,   707,    37,
     708,    -1,   731,   607,    14,   491,    -1,   249,    52,   710,
      53,    -1,   249,    52,    53,    -1,   711,    -1,   710,    37,
     711,    -1,   491,    14,   491,    -1,   712,    -1,   563,    24,
     731,    -1,   192,   258,   731,   164,   610,    -1,   716,    -1,
     719,    -1,   731,    57,   719,   717,   718,    -1,   716,   718,
      -1,    -1,   146,   491,    -1,    59,   730,   717,    -1,   165,
      44,   719,    45,   166,   719,   167,   719,    -1,   720,    -1,
     720,   168,   721,    -1,   721,    -1,   721,   169,   722,    -1,
     722,    -1,   723,   119,   723,    -1,   723,   120,   723,    -1,
     723,   123,   723,    -1,   723,   124,   723,    -1,   723,   121,
     723,    -1,   723,   122,   723,    -1,   723,    -1,   723,    38,
     724,    -1,   723,    39,   724,    -1,   724,    -1,   724,    15,
     725,    -1,   724,   174,   725,    -1,   724,    81,   725,    -1,
     724,   175,   725,    -1,   725,    -1,    38,   725,    -1,    39,
     725,    -1,   726,    -1,   726,    25,   719,    26,    -1,   727,
      -1,   732,    44,   728,    45,    -1,    44,   728,    45,    -1,
      58,   731,    -1,    63,    -1,    64,    -1,    65,    -1,   136,
      -1,    -1,   729,    -1,   719,    -1,   729,    37,   719,    -1,
     491,    -1,    58,   731,    -1,   732,    -1,    66,    -1,    67,
      -1,    68,    -1,   203,    -1,   186,    -1,   165,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,   160,
      -1,    75,    -1,    69,    -1,   161,    -1,   133,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,    89,    -1,    90,    -1,    91,
      -1,    92,    -1,    93,    -1,    94,    -1,    97,    -1,    98,
      -1,    99,    -1,   100,    -1,   102,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,   109,
      -1,   110,    -1,   111,    -1,   112,    -1,   113,    -1,   114,
      -1,   115,    -1,   119,    -1,   120,    -1,   121,    -1,   122,
      -1,   123,    -1,   124,    -1,   125,    -1,   137,    -1,   142,
      -1,   143,    -1,   144,    -1,   145,    -1,   146,    -1,   148,
      -1,   149,    -1,   150,    -1,   151,    -1,   152,    -1,   153,
      -1,   154,    -1,   155,    -1,   156,    -1,   157,    -1,   158,
      -1,   159,    -1,   162,    -1,   164,    -1,   166,    -1,   167,
      -1,   168,    -1,   169,    -1,   170,    -1,   171,    -1,   172,
      -1,   173,    -1,   174,    -1,   175,    -1,   176,    -1,   177,
      -1,   178,    -1,   179,    -1,   180,    -1,   181,    -1,   182,
      -1,   183,    -1,   184,    -1,   185,    -1,   187,    -1,   188,
      -1,   189,    -1,   190,    -1,   191,    -1,   192,    -1,   193,
      -1,   194,    -1,   195,    -1,   196,    -1,   197,    -1,   199,
      -1,   200,    -1,   201,    -1,   204,    -1,   206,    -1,    95,
      -1,    96,    -1,   207,    -1,   208,    -1,   209,    -1,   210,
      -1,   211,    -1,   212,    -1,   213,    -1,   214,    -1,   215,
      -1,   216,    -1,   217,    -1,   218,    -1,   219,    -1,   220,
      -1,   221,    -1,   222,    -1,   223,    -1,   224,    -1,   225,
      -1,   226,    -1,   227,    -1,   228,    -1,   229,    -1,   230,
      -1,   231,    -1,   232,    -1,   233,    -1,   234,    -1,   235,
      -1,   236,    -1,   237,    -1,   238,    -1,   239,    -1,   240,
      -1,   241,    -1,   242,    -1,   243,    -1,   131,    -1,   132,
      -1,   244,    -1,   245,    -1,   246,    -1,   247,    -1,   250,
      -1,   251,    -1,   252,    -1,   253,    -1,   254,    -1,   255,
      -1,   256,    -1,   257,    -1,   248,    -1,   258,    -1,   249,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   814,   814,   816,   817,   819,   821,   822,   824,   825,
     827,   831,   836,   844,   872,   874,   875,   876,   880,   887,
     898,   909,   913,   917,   922,   931,   934,   940,   943,   951,
     959,   964,   967,   972,   975,   985,   993,   993,   996,  1005,
    1016,  1056,  1059,  1060,  1061,  1065,  1081,  1108,  1121,  1150,
    1153,  1175,  1177,  1181,  1188,  1190,  1191,  1192,  1193,  1194,
    1195,  1196,  1200,  1219,  1224,  1229,  1236,  1241,  1246,  1255,
    1258,  1264,  1269,  1276,  1276,  1276,  1279,  1292,  1297,  1304,
    1309,  1318,  1321,  1329,  1356,  1360,  1367,  1373,  1378,  1383,
    1392,  1416,  1420,  1427,  1432,  1437,  1442,  1453,  1471,  1475,
    1482,  1487,  1495,  1520,  1523,  1526,  1529,  1532,  1535,  1538,
    1541,  1544,  1547,  1550,  1553,  1556,  1559,  1562,  1565,  1568,
    1571,  1577,  1578,  1579,  1580,  1581,  1593,  1596,  1602,  1616,
    1620,  1627,  1634,  1637,  1642,  1647,  1655,  1663,  1674,  1685,
    1688,  1695,  1705,  1708,  1713,  1722,  1725,  1730,  1735,  1743,
    1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,  1752,  1753,
    1754,  1755,  1756,  1757,  1758,  1759,  1760,  1764,  1782,  1786,
    1791,  1800,  1806,  1806,  1809,  1829,  1833,  1838,  1846,  1851,
    1855,  1863,  1866,  1874,  1887,  1891,  1902,  1905,  1913,  1931,
    1935,  1942,  1947,  1952,  1960,  1966,  1974,  1982,  1989,  2003,
    2007,  2021,  2030,  2038,  2041,  2048,  2083,  2087,  2092,  2098,
    2108,  2111,  2119,  2122,  2129,  2147,  2151,  2158,  2163,  2171,
    2189,  2193,  2201,  2223,  2227,  2234,  2242,  2251,  2259,  2297,
    2301,  2308,  2315,  2324,  2333,  2360,  2364,  2371,  2383,  2410,
    2414,  2421,  2431,  2443,  2447,  2452,  2461,  2474,  2478,  2483,
    2492,  2506,  2510,  2523,  2528,  2540,  2544,  2552,  2565,  2573,
    2586,  2593,  2607,  2607,  2610,  2610,  2632,  2636,  2640,  2658,
    2676,  2686,  2700,  2708,  2714,  2720,  2726,  2738,  2741,  2755,
    2756,  2761,  2763,  2764,  2765,  2769,  2789,  2806,  2809,  2813,
    2825,  2827,  2831,  2835,  2839,  2843,  2847,  2853,  2859,  2863,
    2867,  2881,  2882,  2883,  2884,  2885,  2886,  2887,  2888,  2892,
    2892,  2895,  2899,  2907,  2912,  2921,  2926,  2935,  3016,  3024,
    3029,  3038,  3043,  3052,  3062,  3066,  3074,  3078,  3086,  3102,
    3111,  3123,  3132,  3135,  3140,  3149,  3153,  3161,  3171,  3183,
    3188,  3198,  3201,  3208,  3208,  3212,  3224,  3231,  3235,  3243,
    3252,  3256,  3264,  3267,  3275,  3276,  3284,  3291,  3298,  3303,
    3312,  3317,  3327,  3335,  3343,  3356,  3371,  3378,  3379,  3380,
    3381,  3382,  3383,  3384,  3385,  3386,  3387,  3388,  3389,  3390,
    3395,  3439,  3440,  3453,  3460,  3460,  3463,  3463,  3463,  3468,
    3475,  3479,  3483,  3495,  3498,  3509,  3512,  3522,  3529,  3533,
    3537,  3541,  3550,  3558,  3566,  3571,  3579,  3583,  3589,  3596,
    3611,  3626,  3629,  3633,  3641,  3649,  3653,  3662,  3670,  3681,
    3685,  3689,  3700,  3707,  3716,  3720,  3724,  3732,  3750,  3755,
    3765,  3768,  3778,  3786,  3792,  3801,  3806,  3815,  3823,  3832,
    3837,  3846,  3856,  3860,  3864,  3864,  3868,  3872,  3876,  3880,
    3884,  3888,  3892,  3896,  3900,  3904,  3908,  3912,  3916,  3921,
    3925,  3929,  3933,  3940,  3945,  3952,  3957,  3961,  3965,  3970,
    3974,  3978,  3982,  3986,  3991,  3995,  3999,  4004,  4008,  4012,
    4017,  4034,  4039,  4044,  4049,  4053,  4058,  4062,  4067,  4073,
    4079,  4084,  4085,  4086,  4094,  4098,  4102,  4110,  4117,  4126,
    4126,  4130,  4150,  4151,  4159,  4160,  4166,  4187,  4191,  4205,
    4211,  4224,  4228,  4232,  4232,  4236,  4237,  4246,  4247,  4253,
    4254,  4263,  4275,  4286,  4290,  4294,  4298,  4302,  4306,  4310,
    4314,  4322,  4330,  4347,  4355,  4364,  4368,  4372,  4376,  4380,
    4388,  4400,  4405,  4410,  4417,  4422,  4429,  4436,  4448,  4449,
    4453,  4459,  4460,  4461,  4462,  4463,  4464,  4465,  4466,  4467,
    4471,  4471,  4474,  4474,  4474,  4478,  4485,  4489,  4493,  4501,
    4509,  4519,  4529,  4533,  4556,  4561,  4571,  4572,  4581,  4585,
    4594,  4594,  4594,  4598,  4604,  4613,  4613,  4618,  4621,  4630,
    4641,  4641,  4646,  4650,  4657,  4661,  4672,  4675,  4680,  4689,
    4692,  4696,  4708,  4711,  4716,  4725,  4728,  4732,  4748,  4751,
    4756,  4761,  4766,  4777,  4787,  4790,  4795,  4805,  4806,  4820,
    4821,  4822,  4823,  4824,  4825,  4826,  4831,  4839,  4847,  4851,
    4859,  4863,  4872,  4879,  4883,  4893,  4901,  4909,  4917,  4924,
    4932,  4939,  4943,  4951,  4959,  4962,  4971,  4974,  4984,  4988,
    4998,  4999,  5001,  5003,  5009,  5013,  5014,  5015,  5016,  5021,
    5037,  5038,  5039,  5040,  5041,  5042,  5043,  5044,  5045,  5046,
    5051,  5059,  5063,  5070,  5081,  5089,  5097,  5106,  5110,  5114,
    5122,  5126,  5130,  5138,  5139,  5147,  5155,  5160,  5164,  5168,
    5172,  5181,  5182,  5190,  5197,  5200,  5203,  5206,  5210,  5222,
    5238,  5240,  5247,  5250,  5259,  5271,  5276,  5288,  5293,  5297,
    5302,  5307,  5312,  5313,  5322,  5327,  5331,  5337,  5341,  5349,
    5354,  5364,  5367,  5371,  5375,  5379,  5383,  5391,  5393,  5404,
    5410,  5416,  5422,  5437,  5441,  5445,  5449,  5453,  5457,  5461,
    5465,  5473,  5477,  5481,  5489,  5493,  5501,  5502,  5514,  5515,
    5516,  5517,  5518,  5519,  5520,  5521,  5529,  5533,  5537,  5541,
    5550,  5554,  5562,  5566,  5576,  5580,  5584,  5588,  5592,  5600,
    5602,  5609,  5613,  5617,  5621,  5631,  5635,  5639,  5647,  5649,
    5657,  5661,  5668,  5672,  5680,  5684,  5692,  5700,  5704,  5712,
    5719,  5727,  5732,  5737,  5749,  5753,  5757,  5761,  5765,  5771,
    5771,  5776,  5782,  5782,  5787,  5791,  5801,  5809,  5816,  5821,
    5829,  5838,  5847,  5856,  5866,  5873,  5882,  5894,  5899,  5904,
    5910,  5916,  5922,  5932,  5935,  5943,  5947,  5955,  5959,  5967,
    5972,  5981,  5985,  5989,  5997,  6001,  6009,  6013,  6017,  6021,
    6029,  6033,  6037,  6045,  6050,  6060,  6073,  6073,  6077,  6085,
    6096,  6101,  6125,  6125,  6129,  6135,  6137,  6141,  6145,  6152,
    6157,  6166,  6175,  6175,  6179,  6183,  6190,  6196,  6206,  6214,
    6219,  6225,  6225,  6229,  6237,  6244,  6245,  6253,  6262,  6266,
    6274,  6282,  6292,  6303,  6306,  6314,  6324,  6331,  6338,  6343,
    6352,  6355,  6362,  6369,  6373,  6377,  6387,  6391,  6401,  6405,
    6409,  6413,  6417,  6421,  6425,  6429,  6433,  6437,  6441,  6445,
    6449,  6453,  6457,  6461,  6465,  6469,  6473,  6477,  6481,  6485,
    6493,  6499,  6503,  6507,  6511,  6515,  6523,  6526,  6530,  6534,
    6542,  6546,  6557,  6557,  6557,  6557,  6557,  6557,  6557,  6557,
    6558,  6558,  6558,  6558,  6558,  6558,  6559,  6559,  6563,  6563,
    6563,  6563,  6563,  6563,  6563,  6563,  6563,  6563,  6564,  6564,
    6564,  6564,  6564,  6564,  6564,  6565,  6565,  6565,  6565,  6565,
    6565,  6565,  6565,  6566,  6566,  6566,  6566,  6566,  6566,  6566,
    6566,  6566,  6566,  6566,  6567,  6567,  6567,  6567,  6567,  6567,
    6567,  6567,  6567,  6567,  6567,  6567,  6568,  6568,  6568,  6568,
    6568,  6568,  6568,  6568,  6568,  6568,  6569,  6569,  6569,  6569,
    6569,  6569,  6569,  6569,  6569,  6569,  6569,  6569,  6570,  6570,
    6570,  6570,  6570,  6570,  6570,  6570,  6570,  6570,  6570,  6570,
    6571,  6571,  6571,  6571,  6571,  6571,  6571,  6571,  6571,  6572,
    6572,  6572,  6572,  6572,  6572,  6572,  6572,  6573,  6573,  6573,
    6573,  6573,  6573,  6573,  6573,  6573,  6573,  6573,  6574,  6574,
    6574,  6574,  6574,  6574,  6574,  6574,  6574,  6575,  6575,  6575,
    6575,  6575,  6575,  6575,  6575,  6575,  6575,  6576,  6576,  6576,
    6576,  6576,  6576,  6576,  6576,  6576,  6576,  6576,  6577,  6577,
    6577,  6577,  6577,  6577,  6577,  6577,  6577,  6577,  6577,  6578,
    6578,  6578,  6578,  6578,  6578
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"<end of file>\"", "error", "$undefined", "\"<Language: XPath2>\"",
  "\"<Language: XQuery>\"", "\"<Language: XSLT 2.0>\"",
  "\"<Language: Function Declaration>\"", "\"<Language: Delayed Module>\"",
  "\"<Language: Function Signature>\"", "\"<Language: Rewrite Rule>\"",
  "\"<Language: Rewrite Pattern>\"", "\"<Language: SequenceType>\"",
  "\"<Language: Carrot>\"", "\"$\"", "\":=\"", "\"*\"", "\"|\"", "\"!=\"",
  "\"<=\"", "\"> (comparison operator)\"", "\">=\"", "\"<<\"", "\">>\"",
  "\"::\"", "\"@\"", "\"[\"", "\"]\"", "\"?\"", "\"<\"",
  "\"> (start tag close)\"", "\"> (end tag close)\"", "\"<?\"", "\"<!--\"",
  "\"-->\"", "\"//\"", "\"</\"", "\"(#\"", "\",\"", "\"+\"", "\"-\"",
  "\"/\"", "\"= (comparison operator)\"", "\".\"", "\"..\"", "\"(\"",
  "\")\"", "\"/>\"", "\"=\"", "\"\\\" (open)\"", "\"\\\" (close)\"",
  "\"' (open)\"", "\"' (close)\"", "\"{\"", "\"}\"", "\";\"", "\"#\"",
  "\"%\"", "\":\"", "\"~\"", "\"->\"", "\"||\"", "\"!\"", "\"^\"",
  "\"<integer literal>\"", "\"<decimal literal>\"", "\"<double literal>\"",
  "\"attribute\"", "\"comment\"", "\"document-node\"",
  "\"namespace-node\"", "\"node\"", "\"processing-instruction\"",
  "\"schema-attribute\"", "\"schema-element\"", "\"text\"",
  "\"empty-sequence\"", "\"boundary-space\"", "\"ft-option\"",
  "\"base-uri\"", "\"lax\"", "\"strict\"", "\"idiv\"", "\"child\"",
  "\"descendant\"", "\"self\"", "\"descendant-or-self\"",
  "\"following-sibling\"", "\"following\"", "\"parent\"", "\"ancestor\"",
  "\"preceding-sibling\"", "\"preceding\"", "\"ancestor-of-self\"",
  "\"document\"", "\"not\"", "\"using\"", "\"no\"", "\"sensitive\"",
  "\"insensitive\"", "\"diacritics\"", "\"without\"",
  "\"without (followed by content)\"", "\"stemming\"", "\"thesaurus\"",
  "\"stop\"", "\"wildcards\"", "\"entire\"", "\"content\"", "\"word\"",
  "\"type\"", "\"start\"", "\"end\"", "\"most\"", "\"skip\"", "\"copy\"",
  "\"value\"", "\"<whitespace>\"", "\"<processing instruction content>\"",
  "\"<xml comment content>\"", "\"eq\"", "\"ne\"", "\"lt\"", "\"le\"",
  "\"gt\"", "\"ge\"", "\"at\"", "\"<quot attribute content>\"",
  "\"<apos attribute content>\"", "\"<whitespace element content>\"",
  "\"<element content>\"", "\"at (followed by least or most)\"",
  "\"ordered\"", "\"unordered\"", "\"<qualified name>\"",
  "\"<xmlns qualified name>\"",
  "\"<computed constructor qualified name>\"", "\"<string literal>\"",
  "\"variable\"", "\"<NCName>:*\"", "\"*:<NCName>\"",
  "\"<processing instruction target>\"", "\"<pragma content>\"",
  "\"return\"", "\"for\"", "\"in\"", "\"let\"", "\"where\"", "\"count\"",
  "\"by\"", "\"order\"", "\"stable\"", "\"ascending\"", "\"descending\"",
  "\"empty\"", "\"greatest\"", "\"least\"", "\"collation\"", "\"some\"",
  "\"every\"", "\"satisfies\"", "\"typeswitch\"", "\"switch\"", "\"case\"",
  "\"case (followed by (in)sensitive)\"", "\"as\"", "\"if\"", "\"then\"",
  "\"else\"", "\"or\"", "\"and\"", "\"instance\"", "\"of\"",
  "\"castable\"", "\"to\"", "\"div\"", "\"mod\"", "\"union\"",
  "\"intersect\"", "\"except\"", "\"validate\"", "\"cast\"", "\"treat\"",
  "\"is\"", "\"preserve\"", "\"strip\"", "\"namespace\"", "\"item\"",
  "\"external\"", "\"encoding\"", "\"no-preserve\"", "\"inherit\"",
  "\"no-inherit\"", "\"declare\"", "\"construction\"", "\"ordering\"",
  "\"default\"", "\"copy-namespaces\"", "\"option\"", "\"xquery\"",
  "\"version\"", "\"import\"", "\"schema\"", "\"module\"", "\"element\"",
  "\"function\"", "\"function (XQuery 3.0)\"", "\"score\"", "\"contains\"",
  "\"weight\"", "\"window\"", "\"distance\"", "\"occurs\"", "\"times\"",
  "\"same\"", "\"different\"", "\"lowercase\"", "\"uppercase\"",
  "\"relationship\"", "\"levels\"", "\"language\"", "\"any\"", "\"all\"",
  "\"phrase\"", "\"exactly\"", "\"from\"", "\"words\"", "\"sentences\"",
  "\"paragraphs\"", "\"sentence\"", "\"paragraph\"", "\"replace\"",
  "\"modify\"", "\"first\"", "\"insert\"", "\"before\"", "\"after\"",
  "\"revalidation\"", "\"with\"", "\"nodes\"", "\"rename\"", "\"last\"",
  "\"delete\"", "\"into\"", "\"updating\"", "\"id\"", "\"key\"",
  "\"template\"", "\"matches\"", "\"tuple\"", "\"map\"", "\"name\"",
  "\"call\"", "\"apply\"", "\"templates\"", "\"mode\"", "\"ftor\"",
  "\"ftand\"", "\"ftnot\"", "\"type-alias\"", "\"<XSLT end element>\"",
  "\"<xsl:stylesheet...\"", "\"<xsl:template...\"", "\"<xsl:value-of...\"",
  "\"<xsl:text...\"", "\"<xsl:apply-templates...\"",
  "\"<xsl:call-template...\"", "\"<xsl:with-param...\"",
  "\"<xsl:sequence...\"", "\"<xsl:param...\"", "\"<xsl:function...\"",
  "\"<xsl:choose...\"", "\"<xsl:when...\"", "\"<xsl:otherwise...\"",
  "\"<xsl:if...\"", "\"<xsl:variable...\"", "\"<xsl:comment...\"",
  "\"<xsl:processing-instruction...\"", "\"<xsl:document...\"",
  "\"<xsl:attribute...\"", "\"<xsl:namespace...\"", "\"<xsl:element...\"",
  "\"<xsl:analyze-string...\"", "\"<xsl:matching-substring...\"",
  "\"<xsl:non-matching-substring...\"", "\"<xsl:copy-of...\"",
  "\"<xsl:copy...\"", "\"<xsl:for-each...\"", "\"<xsl:output...\"",
  "\"<xsl:import-schema...\"", "\"<xsl:type-alias...\"",
  "\"version='...'\"", "\"mode='...'\"", "\"name='...'\"",
  "\"doctype-public='...'\"", "\"doctype-system='...'\"",
  "\"encoding='...'\"", "\"media-type='...'\"",
  "\"normalization-form='...'\"", "\"standalone='...'\"",
  "\"exclude-result-prefixes='...'\"", "\"namespace='...' (string)\"",
  "\"schema-location='...'\"", "\"tunnel='...'\"", "\"required='...'\"",
  "\"override='...'\"", "\"copy-namespaces='...'\"",
  "\"inherit-namespaces='...'\"", "\"byte-order-mark='...'\"",
  "\"escape-uri-attributes='...'\"", "\"include-content-type='...'\"",
  "\"indent='...'\"", "\"omit-xml-declaration='...'\"",
  "\"undeclare-prefixes='...'\"", "\"match='...'\"", "\"as='...'\"",
  "\"select='...'\"", "\"priority='...'\"", "\"test='...'\"",
  "\"separator='...'\"", "\"namespace='...' (attribute value template)\"",
  "\"regex='...'\"", "\"flags='...'\"", "\"method='...'\"",
  "\"cdata-section-elements='...'\"", "\"use-character-maps='...'\"",
  "\"<XSLT element name>\"", "\"<XSLT XMLNS attr>\"",
  "\"<XSLT attr name>\"", "\"<XSLT text node>\"",
  "\"<XSLT whitespace text node>\"", "\"#default\"", "\"#all\"",
  "\"#current\"", "\"xml\"", "\"html\"", "\"xhtml\"", "$accept",
  "SelectLanguage", "XQueryNamespaces", "Carrot", "CarrotProlog",
  "CarrotVarDecl", "CarrotFuncDecl", "CarrotTemplateDecl", "CarrotModes",
  "CarrotModeList", "CarrotTemplateParams", "PrimaryExpr", "CarrotApply",
  "CarrotApplyOptionalExpr", "CarrotApplyMode", "CarrotApplyArgs",
  "Start_FunctionDecl", "FunctionDecl_MaybeSemicolon",
  "Start_FunctionSignature", "Start_DelayedModule", "DM_ModuleDecl",
  "DM_Prolog", "DM_FunctionDecl", "DM_OptionDecl", "DM_NamespaceDecl",
  "Start_XSLT", "Stylesheet_XSLT", "StylesheetAttrs_XSLT",
  "StylesheetContent_XSLT", "Template_XSLT", "TemplateAttrs_XSLT",
  "TemplateModes_XSLT", "Number_XSLT", "Function_XSLT",
  "FunctionAttrs_XSLT", "ParamList_XSLT", "Param_XSLT", "ParamAttrs_XSLT",
  "GlobalParam_XSLT", "GlobalParamAttrs_XSLT", "GlobalVariable_XSLT",
  "GlobalVariableAttrs_XSLT", "Output_XSLT", "OutputAttrs_XSLT",
  "OutputMethod_XSLT", "QNames_XSLT", "TypeAlias_XSLT",
  "TypeAliasAttrs_XSLT", "ImportSchema_XSLT", "ImportSchemaAttrs_XSLT",
  "LiteralResultElement_XSLT", "LiteralResultElementAttrs_XSLT",
  "AttrValueTemplate_XSLT", "SequenceConstructor_XSLT", "Instruction_XSLT",
  "ValueOf_XSLT", "ValueOfAttrs_XSLT", "Text_XSLT", "TextNode_XSLT",
  "ApplyTemplates_XSLT", "ApplyTemplatesAttrs_XSLT",
  "ApplyTemplatesMode_XSLT", "ApplyTemplatesContent_XSLT",
  "CallTemplate_XSLT", "CallTemplateAttrs_XSLT",
  "CallTemplateContent_XSLT", "WithParam_XSLT", "WithParamAttrs_XSLT",
  "Sequence_XSLT", "SequenceAttrs_XSLT", "If_XSLT", "IfAttrs_XSLT",
  "Choose_XSLT", "WhenList_XSLT", "When_XSLT", "WhenAttrs_XSLT",
  "Otherwise_XSLT", "AnalyzeString_XSLT", "AnalyzeStringAttrs_XSLT",
  "MatchingSubstring_XSLT", "NonMatchingSubstring_XSLT", "Variable_XSLT",
  "VariableAttrs_XSLT", "Comment_XSLT", "CommentAttrs_XSLT", "PI_XSLT",
  "PIAttrs_XSLT", "Document_XSLT", "DocumentAttrs_XSLT", "Attribute_XSLT",
  "AttributeAttrs_XSLT", "Namespace_XSLT", "NamespaceAttrs_XSLT",
  "Element_XSLT", "ElementAttrs_XSLT", "CopyOf_XSLT", "CopyOfAttrs_XSLT",
  "Copy_XSLT", "CopyAttrs_XSLT", "ForEach_XSLT", "ForEachAttrs_XSLT",
  "Pattern_XSLT", "PathPattern_XSLT", "PathPatternStart_XSLT",
  "IdKeyPattern_XSLT", "IdValue_XSLT", "KeyValue_XSLT",
  "RelativePathPattern_XSLT", "PatternStep_XSLT", "PatternAxis_XSLT",
  "PatternStepPredicateList_XSLT", "Module", "VersionDecl", "Version",
  "Encoding", "MainModule", "LibraryModule", "ModuleDecl", "Prolog",
  "Setter", "Import", "Separator", "NamespaceDecl", "BoundarySpaceDecl",
  "DefaultNamespaceDecl", "OptionDecl", "FTOptionDecl", "OrderingModeDecl",
  "EmptyOrderDecl", "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "ConstructionDecl",
  "AnnotatedDeclAnnotations", "AnnotatedDeclAnnotation",
  "CompatibilityAnnotation", "VarDecl", "VarDeclValue", "FunctionDecl",
  "FunctionParamList", "FunctionDeclReturnType", "FunctionBody",
  "Annotation", "AnnotationArgs", "ParamList", "Param", "EnclosedExpr",
  "QueryBody", "Expr", "ExprSingle", "FLWORExpr", "FLWORTuples",
  "InitialClause", "IntermediateClause", "ForClause", "ForBindingList",
  "ForBinding", "PositionalVar", "FTScoreVar", "LetClause",
  "LetBindingList", "LetBinding", "WhereClause", "CountClause",
  "OrderByClause", "OrderSpecList", "OrderSpec", "OrderExpr",
  "OrderDirection", "EmptyHandling", "QuantifiedExpr",
  "QuantifyBindingList", "QuantifyBinding", "TypeswitchExpr",
  "CaseClauseList", "DefaultCase", "CaseClause", "CaseSequenceTypeUnion",
  "CaseClauseVariable", "SwitchExpr", "SwitchCaseClauseList",
  "SwitchCaseClause", "IfExpr", "OrExpr", "AndExpr", "ComparisonExpr",
  "$@1", "FTContainsExpr", "StringConcatExpr", "RangeExpr", "AdditiveExpr",
  "MultiplicativeExpr", "UnionExpr", "IntersectExceptExpr",
  "InstanceofExpr", "TreatExpr", "CastableExpr", "CastExpr", "UnaryExpr",
  "ValueExpr", "ValidateExpr", "ExtensionExpr", "PragmaList", "Pragma",
  "PragmaContents", "PathExpr", "LeadingSlash", "RelativePathExpr",
  "StepExpr", "AxisStep", "ForwardStepPredicateList",
  "ReverseStepPredicateList", "ForwardStep", "ForwardAxis",
  "AbbrevForwardStep", "ReverseStep", "ReverseAxis", "AbbrevReverseStep",
  "NodeTest", "NameTest", "Wildcard", "PostfixExpr", "Literal",
  "NumericLiteral", "VarRef", "VarName", "ParenthesizedExpr",
  "ContextItemExpr", "OrderedExpr", "UnorderedExpr", "FunctionCall",
  "FunctionCallArgumentList", "Argument", "Constructor",
  "DirectConstructor", "DirElemConstructor", "DirElemConstructorQName",
  "DirAttributeList", "OptionalWhitespace", "DirAttributeValue",
  "LiteralDirAttributeValue", "QuotAttrValueContent",
  "LiteralQuotAttrValueContent", "AposAttrValueContent",
  "LiteralAposAttrValueContent", "DirElementContent",
  "DirCommentConstructor", "DirCommentContents", "DirPIConstructor",
  "DirPIContents", "ComputedConstructor", "CompDocConstructor",
  "CompElemConstructor", "CompElementName", "ContentExpr",
  "CompAttrConstructor", "CompAttrName", "CompNamespaceConstructor",
  "CompTextConstructor", "CompCommentConstructor", "CompPIConstructor",
  "CompPINCName", "CompPIConstructorContent", "SingleType",
  "SingleTypeOccurrence", "TypeDeclaration", "SequenceType",
  "OccurrenceIndicator", "ItemType", "AtomicType", "KindTest",
  "AnyKindTest", "DocumentTest", "TextTest", "CommentTest",
  "NamespaceNodeTest", "PITest", "AttributeTest", "AttribNameOrWildcard",
  "SchemaAttributeTest", "AttributeDeclaration", "ElementTest",
  "ElementNameOrWildcard", "SchemaElementTest", "ElementDeclaration",
  "AttributeName", "ElementName", "TypeName", "URILiteral", "FTSelection",
  "FTSelectionWeight", "FTPosFilters", "FTOr", "FTAnd", "FTMildnot",
  "FTUnaryNot", "FTPrimaryWithOptions", "FTPrimary", "FTWords",
  "FTExtensionSelection", "FTAnyallOption", "FTTimes", "FTRange",
  "FTPosFilter", "FTUnit", "FTBigUnit", "FTMatchOptions", "FTMatchOption",
  "FTCaseOption", "FTDiacriticsOption", "FTStemOption",
  "FTThesaurusOption", "FTThesaurusIDList", "FTThesaurusID",
  "FTStopWordOption", "FTStopWordsInclExclList", "FTStopWords",
  "FTStopWordsStringList", "FTStopWordsInclExcl", "FTLanguageOption",
  "FTWildCardOption", "FTExtensionOption", "FTIgnoreOption",
  "RevalidationDecl", "InsertExpr", "InsertExprBegin", "DeleteExpr",
  "DeleteExprBegin", "ReplaceExpr", "RenameExpr", "TransformExpr",
  "TransformBindingList", "TransformBinding", "IntegerLiteral",
  "DecimalLiteral", "DoubleLiteral", "StringLiteral", "NCName", "QName",
  "TemplateDecl", "TemplateSequenceType", "TemplateParamList",
  "TemplateDeclModesSection", "TemplateDeclModes", "TemplateDeclMode",
  "CallTemplateExpr", "ApplyTemplatesExpr", "ApplyTemplatesMode",
  "TemplateArgumentList", "TemplateArgument", "FunctionItemExpr",
  "LiteralFunctionItem", "InlineFunction", "DynamicFunctionInvocation",
  "FunctionTest", "AnyFunctionTest", "Annotations", "TypedFunctionTest",
  "FunctionTypeArguments", "ParenthesizedItemType", "TupleTest",
  "TupleTestEntryList", "TupleTestEntry", "MapTest", "TupleConstructor",
  "TupleEntryList", "TupleEntry", "MapConstructor", "MapEntryList",
  "MapEntry", "TupleMemberExpr", "TypeAlias", "RewriteRule",
  "RewritePattern", "RW_Rule", "RW_WhereCondition", "RW_Case",
  "RW_Pattern", "RW_OrExpr", "RW_AndExpr", "RW_ComparisonExpr",
  "RW_AdditiveExpr", "RW_MultiplicativeExpr", "RW_UnaryExpr",
  "RW_PostfixExpr", "RW_PrimaryExpr", "RW_OptionalCommaList",
  "RW_CommaList", "RW_Result", "QNameValue", "FunctionName", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   336,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   338,   339,   340,   340,   340,   340,   341,   342,
     343,   344,   344,   345,   345,   346,   346,   347,   348,   349,
     349,   350,   350,   351,   351,   352,   353,   353,   354,   355,
     356,   357,   357,   357,   357,   358,   359,   360,   361,   362,
     362,   363,   363,   363,   364,   364,   364,   364,   364,   364,
     364,   364,   365,   366,   366,   366,   366,   366,   366,   367,
     367,   367,   367,   368,   368,   368,   369,   370,   370,   370,
     370,   371,   371,   372,   373,   373,   373,   373,   373,   373,
     374,   375,   375,   375,   375,   375,   375,   376,   377,   377,
     377,   377,   378,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   380,   380,   380,   380,   380,   381,   381,   382,   383,
     383,   383,   384,   385,   385,   385,   385,   385,   386,   387,
     387,   387,   388,   388,   388,   389,   389,   389,   389,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   391,   392,   392,
     392,   393,   394,   394,   395,   396,   396,   396,   397,   397,
     397,   398,   398,   399,   400,   400,   401,   401,   402,   403,
     403,   403,   403,   403,   404,   405,   406,   407,   408,   409,
     409,   410,   411,   412,   412,   413,   414,   414,   414,   414,
     415,   415,   416,   416,   417,   418,   418,   418,   418,   419,
     420,   420,   421,   422,   422,   422,   423,   424,   425,   426,
     426,   426,   426,   426,   427,   428,   428,   428,   429,   430,
     430,   430,   431,   432,   432,   432,   433,   434,   434,   434,
     435,   436,   436,   437,   437,   438,   438,   438,   439,   439,
     440,   440,   441,   441,   442,   442,   443,   443,   443,   443,
     443,   443,   444,   445,   445,   445,   445,   446,   446,   447,
     447,   448,   448,   448,   448,   449,   450,   451,   452,   453,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   455,   455,   455,   455,   455,   455,   455,   455,   456,
     456,   457,   458,   459,   459,   460,   460,   461,   462,   463,
     463,   464,   464,   465,   466,   466,   467,   467,   468,   469,
     470,   470,   471,   471,   471,   472,   472,   473,   473,   474,
     474,   475,   475,   476,   476,   477,   478,   479,   479,   480,
     481,   481,   482,   482,   483,   483,   484,   484,   485,   485,
     486,   486,   487,   488,   489,   490,   490,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     492,   493,   493,   493,   494,   494,   495,   495,   495,   496,
     497,   497,   498,   499,   499,   500,   500,   501,   502,   502,
     503,   503,   504,   505,   506,   506,   507,   507,   508,   508,
     509,   510,   510,   510,   511,   511,   511,   512,   512,   513,
     513,   514,   515,   516,   516,   517,   517,   518,   519,   519,
     520,   520,   521,   522,   522,   523,   523,   524,   525,   525,
     526,   526,   527,   527,   528,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   529,
     529,   529,   530,   530,   531,   531,   532,   532,   532,   533,
     533,   533,   533,   533,   534,   534,   534,   535,   535,   535,
     536,   536,   537,   537,   538,   538,   539,   539,   540,   540,
     540,   541,   541,   541,   542,   542,   542,   543,   543,   544,
     544,   545,   546,   546,   547,   547,   547,   547,   548,   549,
     549,   549,   549,   550,   550,   551,   551,   552,   552,   553,
     553,   554,   554,   555,   555,   555,   555,   555,   555,   555,
     555,   556,   556,   557,   557,   558,   558,   558,   558,   558,
     559,   560,   560,   561,   561,   562,   562,   562,   563,   563,
     563,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     564,   564,   565,   565,   565,   566,   567,   568,   568,   569,
     570,   571,   572,   572,   573,   573,   574,   574,   575,   575,
     576,   576,   576,   577,   577,   578,   578,   579,   579,   579,
     580,   580,   581,   581,   582,   582,   583,   583,   583,   584,
     584,   584,   585,   585,   585,   586,   586,   586,   587,   587,
     587,   587,   587,   588,   589,   589,   590,   591,   591,   592,
     592,   592,   592,   592,   592,   592,   593,   594,   595,   595,
     596,   596,   597,   598,   598,   599,   600,   601,   602,   603,
     603,   604,   604,   605,   606,   606,   607,   607,   608,   608,
     609,   609,   609,   609,   610,   610,   610,   610,   610,   611,
     612,   612,   612,   612,   612,   612,   612,   612,   612,   612,
     613,   614,   614,   614,   615,   616,   617,   618,   618,   618,
     619,   619,   619,   620,   620,   621,   622,   623,   623,   623,
     623,   624,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   632,   633,   633,   634,   634,   635,   635,   636,   636,
     637,   637,   638,   638,   639,   639,   639,   640,   640,   641,
     641,   642,   642,   642,   642,   642,   642,   643,   643,   644,
     644,   644,   644,   645,   645,   645,   645,   645,   645,   645,
     645,   646,   646,   646,   647,   647,   648,   648,   649,   649,
     649,   649,   649,   649,   649,   649,   650,   650,   650,   650,
     651,   651,   652,   652,   653,   653,   653,   653,   653,   654,
     654,   655,   655,   655,   655,   656,   656,   656,   657,   657,
     658,   658,   659,   659,   660,   660,   661,   662,   662,   663,
     664,   665,   665,   665,   666,   666,   666,   666,   666,   667,
     667,   668,   669,   669,   670,   670,   671,   672,   673,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   681,   681,
     681,   681,   681,   682,   682,   683,   683,   684,   684,   685,
     685,   686,   686,   686,   687,   687,   688,   688,   688,   688,
     689,   689,   689,   690,   690,   691,   692,   692,   693,   694,
     695,   695,   696,   696,   697,   698,   698,   699,   699,   700,
     700,   701,   610,   610,   702,   702,   703,   703,   704,   705,
     705,   347,   347,   706,   706,   707,   707,   708,   709,   709,
     710,   710,   711,   563,   712,   713,   714,   715,   716,   716,
     717,   717,   718,   719,   719,   720,   720,   721,   721,   722,
     722,   722,   722,   722,   722,   722,   723,   723,   723,   724,
     724,   724,   724,   724,   725,   725,   725,   726,   726,   727,
     727,   727,   727,   727,   727,   727,   728,   728,   729,   729,
     730,   347,   731,   731,   731,   731,   731,   731,   731,   731,
     731,   731,   731,   731,   731,   731,   731,   731,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     3,     2,     3,     2,     2,     2,
       2,     3,     0,     1,     0,     3,     3,     3,     5,     5,
       9,     0,     1,     1,     3,     0,     2,     1,     6,     0,
       1,     0,     1,     0,     2,     8,     0,     1,     3,     3,
       6,     0,     2,     2,     2,     8,     5,     6,     1,     4,
       1,     0,     2,     2,     0,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     3,     2,     3,     3,     3,     0,
       2,     2,     2,     1,     1,     1,     4,     1,     2,     3,
       2,     0,     2,     3,     1,     2,     3,     3,     2,     2,
       3,     1,     2,     3,     3,     2,     2,     3,     1,     2,
       3,     3,     2,     1,     2,     3,     2,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       2,     3,     2,     1,     2,     2,     3,     3,     4,     0,
       3,     2,     0,     2,     2,     0,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     3,     1,     1,     3,     1,     3,     3,     1,     1,
       1,     0,     2,     3,     1,     2,     0,     2,     3,     1,
       2,     3,     3,     2,     2,     3,     3,     3,     4,     1,
       2,     3,     3,     0,     3,     4,     1,     3,     3,     3,
       0,     3,     0,     3,     4,     1,     2,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     2,     1,     3,     2,     3,     1,     2,     2,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     6,     1,     1,     1,     1,     1,     2,     3,     3,
       3,     3,     2,     1,     3,     3,     2,     0,     4,     2,
       2,     0,     3,     4,     3,     2,     2,     2,     2,     6,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     3,     3,     5,     5,     4,     3,     3,
       3,     5,     5,     5,     1,     1,     1,     1,     4,     3,
       5,     4,     0,     2,     3,     3,     3,     7,     4,     3,
       3,     0,     2,     1,     1,     1,     7,     2,     1,     7,
       2,     3,     0,     2,     1,     1,     2,     5,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     2,     1,     1,     1,     1,     1,     2,
       3,     1,     7,     0,     3,     0,     3,     2,     3,     1,
       5,     5,     2,     3,     3,     4,     3,     1,     3,     5,
       1,     0,     1,     1,     0,     2,     2,     4,     4,     3,
       1,     5,     6,     2,     1,     5,     3,     3,     3,     3,
       0,     3,     4,     4,     7,     2,     3,     8,     3,     1,
       3,     1,     3,     3,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     4,
       5,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       4,     1,     4,     1,     4,     1,     4,     1,     2,     2,
       1,     1,     1,     1,     4,     5,     5,     3,     4,     1,
       2,     4,     1,     2,     1,     2,     2,     1,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     4,     1,
       4,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     1,
       4,     4,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     5,    10,     1,     1,     0,     7,     7,
       0,     1,     3,     3,     3,     3,     0,     2,     2,     0,
       2,     2,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     2,     2,     3,     0,     1,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     3,
       2,     3,     3,     1,     3,     3,     4,     4,     3,     1,
       3,     2,     3,     2,     0,     1,     0,     2,     2,     3,
       0,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     4,     4,     3,     3,     3,     3,     4,     4,
       3,     4,     6,     1,     1,     4,     1,     3,     4,     6,
       7,     1,     1,     4,     1,     1,     1,     1,     1,     3,
       0,     2,     0,     2,     3,     1,     3,     1,     4,     1,
       2,     1,     1,     2,     2,     3,     1,     2,     4,     3,
       4,     0,     1,     2,     1,     2,     1,     0,     3,     2,
       3,     3,     4,     1,     3,     3,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     1,     2,     2,     2,     5,     5,     2,     0,
       3,     2,     4,     4,     6,     4,     3,     4,     0,     2,
       2,     3,     1,     3,     2,     2,     2,     1,     2,     3,
       3,     3,     3,     3,     6,     6,     4,     4,     4,     2,
       2,     2,     2,     2,     7,     5,     5,     6,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     5,     7,     8,
      10,     6,     8,     0,     2,     2,     3,     0,     2,     1,
       3,     1,     1,     1,     3,     7,     3,     7,     5,     9,
       1,     1,     1,     1,     3,     5,     1,     1,     3,     4,
       3,     4,     1,     1,     5,     0,     2,     6,     7,     1,
       3,     3,     1,     1,     4,     3,     1,     3,     2,     6,
       3,     1,     1,     4,     3,     1,     3,     4,     4,     3,
       1,     3,     3,     1,     3,     5,     1,     1,     5,     2,
       0,     2,     3,     8,     1,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     2,     2,     1,     4,     1,     4,
       3,     2,     1,     1,     1,     1,     0,     1,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    12,     0,    12,    12,   341,     0,     0,   855,
      12,     0,     0,   545,     0,     0,     0,   614,     0,   590,
       0,     0,   508,   569,   540,     0,     0,    31,   811,   812,
     813,   933,   934,   935,   946,   939,   940,   941,   942,   943,
     945,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,   967,
    1049,  1050,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,   983,   984,   985,
     986,   987,   988,   989,   990,   991,   992,  1088,  1089,   948,
     814,   993,   546,   547,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,   944,   947,  1011,  1012,   938,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,   937,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,
    1046,   936,  1047,     0,  1048,  1051,  1052,  1053,  1054,  1055,
    1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,
    1066,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,
    1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,
    1086,  1087,  1090,  1091,  1092,  1093,  1102,  1104,  1094,  1095,
    1096,  1097,  1098,  1099,  1100,  1101,  1103,   548,    27,     2,
     364,   366,   367,     0,   381,   384,   385,   368,   369,   370,
       0,   371,   377,   439,   441,   458,   461,   463,   465,   468,
     473,   476,   479,   481,   483,   485,   487,   490,   491,   493,
       0,   499,   492,   504,   507,   512,   513,   515,   516,   517,
       0,   522,   519,     0,   534,   532,   542,   544,   514,   551,
     560,   552,   553,   554,   557,   558,   555,   556,   578,   580,
     581,   582,   579,   619,   620,   621,   622,   623,   624,   625,
     541,   669,   660,   667,   666,   668,   665,   662,   664,   661,
     663,   372,     0,   373,     0,   375,   374,   376,   562,   563,
     564,   561,   543,   378,   379,   559,   846,   847,   550,   871,
     872,   883,   816,   932,   281,    51,   139,     5,    48,    50,
       0,   281,     7,     0,   933,   934,   935,   946,   939,   940,
     941,   942,   943,   955,   956,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   984,  1088,  1089,   995,   997,
    1008,  1009,   944,   947,   938,  1026,  1032,   936,  1074,  1077,
    1083,  1085,  1102,  1104,  1095,  1096,     8,   886,     0,   932,
       0,     0,   926,     0,   922,   923,   924,   925,     0,     9,
     887,   894,   896,   898,   905,   908,   913,   916,   918,     0,
     855,   933,   934,   940,   943,   945,   937,   936,  1102,  1104,
      10,   650,   655,   656,   659,   657,   852,     0,   853,   658,
     862,   863,    14,     1,   565,   566,   531,   585,   586,   587,
       0,   615,     0,   506,   591,     0,   489,   488,   568,     0,
     931,   841,   842,     0,    32,   840,   525,     0,     0,   633,
       0,     0,     0,     0,     0,     0,     0,     0,   639,     0,
       0,     0,     0,     0,   523,   524,   526,   527,   528,   529,
     535,   536,   537,   538,   539,     0,     0,     0,   809,     0,
       0,     0,   389,   391,     0,     0,   397,   399,     0,     0,
     420,     0,     0,     0,     0,     0,     0,     0,   530,     0,
       0,     0,   628,     0,     0,   646,     0,     0,   799,   800,
       0,   802,   803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   386,   383,   387,   388,   382,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   500,   505,
       0,     0,     0,     0,     0,   521,   533,     0,     0,     0,
       0,   801,     0,     0,     0,     3,   290,    54,   145,   341,
       4,     6,     0,     0,   345,   342,   343,   352,   344,     0,
     889,     0,   914,   915,   928,     0,   927,   921,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   926,     0,     0,     0,     0,     0,
     651,   653,   652,   648,     0,   856,    11,    13,   590,     0,
     617,   616,   613,     0,   567,    29,   684,   680,     0,   683,
     695,     0,     0,   632,   675,     0,   671,     0,     0,     0,
       0,   676,   670,   677,     0,     0,   815,     0,     0,   638,
       0,   686,     0,   694,   696,   674,     0,     0,     0,     0,
       0,     0,     0,   646,     0,   646,     0,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   635,   692,
     687,     0,   691,     0,   627,     0,   350,     0,   361,   855,
       0,     0,     0,     0,   874,     0,   875,   646,   879,     0,
       0,   880,   834,   836,   365,   380,   402,     0,     0,     0,
     435,     0,     0,     0,   438,   440,   443,   446,   447,   448,
     456,   457,     0,   442,   449,   450,   451,   452,   453,   454,
     455,   462,     0,   466,   467,   464,   469,   471,   470,   472,
     474,   475,   477,   478,   855,   855,     0,     0,   497,     0,
     510,   509,   511,     0,     0,   884,     0,   577,   850,   576,
       0,   575,     0,     0,     0,     0,   572,     0,   848,     0,
       0,     0,     0,     0,   279,   280,   290,     0,    52,    53,
       0,   141,   142,     0,     0,     0,    41,   356,   855,    38,
     930,   890,   890,   920,     0,     0,   895,   897,   906,   907,
     899,   900,   903,   904,   901,   902,   909,   911,   910,   912,
       0,     0,   861,   649,   654,   865,     0,   866,   646,   870,
       0,   855,     0,    21,     0,     0,     0,     0,   591,     0,
     618,     0,   502,   501,    33,    30,     0,   681,   634,   630,
       0,   637,   672,   673,   679,   678,   640,   641,     0,   685,
     693,   636,   626,     0,   808,     0,   570,   571,   393,   390,
       0,     0,   398,     0,   419,   417,   418,     0,     0,     0,
     494,     0,     0,     0,   688,   629,   646,     0,   351,   647,
       0,   849,     0,     0,     0,     0,   873,     0,     0,     0,
     878,     0,     0,     0,   403,   410,   404,   407,   411,     0,
     432,   433,   436,   445,     0,     0,     0,     0,   721,   459,
     702,   705,   707,   709,   711,   712,   727,   716,   480,   482,
     484,   644,   486,   498,   518,   520,   549,     0,   851,     0,
       0,   798,   797,   796,   573,   286,   285,   311,     0,   282,
     284,     0,   288,  1038,  1045,     0,     0,     0,   301,     0,
       0,     0,   305,   306,   308,   302,   303,   309,   310,   304,
       0,     0,   287,   307,     0,     0,    49,    63,    91,    77,
      98,   103,   133,   129,    55,    81,    56,    81,    57,   145,
      58,   145,    59,     0,    61,     0,    60,     0,   140,   138,
     168,     0,   175,   184,     0,     0,     0,   215,   220,   223,
     227,   229,   235,   239,   206,   243,   247,   251,   172,   173,
     147,   148,   149,   145,   150,   146,   151,   181,   152,   186,
     153,     0,   155,   145,   154,   163,   210,   156,   145,   157,
     145,   158,   145,   159,   145,   160,   145,   161,   145,   162,
     145,   164,     0,   165,   145,   166,   145,     0,     0,    39,
       0,   353,     0,   892,     0,   929,     0,   917,   919,     0,
     864,   868,   855,     0,     0,   859,     0,   646,   831,   832,
     833,     0,    22,    23,    15,    16,    17,   352,   590,   590,
     608,   583,   503,     0,     0,     0,   697,   631,   642,   810,
       0,     0,   395,     0,     0,     0,   430,     0,   424,     0,
       0,     0,   495,   496,     0,   362,   360,     0,   805,     0,
     806,   876,     0,   882,   881,     0,     0,   838,     0,   412,
     413,   414,   405,     0,     0,   710,     0,   722,   724,   726,
     717,     0,   460,     0,   700,     0,     0,     0,   713,     0,
     714,   645,   643,   574,     0,     0,   283,     0,   341,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     827,     0,     0,     0,     0,   291,   292,   293,   294,   298,
     299,   295,   296,   297,   300,   134,   135,    69,    65,     0,
     855,     0,   145,    78,    80,   855,   145,    92,    96,    95,
     855,     0,     0,    99,   855,     0,     0,   102,   120,   104,
     108,   109,   110,   114,   115,   117,   106,   111,   112,   113,
     116,   118,     0,     0,     0,   128,   130,   855,   132,   144,
     143,     0,     0,     0,   203,   199,   145,     0,     0,   142,
       0,     0,     0,     0,   185,     0,   194,     0,   145,     0,
     142,   142,   212,   216,   855,     0,     0,     0,     0,   142,
       0,     0,     0,   142,     0,   142,   142,     0,   142,     0,
       0,   142,   142,     0,   242,   245,     0,   248,   249,     0,
       0,     0,     0,     0,   341,    42,    43,    44,     0,   358,
     891,   888,     0,   867,     0,   854,   855,   855,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,   843,    28,
     682,   807,     0,     0,     0,   400,   401,   421,     0,   855,
       0,   422,   423,   855,     0,     0,     0,     0,   689,   363,
       0,   877,     0,     0,     0,   406,     0,   408,   715,   721,
     719,     0,   723,   725,     0,   704,     0,     0,   733,     0,
       0,     0,     0,     0,   699,   703,   706,     0,     0,     0,
     762,     0,     0,   787,     0,     0,   758,   759,     0,   746,
     752,   753,   751,   750,   754,   748,   749,   755,     0,     0,
       0,     0,     0,   794,   795,     0,   313,   314,   318,   698,
     329,     0,   339,   340,   319,   320,     0,     0,     0,     0,
     324,   325,     0,     0,   792,   791,   793,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,     0,   332,   136,
     137,    67,     0,   259,   258,   933,   955,  1090,  1091,    64,
     254,     0,   257,   255,   266,   277,   273,    68,    73,    74,
      75,    66,    84,    82,   145,     0,    79,     0,    94,    93,
      90,   101,   100,    97,   124,   125,   121,   122,   123,   105,
     126,   107,   119,   131,   171,   195,     0,   145,   200,     0,
       0,   197,   169,   170,   167,   178,   179,   180,   177,   176,
     174,   189,   182,   145,   183,   187,   196,     0,   207,   208,
     209,   145,     0,   218,   217,   145,   221,   219,   224,   225,
     222,   226,   230,   232,   233,   231,   228,   236,   237,   234,
     240,   241,   238,   244,   246,   252,   250,   352,     0,     0,
       0,     0,     0,   357,     0,   869,   857,   860,   855,     0,
      25,    24,     0,   590,   590,     0,   612,   611,   610,   609,
     646,     0,   394,     0,     0,     0,   428,     0,     0,   429,
     427,   434,     0,   690,   804,   835,   837,     0,   415,   416,
       0,   718,   720,   790,   740,   738,   739,   701,     0,     0,
     744,   745,   736,   737,   708,   763,   768,     0,   788,   761,
     760,     0,     0,   765,   764,     0,   757,   756,     0,   786,
     747,     0,     0,   729,     0,   728,     0,     0,     0,   328,
       0,     0,     0,   317,   827,   828,   829,     0,   855,     0,
       0,     0,     0,   332,     0,   331,     0,   338,    70,    71,
      72,   276,     0,     0,     0,     0,     0,   267,     0,     0,
       0,     0,   272,    85,    89,    88,   855,     0,     0,    62,
      76,   127,   202,     0,   198,   201,   190,   193,   855,     0,
       0,   211,     0,   205,   214,     0,     0,     0,     0,     0,
     359,     0,   858,    18,     0,     0,    19,     0,     0,   590,
       0,   844,   396,   392,   431,     0,   426,   437,     0,   409,
     741,   742,   743,   734,   735,   776,   769,   769,   771,     0,
       0,   778,   778,   789,   731,   730,     0,   289,   312,   321,
     322,   315,   316,   326,   327,   323,     0,   817,   823,     0,
       0,     0,   885,   646,   352,   335,   336,   330,   333,     0,
       0,   275,   274,     0,   263,   262,     0,   253,   269,   268,
     271,   270,     0,    87,    86,    83,   204,   192,   191,   188,
     213,    36,    40,     0,     0,     0,   893,    26,   352,   596,
     602,   588,   599,   605,   589,     0,     0,     0,   839,     0,
       0,     0,     0,     0,   782,   780,   777,   775,   732,   825,
       0,   855,     0,     0,   830,   821,   823,     0,     0,   334,
     332,   260,     0,     0,    35,    37,     0,    46,   352,     0,
       0,     0,     0,     0,   584,   845,   425,     0,   767,   766,
     772,   773,     0,   781,     0,     0,   779,   826,   824,   818,
       0,     0,     0,   348,   346,   355,   349,   354,   337,     0,
     264,   265,   278,    47,     0,     0,   592,   598,   597,   593,
     604,   603,   594,   601,   600,   595,   607,   606,   770,     0,
     783,   784,   785,   819,   823,   822,   347,   261,     0,    20,
     774,     0,    45,   820
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,   314,   626,   627,   834,   835,   836,  1081,  1082,
    1665,   207,   208,   844,   433,  1094,   580,  1784,   322,   581,
     796,  1059,  1285,  1286,  1287,   317,   318,   577,   790,   984,
     985,  1421,  1441,   986,   987,  1192,  1443,  1444,   988,   989,
     990,   991,   992,   993,  1459,  1461,   994,   995,   996,   997,
    1020,   578,   998,   793,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1478,  1243,  1028,  1029,  1245,  1482,  1483,  1030,  1031,
    1032,  1033,  1034,  1234,  1235,  1236,  1469,  1035,  1036,  1252,
    1492,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,
    1056,  1429,  1430,  1431,  1432,  1723,  1819,  1433,  1434,  1435,
    1632,   575,   576,   781,   782,   784,   785,   786,   787,   955,
     956,   949,   957,   958,   959,   960,   961,   962,   963,   964,
    1402,  1705,   965,   966,   967,  1615,  1415,   968,   969,  1172,
     585,   586,   970,  1814,   971,   495,   799,  1816,   588,  1288,
     697,   698,  1230,   209,   210,   211,   212,   213,   214,   516,
     215,   472,   473,  1102,  1314,   216,   476,   477,   517,   518,
     519,   906,   907,   908,  1131,  1337,   217,   479,   480,   218,
    1107,  1321,  1108,  1109,  1319,   219,   220,   522,   221,   222,
     223,   224,   732,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     843,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   414,   262,   263,   264,   265,   266,   770,   771,   267,
     268,   269,   419,   628,   425,  1751,  1754,  1790,  1792,  1791,
    1793,  1305,   270,   422,   271,   631,   272,   273,   274,   493,
     643,   275,   440,   276,   277,   278,   279,   449,   659,   930,
    1152,   700,   400,   623,   401,   402,   280,   281,   282,   283,
     284,   285,   286,   287,   638,   288,   660,   289,   691,   290,
     662,   639,   663,  1095,  1390,   919,  1354,  1144,   920,   921,
     922,   923,   924,   925,   926,   927,  1140,  1150,  1382,  1355,
    1683,  1572,  1148,  1369,  1370,  1371,  1372,  1373,  1759,  1584,
    1374,  1766,  1692,  1763,  1806,  1375,  1376,  1377,  1142,   973,
     291,   292,   293,   294,   295,   296,   297,   467,   468,   298,
     299,   300,   301,   655,   302,   974,  1772,  1708,  1409,  1605,
    1083,   303,   304,   434,  1307,  1308,   305,   306,   307,   308,
     405,   406,   407,   408,  1076,   409,   410,   826,   827,   411,
     309,   705,   706,   310,   710,   711,   311,   975,   366,   379,
     367,  1063,   590,   594,   381,   382,   383,   384,   385,   386,
     387,   388,   595,   596,   801,   312,   313
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1598
static const yytype_int16 yypact[] =
{
    1094,  4664, -1598,  -141, -1598, -1598, -1598,  9025,  7333,  7769,
   -1598,   152,  9025, -1598,  6380,   421,    53,    39,  5402,   107,
    4910,  4910, -1598, -1598, -1598,  3188,  9025,  2189, -1598, -1598,
   -1598,   303,   537,   292,   301,   366,    68,   379,   392,   538,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598,   431,   458,   488,
     519,   560,   565,   599,   602,   604,   651,   666,   654, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,   707, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598,   699,   718, -1598,
   -1598, -1598, -1598, -1598, -1598,   731, -1598,    36, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,   768,   768,
   -1598,   770,   796, -1598, -1598,   798, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,   389,
   -1598, -1598, -1598, -1598, -1598,   281, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598,   256, -1598,   803, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,   257, -1598,
   -1598,   -11, -1598, -1598, -1598, -1598, -1598,   576, -1598,     3,
   -1598, -1598, -1598, -1598, -1598, -1598,   760,   792, -1598,   605,
     606, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
     850, -1598, -1598,   640, -1598, -1598, -1598, -1598, -1598, -1598,
     199, -1598,   725,   726, -1598,   683,     8, -1598,    84,    63,
      56,   554, -1598,   750,   736,   759,   742, -1598, -1598, -1598,
     258, -1598, -1598,  5402,   457, -1598, -1598,   921,   924, -1598,
    6380, -1598, -1598,  6380, -1598, -1598, -1598, -1598,   515, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598,  4664, -1598,  4664, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598,   329,   763, -1598, -1598, -1598, -1598, -1598,
     765,   763, -1598,     7, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598,   913,   918, -1598,
    7554,  7554,  7333,  9025, -1598, -1598, -1598, -1598,   936, -1598,
   -1598,   815,   848, -1598,   655,   121, -1598,   971, -1598,   985,
    7984,   991,   992,   993,   994,   996,   997,  1001,  1002,  1004,
   -1598,   371, -1598, -1598, -1598, -1598, -1598,    11, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
     747, -1598,   982,   457, -1598,  9025, -1598, -1598, -1598,   636,
   -1598, -1598, -1598,  1005, -1598, -1598, -1598,  6868,  4664, -1598,
     995,   999,  4664,    82,  1007,  1008,  8198,  4664, -1598,  1006,
    9025,  9025,  1010,  4664, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598,  4664,  9025,    20, -1598,  4664,
    4664,  9025,  1019, -1598,  9025,  1044,  1022, -1598,  9025,   131,
   -1598,   140,  4664,  4664,  4664,  4664,  1014,  1016, -1598,   995,
    7112,  4664, -1598,   995,   124,   896,  4664,   898, -1598, -1598,
    4664, -1598, -1598,  8832,  3434,  9025,  4664,  4664,  4664,   731,
      36,  4664,  1057,   923,   925, -1598, -1598, -1598, -1598, -1598,
    4664,   931,     5,  4910,  4910,  4910,  4910,  4910,  4910,  4910,
    4910, -1598,  4910,  4910,  4910,  4910,  4910,  4910,  4910,  4910,
    4910,  1009,  4910,  4910,  4910,  4910,  4910,  4910,  4910,  4910,
    4910,  4910,  4910,   905,   915,   916,   920,  3680, -1598,   457,
    5402,  5402,  5402,  4664,  4664, -1598, -1598,  9025,  4664,  2696,
     106, -1598,  2942,  1025,   376, -1598,   880,  -139,   555, -1598,
   -1598, -1598,   883,  9025, -1598, -1598, -1598,   926, -1598,  4664,
   -1598,  7333, -1598, -1598, -1598,  1032,  1070, -1598,  7333,  7554,
    7554,  7554,  7554,  7554,  7554,  7554,  7554,  7554,  7554,  7554,
    7554,  7554,  7554,  7333,  7333,  1063,  1064,  1065,  8412,  8626,
   -1598, -1598, -1598, -1598,  1067, -1598, -1598,  5648,  1012,   998,
   -1598, -1598, -1598,    42, -1598,  4664, -1598, -1598,   672, -1598,
   -1598,   449,  3926, -1598, -1598,   473, -1598,   392,  1001,  1071,
    1072, -1598, -1598, -1598,  1073,  1074, -1598,   525,  4172, -1598,
    1075, -1598,  1076, -1598, -1598, -1598,   577,   579,  1098,   707,
    4664,   580,   586,   896,   731,   896,  9025,    36,   896,   768,
    4664,  4664,   678,   688,   692,   592,  4664,  4664, -1598, -1598,
   -1598,   701, -1598,   594, -1598,  9025, -1598,   708, -1598,  7769,
    1077,   885,  1053,   960, -1598,   598, -1598,   896, -1598,  1112,
     611, -1598,   893,   247, -1598, -1598, -1598,  9025,  4664,   983,
   -1598,  4664,  4664,  4664,   726, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598,  4910, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598,    18,    63,    63,   846,    56,    56,    56,    56,
     554,   554, -1598, -1598,  7769,  7769,  9025,  9025, -1598,   612,
   -1598, -1598, -1598,   600,   661, -1598,   670, -1598, -1598, -1598,
     724, -1598,   533,  4664,  4664,  4664, -1598,   743, -1598,  1011,
    1013,    48,  1079,   949, -1598, -1598, -1598,  5156, -1598, -1598,
     453, -1598, -1598,  1420,    73,   950, -1598,  1093,  7769, -1598,
   -1598,  1017,  1017, -1598,  7333,  1095,   848, -1598,   121,   121,
     859,   859,   859,   859,   859,   859, -1598, -1598, -1598, -1598,
    1113,  1096, -1598, -1598, -1598, -1598,   755, -1598,   896, -1598,
    1101,  6624,  9025,   -83,  1088,  1089,  1090,   803,   782,   276,
   -1598,  1018, -1598, -1598,  1091, -1598,  9025, -1598, -1598, -1598,
     615, -1598, -1598, -1598, -1598, -1598, -1598, -1598,   622, -1598,
   -1598, -1598, -1598,  4664, -1598,  1015, -1598, -1598,  1021, -1598,
    1134,  1136, -1598,  1023, -1598, -1598, -1598,   989,   990,  1020,
   -1598,   623,   624,  9025, -1598, -1598,   896,  1142, -1598, -1598,
    4664, -1598,  4664,  4664,  4664,  9025, -1598,  1144,  4664,  4664,
   -1598,  1116,  1118,  2189, -1598, -1598,  1128, -1598,   778,  4664,
   -1598, -1598, -1598, -1598,    18,  4664,   451,   627,   652,  1068,
     911,   914,  1078, -1598, -1598,  1080,   962, -1598, -1598, -1598,
   -1598,  1147, -1598, -1598, -1598, -1598, -1598,  4418, -1598,   929,
     934, -1598, -1598, -1598, -1598, -1598, -1598, -1598,  1079, -1598,
   -1598,  9025,   601,    13,   733,  1079,  1079,  1079, -1598,  1079,
    1079,  1079, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
    1079,  1079, -1598, -1598,  1079,  1079, -1598, -1598, -1598, -1598,
   -1598, -1598,   642, -1598, -1598,   255, -1598,   244, -1598,   217,
   -1598,   215, -1598,   616, -1598,    85, -1598,   919,    93, -1598,
   -1598,   608, -1598, -1598,   862,   908,   863, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598,   148, -1598, -1598, -1598,  -152, -1598,   889,
   -1598,   928, -1598, -1598, -1598, -1598,   137, -1598,   229, -1598,
     869, -1598,   208, -1598, -1598, -1598,   170, -1598,   235, -1598,
      87, -1598,  -135, -1598,   646, -1598,   870,  9208,  9025,  1024,
     324, -1598,  4664, -1598,   913, -1598,  1026, -1598, -1598,  9025,
   -1598, -1598,  7769,  1146,  1030, -1598,   771,   896, -1598, -1598,
   -1598,  1145,  1180, -1598, -1598, -1598, -1598,   926,   107,   107,
   -1598, -1598, -1598,  1185,  1154,  1156, -1598, -1598, -1598, -1598,
    4664,  1189,  1027,  4664,  4664,  4664,  1190,   209, -1598,    76,
     283,  4664, -1598, -1598,   279, -1598, -1598,   629, -1598,   968,
   -1598, -1598,  4664, -1598, -1598,  1185,  1185,   969,  4664, -1598,
   -1598,  1055,  1128,  1164,   633, -1598,    12,  1102,   986, -1598,
   -1598,  1106, -1598,    18,   187,    18,  1081,   309,  1119,   115,
   -1598, -1598, -1598, -1598,  4664,  4664, -1598,  1174,   157,   733,
     776,  1080,  1082,  9025,   780,   824,   273,   310,  9025,   369,
     513,  9025,    24,   -19,    -6, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598,   922,   932, -1598, -1598,  5892,
    7769,   827,   951, -1598, -1598,  7769,   951, -1598, -1598, -1598,
    7769,  4664,  1517, -1598,  7769,  4664,  1548, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598,   -46,  1103,  1103, -1598, -1598,  7984, -1598, -1598,
   -1598,   967,  4664,   912,   694, -1598, -1598,  4664,  4664, -1598,
    1605,   -67,  4664,   424, -1598,   460, -1598,  1643, -1598,  4664,
   -1598, -1598,   945, -1598,  7769,  4664,  1676,  4664,  1711, -1598,
    4664,  1744,  1801, -1598,  4664, -1598, -1598,  1872, -1598,  4664,
    1900, -1598, -1598,  2195, -1598, -1598,  4664, -1598, -1598,  2225,
    4664,  2296,   803,  1193,   -32, -1598, -1598, -1598,   772, -1598,
   -1598, -1598,  7333, -1598,  1186, -1598,  7769,  7769,  1084,  1223,
    5892,   -83,  1225,  1194,  1195,   350,  9025,  1203, -1598, -1598,
   -1598, -1598,  9025,  1230,  1105, -1598, -1598, -1598,  9025,  7769,
     149, -1598, -1598,  7769,  4664,  4664,  1083,  1200, -1598, -1598,
    4664, -1598,   773,   774,  1202, -1598,   814,  1097, -1598,   652,
   -1598,  1198, -1598, -1598,  4910,   914,  1148,   875, -1598,  4910,
    4910,   115,   779,   779, -1598, -1598,  1078,    18,   775,   904,
   -1598,    69,  1031, -1598,   906,  9025, -1598, -1598,  1121, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,   309,    19,
    4910,  4910,  1040, -1598, -1598,  1082, -1598, -1598,  1119, -1598,
   -1598,  1217, -1598, -1598, -1598, -1598,  1107,  1082,  1085,  1087,
   -1598, -1598,  1222,  1125, -1598, -1598, -1598,  9025,   -83,  1028,
    1099,  1249,  9208,  9025,  1061,  1082,  1140,  9025,  1140, -1598,
   -1598,   -78,  6380, -1598,   714,   291,  1243,  1224,  1229,  1251,
   -1598,  6136,   820,   821, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598,   271,  2324, -1598,  2353, -1598,   850,
   -1598, -1598,   850, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598,  1141,  1141, -1598, -1598,   850,  4664, -1598, -1598,  1029,
    2421,   850,   850,    93, -1598, -1598, -1598, -1598, -1598,   850,
   -1598, -1598, -1598,   265, -1598, -1598, -1598,  9209,   850,    93,
      93, -1598,  1039, -1598,   850, -1598,   850, -1598,    93,   850,
   -1598, -1598,    93,   850,    93,    93, -1598,    93,   850, -1598,
      93,    93, -1598,   850, -1598,   850, -1598,   926,  1082,  9025,
    9025,    78,   324, -1598,  1109, -1598, -1598, -1598,  7769,  4664,
     304, -1598,  4664,   107,   107,   421, -1598, -1598, -1598, -1598,
     896,  1185, -1598,  9025,  4664,  1114, -1598,  9025,  4664, -1598,
   -1598, -1598,  4664, -1598, -1598, -1598, -1598,  1185, -1598, -1598,
    1082, -1598, -1598,    56, -1598, -1598, -1598, -1598,    47,   675,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598,  1052, -1598, -1598,
   -1598,   -14,  1082, -1598, -1598,    89, -1598, -1598,  1133, -1598,
   -1598,  4910,  4910,   846,   103, -1598,  1079,  1082,   856, -1598,
    1082,  1082,   822, -1598,     1,  1242, -1598,  5892,  7984,  9025,
     803,  1239,  1115,  1140,  1082,  1244,  1245,  1244, -1598, -1598,
   -1598, -1598,  6380,  6380,    75,  1121,  5892, -1598,  6136,  6136,
    6136,  6136,  1258, -1598, -1598, -1598,  7769,  4664,  9237, -1598,
   -1598, -1598,   850,  9266, -1598, -1598, -1598, -1598,  7769,  4664,
    9294, -1598,  9323, -1598,  9351,  1077,  1079,  1246,  1155,  9208,
   -1598,  7333, -1598, -1598,  1142,  1256, -1598,   487,   746,   107,
    1270, -1598, -1598, -1598, -1598,  1160, -1598, -1598,   790, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,   204,  1121,
    1082, -1598, -1598, -1598,   846,   846,  4910, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598,   130, -1598,  1139,  1059,
     -83,   112, -1598,   896,   926, -1598, -1598,  1244, -1598,  1082,
    1082, -1598, -1598,  1259, -1598, -1598,  1271, -1598, -1598, -1598,
   -1598, -1598,  4664, -1598,   850, -1598, -1598, -1598,   850, -1598,
   -1598,  1079, -1598,  1082,  1079,   803, -1598,  1272,   926, -1598,
   -1598, -1598, -1598, -1598, -1598,  1277,  4664,  4664, -1598,   791,
     793,  1121,  1092,   800, -1598, -1598,   645,   645,   846, -1598,
     804,  7769,  1077,  5892, -1598, -1598,  1139,    44,    43, -1598,
    1140, -1598,   108,   671, -1598, -1598,  1079, -1598,   926,  1301,
      86,   305,   294,   308, -1598, -1598, -1598,  1192, -1598, -1598,
     115, -1598,  1121, -1598,    74,    74, -1598, -1598, -1598, -1598,
     112,  1077,  4664, -1598, -1598, -1598, -1598, -1598,  1244,  1273,
   -1598, -1598, -1598, -1598,  1077,  4664, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,  1108,
   -1598, -1598, -1598, -1598,  1139, -1598, -1598, -1598,  1079, -1598,
   -1598,  1077, -1598, -1598
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1598, -1598,   370, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598,   333, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598,    97, -1598, -1598, -1598, -1598,
    1321, -1598,  -318,  -731, -1598, -1598, -1598, -1598,   326, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598,    80, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598,    94, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1279,  -297, -1598, -1598, -1598, -1598, -1598, -1299, -1598,
   -1598, -1598,  1033, -1598,   549, -1598, -1598, -1598,   545, -1598,
   -1598,  -770, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1388, -1598, -1598, -1598,    -2,
   -1598, -1598, -1598, -1598, -1598,  -315, -1070, -1598,   927, -1598,
   -1518,   445,  -697,   548,   171,  1000, -1598, -1598,  1124, -1598,
   -1598, -1598,   664, -1598, -1598, -1598, -1598,   662, -1598, -1598,
   -1598,   433,   213, -1598, -1598, -1598, -1598,  1234,   665, -1598,
   -1598, -1598,   238, -1598, -1598, -1598, -1598,   468, -1598, -1598,
     825,   823, -1598,  -429, -1598,  -529,  -528,   477,  -511,   472,
     474, -1598, -1598, -1598,  1003, -1598, -1598, -1598,  -719,  -226,
   -1598, -1598, -1598,    25,   343, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598,    33, -1598, -1598, -1598,  -690, -1598,
   -1553,  -456, -1598, -1598, -1598, -1598, -1598,   777,   413, -1598,
      46, -1598,  -183, -1598,  -615, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
     306, -1598, -1598, -1598, -1598, -1598, -1598,  1218, -1598,   603,
   -1598,  -646,  -639, -1598,  -384,  -535,    17, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598,   935, -1598,   937,
   -1598,   907,   865,   476, -1048,  -870, -1598, -1598, -1598,   218,
     211,     6,   446, -1598, -1598, -1598,    26, -1598, -1320, -1598,
    -205,    14,   205,   -10, -1598, -1598, -1598, -1598,  -317, -1535,
   -1598,  -323,  -773, -1598, -1598, -1598, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,   702, -1598,
   -1598, -1598, -1327,  -909,     0, -1598, -1475, -1597,  -230, -1598,
   -1268, -1598, -1598,   478, -1101,  -166, -1598, -1598, -1598, -1598,
   -1598, -1598, -1598, -1598, -1598, -1598, -1598, -1598,   313, -1598,
   -1598, -1598,   482, -1598, -1598,   484, -1598, -1598, -1598, -1598,
   -1598,   582,   322,    30, -1598,   788,   789,   263,   432,  -331,
   -1598, -1598,   781, -1598, -1598,    67,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -342
static const yytype_int16 yytable[] =
{
     369,   389,   369,   891,   323,   369,   615,   369,   587,   404,
     668,   741,   950,   839,   558,   673,   745,  1302,   675,   369,
     369,  1530,   678,   917,  1332,  1333,   403,   868,  1454,   870,
    1617,  1569,   873,  1531,   746,   747,   748,   749,   380,   592,
     593,  1589,  1157,   423,  1133,  1706,  1687,   416,    19,   474,
    1078,   494,   918,   890,    19,  1618,   914,   669,  1812,   498,
     889,   897,   914,   583,   915,  1340,  1475,   583,   540,  -341,
     915,  1724,   549,   501,   368,    28,    29,    30,   545,   415,
     583,    28,    29,    30,   830,   542,   543,  1455,    12,  1160,
    1161,  1162,  1323,   430,   435,   890,   726,   727,   728,   729,
     730,   731,   947,   733,   734,   735,   736,   737,   738,   739,
     740,  1582,   446,  1581,  1776,   928,   929,  1389,  1689,   315,
     447,    12,   542,   543,  1274,  1416,  1418,   646,  1626,   583,
    1389,  1591,  1627,  1689,   583,  1826,   609,   695,   890,  1241,
    1606,   542,   543,   695,   546,   890,  1747,   722,    90,  1283,
    -341,   788,   413,  1519,    90,   647,  1706,   421,   841,  1061,
     789,  1411,  1547,  1242,   890,  1520,  1413,   723,   679,   696,
    1275,    28,    29,    30,  1592,  1769,  1414,   679,  1156,  1417,
    1276,  1686,  1071,   842,   316,  1175,  1176,  1177,  1770,  1178,
    1179,  1180,  1075,   420,  1582,   917,   429,   917,  1163,  1690,
    1181,  1182,   610,   448,  1183,  1184,  1164,  1165,  1166,  1167,
    1168,    90,  1827,  1844,  1690,   541,   624,  -341,  1324,  1229,
     871,   931,   931,   424,   918,  1717,   918,   499,  1412,  1821,
    1815,  1813,   550,  1160,  1161,  1162,   779,   547,   548,   886,
    1115,   502,   475,   369,    90,  1379,   369,  1079,  1080,  1169,
     584,   670,  1619,  1620,  1391,  1408,  -341,   544,  1202,  1170,
    1206,   904,  1838,  1476,  1583,  1477,  1341,   584,   559,   916,
     772,  1171,  1680,  1681,  1682,   916,  1696,  1057,   816,   817,
     818,   819,  1659,   565,  1691,   648,   566,  1456,  1457,  1458,
     680,  1548,  1240,  1346,    19,   611,   612,  1725,  1726,   681,
     490,  1811,  1247,   913,   488,  1090,  1327,  1256,   491,  1258,
     557,  1261,  1347,  1262,  1622,  1267,   584,  1270,  1348,  1273,
    1626,   584,  1091,  1279,  1328,  1281,   436,   496,  1711,  1728,
    1729,  1730,  1731,   447,  1379,   437,   443,  1596,  1380,  1381,
     773,   774,  1163,  1832,  1225,   444,   890,   437,   775,  1599,
    1164,  1165,  1166,  1167,  1168,   438,  1829,   890,  1664,  1835,
     890,   520,  1764,   389,   389,   389,   369,  1613,  1762,  1851,
    1289,  1106,   497,   572,   320,   321,  1077,  1226,    15,  1271,
     412,    16,    17,   369,   573,  1535,   620,    28,    29,    30,
     404,   492,  1818,  1169,   521,  1349,  1350,  1351,   621,  1227,
    1352,  1353,   890,  1170,  1320,  1358,  1272,   403,  1359,   622,
     445,  1360,  1361,  1362,  1363,  1171,   448,   917,   369,  1248,
    1833,  1761,  1396,   450,   917,  1325,   917,  1380,  1381,  1397,
     369,  1299,  1830,  1294,  1800,  1836,   451,   640,   439,   369,
     597,   485,  1774,   369,   369,   723,   918,  1655,  1404,  1405,
     640,   664,  1249,   918,   454,   918,  1678,  1250,  1251,   369,
      90,  1445,  1263,  1238,   369,  1447,  1239,   369,   486,   487,
    1656,   369,  1364,  1303,  1304,  1840,  1398,  1399,  1536,  1537,
    1839,   455,  1406,   369,   902,  1264,   507,    19,  1265,  1266,
     664,   560,   633,  1400,  1810,   914,   369,   561,   369,  1401,
    1259,   903,   848,   915,  1611,  1470,  1365,  1203,  1616,  1197,
     507,   456,  1679,   656,    28,    29,    30,  1487,   562,  1198,
    1199,  1253,  1087,  1260,  1366,  1367,   851,  1268,  1368,  1204,
    1205,  1200,  1201,   415,  1688,  1749,  1193,  1750,   415,   567,
     568,   415,   457,  1254,  1255,   415,  1187,  1188,  1194,  1698,
    1269,  1437,  1701,  1702,   417,   418,  1446,  1646,  1195,   569,
     369,  1448,   507,  1633,   779,  1451,  1718,  1647,  1189,  1190,
     707,  1191,   712,  1634,  1635,   780,   369,   794,   856,  1648,
    1649,   441,   452,   458,   389,  1636,  1637,    90,   459,   442,
     453,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,  1538,   641,
    1657,   369,   369,   645,   507,  1493,   507,   507,   657,   404,
     837,   802,   460,   507,   666,   461,   934,   462,   805,   507,
     861,   507,   862,   866,   765,   895,   667,   507,   917,   867,
     671,   672,  1765,   820,  1778,   880,   500,   885,   899,   507,
     797,   896,   507,   682,   683,   684,   685,  1526,  1527,   507,
     507,   507,   693,    19,   900,   933,   507,   918,  1097,   369,
     507,  1779,  1780,   507,   463,  1098,  1112,  1113,  1789,  1136,
    1546,   634,  1329,  1480,  1549,   828,  1339,   935,   369,   464,
    1481,   558,   369,   601,   602,  1786,   936,  1822,   507,   404,
     525,   526,   527,   528,   529,   530,   465,   507,   507,   846,
     369,   531,   976,  1638,   977,   507,   403,   847,  1824,  1484,
     466,   978,   979,   877,   532,   507,  1481,   980,   759,   507,
    -256,   551,   552,   878,   763,   764,  1643,   879,   883,   766,
     981,   982,   983,   415,   471,   887,   884,   369,   369,   369,
     369,   469,  1650,   888,   404,   404,   404,   404,  -256,  -256,
    1652,   937,   415,  1407,  1654,   939,  -256,  1408,  -256,   938,
     470,   403,   403,   940,   603,   604,   605,   606,   607,   608,
     937,   478,   508,   509,   415,   510,   511,   512,   944,   513,
     514,   369,  1069,  1158,  1752,   688,  1753,   389,   404,   694,
    1070,  1159,   533,   534,   535,   536,   537,   538,  1297,  1522,
    1541,  1541,   503,   850,   482,   403,  1298,  1523,  1555,  1556,
    1567,  1804,  1568,  1805,   369,   369,  1697,  1541,  1797,   858,
    1797,   404,  1660,  1563,  1065,  1758,  1798,  1802,  1799,   369,
     483,   887,   484,  1463,   504,  1803,  1096,   494,   403,  1807,
    1540,   505,  1593,  1594,  1628,  1630,  1542,   881,   882,   506,
    1629,  1631,  1545,   629,   630,   539,   810,   811,   812,   813,
     814,   815,  1137,  1138,  1139,  1207,   369,  1575,  1576,  1577,
    1578,   791,   792,  1096,   542,   543,  1742,   507,   369,  1662,
    1438,  1439,  1440,   523,  1670,   524,   369,   601,   602,   415,
    1680,  1681,  1682,   760,   761,   762,  1208,  1707,  1209,  1210,
    1211,  1212,  1213,  1214,  1215,  1088,  1089,   554,  1667,  1668,
     553,  1473,   556,  1216,  1217,  1218,  1219,  1220,  1221,  1129,
    1130,   555,  1489,  1490,  1173,  1174,  1018,  1019,  1222,  1223,
    1224,  1498,  1185,  1186,   369,  1502,   563,  1504,  1505,   564,
    1507,  1277,  1278,  1510,  1511,  1394,  1395,   579,  1741,  1386,
    1387,   574,   707,  1392,  1393,  1233,  1467,  1517,  1558,  1559,
     435,  1785,   589,  -256,  1787,   591,  -256,  -256,  -256,  -256,
     598,  -256,  -256,   599,  -256,  1565,  1566,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,   613,  1733,  -256,  -256,
    -256,  1579,  1580,  1586,  1587,  -256,  -256,  1570,  1571,  1737,
    1699,  1700,  1703,  1704,  1775,   632,  1823,   600,   656,   743,
     744,   750,   751,   426,   427,   752,   753,  -256,  -256,   614,
    -256,  1841,  1842,   808,   809,   437,   441,   446,   452,  -256,
     616,   617,  -256,  -256,   644,   490,   618,   642,   619,   635,
    1282,   369,   651,   652,  1755,   665,   674,   676,   658,   677,
     699,  1117,   369,  1694,  1695,   369,   686,  1777,   687,   702,
     717,   718,   404,   721,   719,  1809,   754,   803,  1852,   755,
     756,  1817,   783,   742,   757,   795,  1134,  1672,   778,   403,
     798,  1675,  1820,  1828,  1831,  1834,  1837,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,   804,   822,   823,
     824,   831,   863,  1843,  1845,   840,   852,   853,   854,   855,
     859,   860,   892,   893,   894,   656,   898,  1848,   838,   890,
     901,   909,  1808,   947,   951,  1058,   828,  1060,  1072,  1067,
    1066,  1068,  1084,  1085,  1086,  1093,  1101,   945,  1103,   946,
    1104,  1106,   520,  1713,  1853,   695,   369,  1100,  1122,  1092,
    1125,   369,  1126,  1062,   369,  1128,  1143,  1105,  1768,  1141,
    1145,  1154,  1146,  1149,  1151,  1147,  1155,  1232,  1228,  1233,
    1237,  1244,   369,   369,  1257,  1280,  1111,  1246,   369,  1300,
     404,  1295,  1292,   369,  1296,   404,  1301,   369,  1306,  1309,
     404,  1310,  1312,  1318,   404,  1330,  1334,   403,  1336,  1338,
    1342,  1343,   403,  1344,  1378,  1385,  1284,   403,  1389,  1442,
     369,   403,  1436,  1419,  1712,  1357,  1464,   404,  1491,  1466,
     656,  1525,  1420,  1313,  1518,  1403,  1460,  1529,  1410,  1532,
    1541,  1533,  1534,  1543,   403,  1553,  1557,   369,  1528,  1544,
    1552,  1562,  1595,  1560,   404,  1564,  1585,    90,  1597,  1602,
    1598,  1603,  1609,  1608,  1612,  1614,  1623,  1626,  1624,  1693,
    1600,   403,  1601,  1625,  1641,  1607,  1661,  1685,  1674,  1710,
    1715,  1719,  1521,  1732,  1756,   389,  1720,  1743,  1644,   369,
     369,  1744,   570,   369,   571,  1714,   404,   404,  1653,   369,
    1716,  1748,  1757,  1771,  1781,   369,  1773,  1794,  1782,   887,
    1801,   369,   369,   403,   403,  1825,   369,  1582,  1847,   404,
    1196,  1462,  1524,   404,   319,  1485,  1850,  1231,  1468,  1727,
     948,   952,  1116,  1436,   625,   972,   403,   515,   869,   872,
     403,  1335,  1132,   481,   874,  1322,  1110,   725,   724,   777,
    1153,  1539,  1669,   489,   582,   692,  1356,   661,   369,  1114,
     932,  1345,  1135,  1574,  1684,  1561,  1388,  1573,  1590,  1767,
    1760,   864,  1449,   415,  1709,  1671,  1452,  1121,   649,   415,
     650,  1127,  1293,  1124,  1064,   415,  1291,   806,     0,   807,
       0,     0,     0,     0,     0,   821,     0,     0,     0,     0,
     369,     0,     0,  1465,     0,  1610,   369,     0,  1471,  1472,
     369,     0,     0,  1479,     0,   369,     0,     0,     0,     0,
    1488,     0,     0,     0,   369,     0,  1494,     0,  1496,     0,
    1788,  1499,  1588,     0,     0,  1503,     0,     0,     0,     0,
    1508,     0,     0,     0,     0,     0,     0,  1513,     0,     0,
       0,  1515,     0,     0,     0,  1621,     0,     0,     0,     0,
       0,     0,     0,     0,  1436,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1604,     0,     0,     0,     0,     0,
     656,     0,     0,     0,   656,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   701,     0,     0,     0,
     703,     0,     0,     0,   709,     0,   713,   714,   715,     0,
       0,   716,   369,   369,     0,     0,     0,     0,     0,     0,
     720,   369,     0,     0,     0,     0,     0,     0,   404,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
     369,     0,     0,     0,     0,   403,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,     0,   769,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   656,  1658,     0,   800,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,   369,   369,     0,     0,     0,     0,     0,   404,     0,
     415,     0,     0,     0,   415,   369,   369,     0,     0,   369,
       0,   369,   369,   369,   369,   403,     0,     0,     0,   369,
       0,     0,     0,     0,     0,   845,   404,  1642,     0,     0,
    1436,   369,     0,     0,     0,     0,     0,     0,   404,     0,
       0,     0,  1745,   403,   389,  1721,  1722,     0,     0,  1436,
       0,  1436,  1436,  1436,  1436,   403,     0,     0,     0,     0,
     865,     0,     0,     0,     0,     0,   415,     0,     0,   999,
     875,   876,  1000,  1001,  1002,  1003,     0,  1004,     0,     0,
    1005,  1746,     0,  1006,  1007,  1008,  1009,  1010,  1011,  1012,
    1013,  1014,     0,     0,  1015,  1016,  1017,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   905,     0,
       0,   910,   911,   912,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   316,     0,     0,  1018,  1019,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,   369,     0,     0,     0,
       0,   404,     0,   941,   942,   943,  1450,     0,     0,  1000,
    1001,  1002,  1003,     0,  1004,     0,     0,  1005,   403,     0,
    1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,     0,
       0,  1015,  1016,  1017,     0,     0,  1436,  1453,  1734,     0,
    1000,  1001,  1002,  1003,     0,  1004,     0,     0,  1005,     0,
    1738,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
       0,     0,  1015,  1016,  1017,     0,     0,     0,     0,     0,
       0,     0,   316,     0,     0,  1018,  1019,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1099,  1474,     0,     0,  1000,  1001,  1002,
    1003,     0,  1004,   316,     0,  1005,  1018,  1019,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,     0,     0,  1015,
    1016,  1017,  1118,  1119,  1120,     0,     0,     0,  1123,   709,
       0,     0,  1486,  1783,     0,  1000,  1001,  1002,  1003,   905,
    1004,     0,     0,  1005,     0,     0,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,     0,     0,  1015,  1016,  1017,
     316,     0,     0,  1018,  1019,  1495,     0,   769,  1000,  1001,
    1002,  1003,     0,  1004,     0,     0,  1005,     0,     0,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,     0,     0,
    1015,  1016,  1017,     0,     0,     0,     0,     0,   316,     0,
    1497,  1018,  1019,  1000,  1001,  1002,  1003,     0,  1004,     0,
       0,  1005,     0,     0,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,     0,     0,  1015,  1016,  1017,     0,     0,
       0,   316,     0,  1500,  1018,  1019,  1000,  1001,  1002,  1003,
       0,  1004,     0,     0,  1005,     0,     0,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,     0,     0,  1015,  1016,
    1017,     0,     0,     0,     0,     0,   316,     0,     0,  1018,
    1019,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1501,     0,  1290,  1000,  1001,  1002,  1003,     0,  1004,   316,
       0,  1005,  1018,  1019,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,     0,     0,  1015,  1016,  1017,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1311,     0,     0,  1315,  1316,  1317,     0,     0,     0,     0,
       0,  1326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1331,     0,     0,     0,   316,     0,   905,  1018,
    1019,  1506,     0,     0,  1000,  1001,  1002,  1003,     0,  1004,
       0,     0,  1005,     0,     0,  1006,  1007,  1008,  1009,  1010,
    1011,  1012,  1013,  1014,  1383,  1384,  1015,  1016,  1017,  1509,
       0,     0,  1000,  1001,  1002,  1003,     0,  1004,     0,     0,
    1005,     0,     0,  1006,  1007,  1008,  1009,  1010,  1011,  1012,
    1013,  1014,     0,     0,  1015,  1016,  1017,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   316,     0,     0,
    1018,  1019,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   316,     0,     0,  1018,  1019,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    40,    41,    42,    43,    44,    45,
      46,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    59,    60,    61,    62,    63,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,   345,    79,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,     0,     0,     0,     0,     0,
     346,   347,    89,     0,  1550,  1551,    91,     0,     0,     0,
    1554,    94,   348,    96,   349,    98,     0,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   350,   351,   110,   352,
     353,   113,     0,   114,   354,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   355,   130,
     131,   132,   133,   134,   356,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,   148,   149,
     150,     0,   357,   152,     0,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   358,
     179,   180,   359,   182,   183,   184,   185,   186,   360,   188,
     361,   190,   191,   192,   193,   194,   195,   362,   363,   198,
     364,   365,   201,   202,   203,   204,   205,   206,     0,     0,
       0,     0,     0,     0,  1512,     0,     0,  1000,  1001,  1002,
    1003,     0,  1004,     0,     0,  1005,     0,     0,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,     0,     0,  1015,
    1016,  1017,     0,     0,  1514,     0,     0,  1000,  1001,  1002,
    1003,     0,  1004,     0,     0,  1005,     0,     0,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,     0,     0,  1015,
    1016,  1017,     0,     0,     0,     0,     0,     0,     0,   431,
     316,   432,     0,  1018,  1019,     0,     0,     0,     0,  1663,
       0,     0,  1666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1673,     0,     0,     0,  1676,     0,
     316,     0,  1677,  1018,  1019,  1516,     0,     0,  1000,  1001,
    1002,  1003,     0,  1004,     0,     0,  1005,     0,     0,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,     0,     0,
    1015,  1016,  1017,  1639,     0,     0,  1000,  1001,  1002,  1003,
       0,  1004,     0,     0,  1005,     0,     0,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,     0,     0,  1015,  1016,
    1017,     0,  1640,     0,     0,  1000,  1001,  1002,  1003,     0,
    1004,   316,     0,  1005,  1018,  1019,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,     0,     0,  1015,  1016,  1017,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   316,
       0,     0,  1018,  1019,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   316,     0,
    1645,  1018,  1019,  1000,  1001,  1002,  1003,     0,  1004,     0,
       0,  1005,     0,     0,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,     0,     0,  1015,  1016,  1017,     0,    12,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,   767,    15,     0,     0,    16,    17,     0,
      18,     0,    19,     0,    20,    21,    22,     0,    23,    24,
      25,   768,     0,     0,     0,     0,   316,     0,     0,  1018,
    1019,     0,     0,     0,    26,     0,  1795,  1796,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,  1846,     0,     0,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,  1849,     0,    87,    88,    89,
       0,     0,    90,    91,    92,    93,     0,     0,    94,    95,
      96,    97,    98,     0,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,   148,   149,   150,     0,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,    12,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,     0,   767,
      15,     0,     0,    16,    17,     0,    18,     0,    19,     0,
      20,    21,    22,     0,    23,    24,    25,   776,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,    87,    88,    89,     0,     0,    90,    91,
      92,    93,     0,     0,    94,    95,    96,    97,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   148,   149,   150,     0,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,    12,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,    15,     0,     0,    16,
      17,     0,    18,     0,    19,     0,    20,    21,    22,     0,
      23,    24,    25,   428,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,    87,
      88,    89,     0,     0,    90,    91,    92,    93,     0,     0,
      94,    95,    96,    97,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,   148,   149,   150,
       0,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,    12,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,    15,     0,     0,    16,    17,     0,    18,     0,
      19,     0,    20,    21,    22,     0,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   708,     0,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,    87,    88,    89,     0,     0,
      90,    91,    92,    93,     0,     0,    94,    95,    96,    97,
      98,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,   148,   149,   150,     0,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,    12,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,    15,     0,
       0,    16,    17,     0,    18,     0,    19,     0,    20,    21,
      22,     0,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   758,     0,     0,     0,     0,    26,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,    87,    88,    89,     0,     0,    90,    91,    92,    93,
       0,     0,    94,    95,    96,    97,    98,     0,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,   148,
     149,   150,     0,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,    12,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,     0,    15,     0,     0,    16,    17,     0,
      18,     0,    19,     0,    20,    21,    22,     0,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   849,
       0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,    87,    88,    89,
       0,     0,    90,    91,    92,    93,     0,     0,    94,    95,
      96,    97,    98,     0,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,   148,   149,   150,     0,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,    12,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,     0,     0,
      15,     0,     0,    16,    17,     0,    18,     0,    19,     0,
      20,    21,    22,     0,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,   857,     0,     0,     0,     0,
      26,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,    87,    88,    89,     0,     0,    90,    91,
      92,    93,     0,     0,    94,    95,    96,    97,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   148,   149,   150,     0,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,    12,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,   767,    15,     0,     0,    16,
      17,     0,    18,     0,    19,     0,    20,    21,    22,     0,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,    87,
      88,    89,     0,     0,    90,    91,    92,    93,     0,     0,
      94,    95,    96,    97,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,   148,   149,   150,
       0,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,    12,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,    15,     0,     0,    16,    17,     0,    18,     0,
      19,     0,    20,    21,    22,     0,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,    87,    88,    89,     0,     0,
      90,    91,    92,    93,     0,     0,    94,    95,    96,    97,
      98,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,   148,   149,   150,     0,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,    12,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,    15,     0,
       0,    16,    17,     0,    18,     0,    19,     0,    20,    21,
      22,     0,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   345,    79,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,    87,    88,    89,     0,     0,    90,    91,    92,    93,
       0,     0,    94,   348,    96,   349,    98,     0,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   350,   351,   110,
     352,   353,   113,     0,   114,   354,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,   148,
     149,   150,     0,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     358,   179,   180,   359,   182,   183,   184,   185,   186,   360,
     188,   361,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   364,   365,   201,   202,   203,   204,   205,   206,    12,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,     0,    15,     0,     0,    16,    17,     0,
      18,     0,    19,     0,    20,    21,    22,     0,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,    87,    88,    89,
       0,     0,    90,    91,    92,    93,     0,     0,    94,    95,
      96,    97,    98,     0,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   953,   143,
     144,   145,   146,   147,     0,   148,   954,   150,     0,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,    12,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,     0,     0,
      15,     0,     0,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   345,    79,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,    87,    88,    89,     0,     0,    90,    91,
      92,    93,     0,     0,    94,   348,    96,   349,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   350,
     351,   110,   352,   353,   113,     0,   114,   354,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   355,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   148,   149,   150,     0,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   358,   179,   180,   359,   182,   183,   184,   185,
     186,   360,   188,   361,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   364,   365,   201,   202,   203,   204,   205,
     206,   832,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     833,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    42,    43,    44,    45,    46,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    59,    60,    61,    62,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,   345,    79,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,   346,
     347,    89,     0,     0,     0,    91,     0,     0,     0,     0,
      94,   348,    96,   349,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   350,   351,   110,     0,     0,
     113,     0,   114,     0,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   355,   130,   131,
     132,   133,   134,   356,     0,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,   148,   149,   150,
       0,     0,   152,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   358,   179,
     180,   359,   182,   183,   184,   185,   186,   360,   188,   361,
     190,   191,   192,   193,   194,   195,   362,   363,   198,   364,
     365,   201,   202,   203,   204,   205,   206,    13,     0,     0,
       0,     0,     0,     0,     0,     0,  1422,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1423,     0,     0,     0,
       0,     0,  1424,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1425,   392,
      33,    34,    35,   393,    37,    38,   394,    40,    41,    42,
      43,    44,    45,    46,  1426,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    59,    60,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   345,    79,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,   346,   347,    89,     0,     0,     0,    91,
      92,    93,     0,     0,    94,   348,    96,   349,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   350,
     351,   110,   352,   353,   113,     0,   114,   354,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   355,   130,   131,   132,   133,   134,   356,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   148,   149,   150,     0,   397,   152,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   358,   179,   180,   359,   182,   183,   184,   185,
     186,   360,   188,   361,   190,   191,  1427,  1428,   194,   195,
     362,   363,   198,   364,   365,   201,   202,   203,   204,   205,
     206,    13,     0,     0,     0,     0,     0,     0,     0,     0,
    1422,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1425,   392,    33,    34,    35,   393,    37,    38,
     394,    40,    41,    42,    43,    44,    45,    46,  1426,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      59,    60,    61,    62,    63,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
     345,    79,     0,     0,     0,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,   346,   347,    89,
       0,     0,     0,    91,    92,    93,     0,     0,    94,   348,
      96,   349,    98,     0,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   350,   351,   110,   352,   353,   113,     0,
     114,   354,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   355,   130,   131,   132,   133,
     134,   356,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,   148,   149,   150,     0,   397,
     152,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   358,   179,   180,   359,
     182,   183,   184,   185,   186,   360,   188,   361,   190,   191,
     192,   193,   194,   195,   362,   363,   198,   364,   365,   201,
     202,   203,   204,   205,   206,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   391,   392,    33,    34,
      35,   393,    37,    38,   394,    40,    41,    42,    43,    44,
      45,    46,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,    59,    60,    61,    62,    63,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   345,    79,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,   346,   347,    89,     0,     0,     0,    91,    92,    93,
       0,     0,    94,   348,    96,   349,    98,     0,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   350,   351,   110,
     352,   353,   113,     0,   114,   354,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   355,
     130,   131,   132,   133,   134,   356,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,   148,
     149,   150,     0,   397,   152,     0,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     358,   179,   180,   359,   182,   183,   184,   185,   186,   360,
     188,   361,   190,   191,   192,   193,   194,   195,   362,   363,
     198,   364,   365,   201,   202,   203,   204,   205,   206,  1073,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   390,  1074,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     391,   392,    33,    34,    35,   393,    37,    38,   394,   395,
      41,    42,    43,    44,    45,    46,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    59,    60,
      61,    62,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   345,    79,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,   346,   347,    89,     0,     0,
       0,    91,     0,     0,     0,     0,    94,   348,    96,   349,
      98,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   350,   351,   110,   352,   353,   113,     0,   114,   354,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   355,   130,   131,   132,   133,   134,   356,
     396,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,   148,   149,   150,     0,   397,   152,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   358,   179,   180,   359,   182,   183,
     184,   185,   186,   360,   188,   361,   190,   191,   192,   193,
     194,   195,   398,   399,   198,   364,   365,   201,   202,   203,
     204,   205,   206,   636,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   637,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    59,    60,    61,    62,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,   345,    79,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,   346,
     347,    89,     0,     0,     0,    91,     0,     0,     0,     0,
      94,   348,    96,   349,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   350,   351,   110,   352,   353,
     113,     0,   114,   354,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   355,   130,   131,
     132,   133,   134,   356,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,   148,   149,   150,
       0,   357,   152,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   358,   179,
     180,   359,   182,   183,   184,   185,   186,   360,   188,   361,
     190,   191,   192,   193,   194,   195,   362,   363,   198,   364,
     365,   201,   202,   203,   204,   205,   206,   689,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   690,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    59,    60,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   345,    79,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,   346,   347,    89,     0,     0,     0,    91,
       0,     0,     0,     0,    94,   348,    96,   349,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   350,
     351,   110,   352,   353,   113,     0,   114,   354,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   355,   130,   131,   132,   133,   134,   356,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   148,   149,   150,     0,   357,   152,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   358,   179,   180,   359,   182,   183,   184,   185,
     186,   360,   188,   361,   190,   191,   192,   193,   194,   195,
     362,   363,   198,   364,   365,   201,   202,   203,   204,   205,
     206,   370,   371,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,     0,     0,     0,     0,   374,   375,   376,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,    43,    44,    45,    46,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,    59,    60,    61,
      62,    63,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,   345,    79,     0,
       0,     0,    80,    81,    82,    83,    84,    85,    86,     0,
       0,     0,     0,     0,   346,   347,    89,     0,     0,   377,
      91,     0,     0,     0,     0,    94,   348,    96,   349,    98,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     350,   351,   110,     0,     0,   113,     0,   114,   378,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   355,   130,   131,   132,   133,   134,   356,     0,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,   148,   149,   150,     0,     0,   152,     0,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   358,   179,   180,   359,   182,   183,   184,
     185,   186,   360,   188,   361,   190,   191,   192,   193,   194,
     195,   362,   363,   198,   364,   365,   201,   202,   203,   204,
     205,   206,   370,   371,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,     0,     0,     0,     0,   374,   375,   376,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    42,    43,    44,    45,    46,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    59,    60,
      61,    62,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   345,    79,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,   346,   347,    89,     0,     0,
     377,    91,     0,     0,     0,     0,    94,   348,    96,   349,
      98,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   350,   351,   110,     0,     0,   113,     0,   114,     0,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   355,   130,   131,   132,   133,   134,   356,
       0,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,   148,   149,   150,     0,     0,   152,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   358,   179,   180,   359,   182,   183,
     184,   185,   186,   360,   188,   361,   190,   191,   192,   193,
     194,   195,   362,   363,   198,   364,   365,   201,   202,   203,
     204,   205,   206,   390,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   391,   392,    33,    34,    35,
     393,    37,    38,   394,   395,    41,    42,    43,    44,    45,
      46,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    59,    60,    61,    62,    63,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,   345,    79,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,     0,     0,     0,     0,     0,
     346,   347,    89,     0,     0,     0,    91,     0,     0,     0,
       0,    94,   348,    96,   349,    98,     0,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   350,   351,   110,   352,
     353,   113,     0,   114,   354,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   355,   130,
     131,   132,   133,   134,   356,   396,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,   148,   149,
     150,     0,   397,   152,     0,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   358,
     179,   180,   359,   182,   183,   184,   185,   186,   360,   188,
     361,   190,   191,   192,   193,   194,   195,   398,   399,   198,
     364,   365,   201,   202,   203,   204,   205,   206,   390,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     391,   392,    33,    34,    35,   393,    37,    38,   394,    40,
      41,    42,    43,    44,    45,    46,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    59,    60,
      61,    62,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   345,    79,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,   346,   347,    89,     0,     0,
       0,    91,     0,     0,     0,     0,    94,   348,    96,   349,
      98,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   350,   351,   110,   352,   353,   113,     0,   114,   354,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   355,   130,   131,   132,   133,   134,   356,
     396,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,   148,   149,   150,     0,   397,   152,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   358,   179,   180,   359,   182,   183,
     184,   185,   186,   360,   188,   361,   190,   191,   192,   193,
     194,   195,   398,   399,   198,   364,   365,   201,   202,   203,
     204,   205,   206,   653,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    59,    60,    61,    62,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,   345,    79,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,   346,
     347,    89,     0,     0,   654,    91,     0,     0,     0,     0,
      94,   348,    96,   349,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   350,   351,   110,   352,   353,
     113,     0,   114,   354,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   355,   130,   131,
     132,   133,   134,   356,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,   148,   149,   150,
       0,   357,   152,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   358,   179,
     180,   359,   182,   183,   184,   185,   186,   360,   188,   361,
     190,   191,   192,   193,   194,   195,   362,   363,   198,   364,
     365,   201,   202,   203,   204,   205,   206,   825,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    59,    60,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   345,    79,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,   346,   347,    89,     0,     0,     0,    91,
       0,     0,     0,     0,    94,   348,    96,   349,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   350,
     351,   110,   352,   353,   113,     0,   114,   354,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   355,   130,   131,   132,   133,   134,   356,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   148,   149,   150,     0,   357,   152,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   358,   179,   180,   359,   182,   183,   184,   185,
     186,   360,   188,   361,   190,   191,   192,   193,   194,   195,
     362,   363,   198,   364,   365,   201,   202,   203,   204,   205,
     206,   829,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      59,    60,    61,    62,    63,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
     345,    79,     0,     0,     0,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,   346,   347,    89,
       0,     0,     0,    91,     0,     0,     0,     0,    94,   348,
      96,   349,    98,     0,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   350,   351,   110,   352,   353,   113,     0,
     114,   354,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   355,   130,   131,   132,   133,
     134,   356,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,   148,   149,   150,     0,   357,
     152,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   358,   179,   180,   359,
     182,   183,   184,   185,   186,   360,   188,   361,   190,   191,
     192,   193,   194,   195,   362,   363,   198,   364,   365,   201,
     202,   203,   204,   205,   206,   704,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    59,    60,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   345,    79,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,   346,   347,    89,     0,     0,     0,    91,
       0,     0,     0,     0,    94,   348,    96,   349,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   350,
     351,   110,   352,   353,   113,     0,   114,   354,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   355,   130,   131,   132,   133,   134,   356,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   148,   149,   150,     0,   357,   152,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   358,   179,   180,   359,   182,   183,   184,   185,
     186,   360,   188,   361,   190,   191,   192,   193,   194,   195,
     362,   363,   198,   364,   365,   201,   202,   203,   204,   205,
     206,   324,   325,   326,   327,   328,   329,   330,   331,   332,
      40,    41,    42,    43,    44,    45,    46,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    59,
      60,    61,    62,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   345,
      79,     0,     0,     0,    80,    81,    82,    83,    84,    85,
      86,     0,     0,     0,     0,     0,   346,   347,    89,     0,
       0,     0,    91,     0,     0,     0,     0,    94,   348,    96,
     349,    98,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   350,   351,   110,   352,   353,   113,     0,   114,
     354,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   355,   130,   131,   132,   133,   134,
     356,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,   148,   149,   150,     0,   357,   152,
       0,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   358,   179,   180,   359,   182,
     183,   184,   185,   186,   360,   188,   361,   190,   191,   192,
     193,   194,   195,   362,   363,   198,   364,   365,   201,   202,
     203,   204,   205,   206,    41,    42,    43,    44,    45,    46,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    59,    60,    61,    62,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,   345,    79,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,   346,
     347,    89,     0,     0,     0,    91,     0,     0,     0,     0,
      94,   348,    96,   349,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   350,   351,   110,     0,     0,
     113,     0,   114,     0,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   355,   130,   131,
     132,   133,   134,   356,     0,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,   148,   149,   150,
       0,     0,   152,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   358,   179,
     180,   359,   182,   183,   184,   185,   186,   360,   188,   361,
     190,   191,   192,   193,   194,   195,   362,   363,   198,   364,
     365,   201,   202,   203,   204,   205,   206,     0,  1651,     0,
       0,  1000,  1001,  1002,  1003,     0,  1004,     0,     0,  1005,
       0,     0,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,
    1014,     0,     0,  1015,  1016,  1017,  1735,     0,     0,  1000,
    1001,  1002,  1003,     0,  1004,     0,     0,  1005,     0,     0,
    1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,     0,
       0,  1015,  1016,  1017,     0,  1736,     0,     0,  1000,  1001,
    1002,  1003,     0,  1004,   316,     0,  1005,  1018,  1019,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,     0,     0,
    1015,  1016,  1017,  1739,     0,     0,  1000,  1001,  1002,  1003,
       0,  1004,   316,     0,  1005,  1018,  1019,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,     0,     0,  1015,  1016,
    1017,     0,  1740,     0,     0,  1000,  1001,  1002,  1003,     0,
    1004,   316,     0,  1005,  1018,  1019,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,     0,     0,  1015,  1016,  1017,
       0,     0,     0,  1000,  1001,  1002,  1003,     0,  1004,   316,
       0,  1005,  1018,  1019,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,     0,     0,  1015,  1016,  1017,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   316,     0,
       0,  1018,  1019,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   316,     0,     0,  1018,
    1019
};

static const yytype_int16 yycheck[] =
{
       7,     8,     9,   700,     6,    12,   390,    14,   323,     9,
     466,   540,   782,   628,   240,   471,   544,  1087,   474,    26,
      27,  1300,   478,   742,  1125,  1126,     9,   673,    74,   675,
    1418,  1351,   678,  1301,   545,   546,   547,   548,     8,   370,
     371,  1368,   951,    18,   914,    44,  1581,    14,    36,    13,
     133,    44,   742,    52,    36,   133,    44,    37,    14,    70,
     699,   707,    44,    56,    52,    53,   133,    56,    60,    56,
      52,  1624,    16,    70,     7,    63,    64,    65,    15,    12,
      56,    63,    64,    65,   619,    38,    39,   133,    13,    76,
      77,    78,    16,    26,    27,    52,   525,   526,   527,   528,
     529,   530,    54,   532,   533,   534,   535,   536,   537,   538,
     539,   125,    44,    44,  1711,   754,   755,   136,    44,   260,
      52,    13,    38,    39,   259,  1173,  1174,    45,    16,    56,
     136,   112,  1431,    44,    56,    49,    15,    13,    52,   291,
    1408,    38,    39,    13,    81,    52,  1664,   142,   136,  1058,
     137,   290,     0,   185,   136,    73,    44,   118,   116,   798,
     299,   137,    13,   315,    52,   197,   185,   162,    37,    45,
     305,    63,    64,    65,   155,    45,   195,    37,   948,   185,
     315,   195,   828,   141,   325,   955,   956,   957,  1706,   959,
     960,   961,   831,   140,   125,   914,    25,   916,   185,   125,
     970,   971,    81,   135,   974,   975,   193,   194,   195,   196,
     197,   136,   126,  1810,   125,   207,   205,   204,   142,   126,
     676,   756,   757,   116,   914,  1613,   916,   238,   204,  1782,
     187,   187,   176,    76,    77,    78,   188,   174,   175,   695,
     886,   238,   206,   250,   136,   130,   253,   330,   331,   236,
     243,   231,   330,   331,  1163,   254,   243,   173,   989,   246,
     991,   717,  1797,   330,   195,   332,  1136,   243,   243,   257,
     164,   258,   225,   226,   227,   257,   173,   204,   609,   610,
     611,   612,   204,   250,   195,   203,   253,   333,   334,   335,
     159,   142,  1023,   106,    36,   174,   175,  1624,  1625,   159,
      44,  1776,  1033,   732,    23,    29,    27,  1038,    52,  1040,
      52,  1042,   125,  1044,    23,  1046,   243,  1048,   131,  1050,
      16,   243,    46,  1054,    45,  1056,    23,    70,  1607,  1628,
    1629,  1630,  1631,    52,   130,    44,    44,  1385,   223,   224,
     234,   235,   185,    49,   259,    44,    52,    44,   242,  1397,
     193,   194,   195,   196,   197,    52,    51,    52,    54,    51,
      52,   162,  1689,   370,   371,   372,   373,  1415,  1688,  1844,
    1060,   162,   115,    44,     4,     5,   832,   292,    28,   292,
      10,    31,    32,   390,    55,    35,    15,    63,    64,    65,
     390,   135,  1780,   236,   195,   208,   209,   210,    27,   314,
     213,   214,    52,   246,   195,    96,   319,   390,    99,    38,
      44,   102,   103,   104,   105,   258,   135,  1136,   425,   282,
     126,   217,   149,    44,  1143,   142,  1145,   223,   224,   156,
     437,  1077,   127,  1072,  1761,   127,    44,   437,   135,   446,
     373,    52,  1710,   450,   451,   162,  1136,  1517,    79,    80,
     450,   451,   315,  1143,    23,  1145,  1557,   320,   321,   466,
     136,  1192,   292,   315,   471,  1196,   318,   474,    79,    80,
    1518,   478,   163,  1088,  1089,  1802,   203,   204,   128,   129,
    1800,    23,   113,   490,   237,   315,    37,    36,   318,   319,
     490,    34,   425,   183,  1773,    44,   503,    40,   505,   189,
     292,   254,    53,    52,  1413,  1236,   197,   292,  1417,   292,
      37,    23,  1560,   446,    63,    64,    65,  1248,    61,   302,
     303,   292,   837,   315,   215,   216,    53,   292,   219,   314,
     315,   314,   315,   466,  1582,    48,   292,    50,   471,    24,
      25,   474,    23,   314,   315,   478,   291,   292,   304,  1597,
     315,  1190,  1600,  1601,   133,   134,  1195,   292,   314,    44,
     567,  1200,    37,   292,   188,  1204,  1614,   302,   313,   314,
     503,   316,   505,   302,   303,   199,   583,   579,    53,   314,
     315,    44,    44,    23,   591,   314,   315,   136,    23,    52,
      52,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   613,   614,  1305,   438,
    1519,   618,   619,   442,    37,  1254,    37,    37,   447,   619,
     627,   591,    23,    37,   453,    23,    26,    23,   598,    37,
      53,    37,    53,    53,   567,    37,   465,    37,  1357,    53,
     469,   470,  1690,   613,  1714,    53,    70,    53,    37,    37,
     583,    53,    37,   482,   483,   484,   485,  1296,  1297,    37,
      37,    37,   491,    36,    53,    53,    37,  1357,    53,   676,
      37,  1719,  1720,    37,    23,    53,    53,    53,  1748,    52,
    1319,    45,    53,   259,  1323,   618,    53,    26,   695,    23,
     266,   917,   699,    38,    39,  1743,    26,    26,    37,   699,
      17,    18,    19,    20,    21,    22,    52,    37,    37,    37,
     717,    28,   259,  1444,   261,    37,   699,    45,  1788,   259,
      13,   268,   269,    45,    41,    37,   266,   274,   557,    37,
      16,   177,   178,    45,   563,   564,  1467,    45,    37,   568,
     287,   288,   289,   676,    13,    37,    45,   754,   755,   756,
     757,    52,  1483,    45,   754,   755,   756,   757,    44,    45,
    1491,    37,   695,   250,  1495,   232,    52,   254,    54,    45,
      52,   754,   755,   240,   119,   120,   121,   122,   123,   124,
      37,    13,   142,   143,   717,   145,   146,   147,    45,   149,
     150,   798,    37,   192,    48,   489,    50,   804,   798,   493,
      45,   200,   119,   120,   121,   122,   123,   124,    37,    37,
      37,    37,    52,   642,    44,   798,    45,    45,    45,    45,
    1349,   176,  1350,   178,   831,   832,  1596,    37,    37,   658,
      37,   831,  1522,  1344,   804,    45,    45,    37,    45,   846,
      44,    37,    44,  1227,    52,    45,   846,    44,   831,    45,
    1306,   246,  1380,  1381,    34,    34,  1312,   686,   687,   253,
      40,    40,  1318,   116,   117,   182,   603,   604,   605,   606,
     607,   608,   220,   221,   222,   259,   883,   102,   103,   104,
     105,   326,   327,   883,    38,    39,  1656,    37,   895,  1528,
      63,    64,    65,   168,  1540,   169,   903,    38,    39,   832,
     225,   226,   227,   560,   561,   562,   290,  1604,   292,   293,
     294,   295,   296,   297,   298,   133,   134,   181,  1533,  1534,
     170,  1239,   180,   307,   308,   309,   310,   311,   312,   151,
     152,   172,  1250,  1251,   201,   202,   328,   329,   322,   323,
     324,  1259,   300,   301,   951,  1263,    25,  1265,  1266,    25,
    1268,   305,   306,  1271,  1272,   131,   132,   192,  1655,   183,
     184,   198,   895,   183,   184,   271,   272,  1282,   154,   155,
     903,  1741,    59,   259,  1744,    57,   262,   263,   264,   265,
      44,   267,   268,   168,   270,   110,   111,   273,   274,   275,
     276,   277,   278,   279,   280,   281,    25,  1636,   284,   285,
     286,    97,    98,    97,    98,   291,   292,   228,   229,  1648,
     154,   155,   190,   191,  1711,    33,  1786,   169,   951,   542,
     543,   549,   550,    20,    21,   551,   552,   313,   314,    44,
     316,  1804,  1805,   601,   602,    44,    44,    44,    44,   325,
      44,    44,   328,   329,    45,    44,    44,    52,    44,    44,
    1057,  1058,    45,    45,  1669,    45,    37,    13,    52,    37,
     164,   890,  1069,  1591,  1592,  1072,    52,  1713,    52,   171,
      13,   148,  1072,   142,   149,  1772,   171,    45,  1848,   164,
     164,  1778,   202,    74,   164,   202,   915,  1543,    63,  1072,
     164,  1547,  1782,  1790,  1791,  1792,  1793,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    37,    45,    45,
      45,    44,    14,  1810,  1811,   117,    45,    45,    45,    45,
      45,    45,   237,    70,   164,  1058,    14,  1824,   116,    52,
     237,   148,  1771,    54,   185,   185,  1069,    44,    37,    26,
      45,    45,    54,    54,    54,    54,   125,   136,    14,   136,
      14,   162,   162,  1609,  1851,    13,  1163,   142,    14,   141,
      44,  1168,    44,   146,  1171,    37,   255,   144,  1696,   101,
     256,   242,    94,   211,    27,    95,   242,   315,   259,   271,
     317,   292,  1189,  1190,   315,   315,   166,   259,  1195,    44,
    1190,    45,   166,  1200,   164,  1195,    16,  1204,    13,    45,
    1200,    45,    13,    13,  1204,   237,   237,  1190,   153,    45,
     108,   225,  1195,   107,    95,    41,   192,  1200,   136,   268,
    1227,  1204,  1189,   301,  1608,   144,   259,  1227,   283,   317,
    1163,    45,   300,   206,    41,  1168,   133,    14,  1171,    14,
      37,    47,    47,    13,  1227,    45,    44,  1254,   164,   144,
     167,    53,   212,   156,  1254,   107,   225,   136,    41,    37,
     153,   136,    13,   164,   203,   125,    23,    16,    44,   136,
     185,  1254,   185,    44,   133,   247,   167,   225,   164,    37,
      41,    37,  1284,    25,    14,  1292,    41,    41,   259,  1296,
    1297,   136,   292,  1300,   294,  1610,  1296,  1297,   259,  1306,
     185,    45,   142,   164,    45,  1312,   247,    30,    37,    37,
     218,  1318,  1319,  1296,  1297,    14,  1323,   125,    45,  1319,
     987,  1224,  1292,  1323,     3,  1245,   218,  1001,  1234,  1626,
     781,   786,   887,  1300,   407,   787,  1319,   213,   674,   677,
    1323,  1128,   909,   109,   679,  1107,   878,   524,   523,   572,
     937,  1305,  1535,   135,   321,   490,  1145,   450,  1365,   883,
     757,  1143,   916,  1357,  1569,  1339,  1161,  1353,  1378,  1692,
    1687,   669,  1201,  1306,  1604,  1541,  1205,   895,   443,  1312,
     443,   903,  1069,   899,   802,  1318,  1064,   599,    -1,   600,
      -1,    -1,    -1,    -1,    -1,   614,    -1,    -1,    -1,    -1,
    1407,    -1,    -1,  1232,    -1,  1412,  1413,    -1,  1237,  1238,
    1417,    -1,    -1,  1242,    -1,  1422,    -1,    -1,    -1,    -1,
    1249,    -1,    -1,    -1,  1431,    -1,  1255,    -1,  1257,    -1,
    1745,  1260,  1365,    -1,    -1,  1264,    -1,    -1,    -1,    -1,
    1269,    -1,    -1,    -1,    -1,    -1,    -1,  1276,    -1,    -1,
      -1,  1280,    -1,    -1,    -1,  1422,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1431,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1407,    -1,    -1,    -1,    -1,    -1,
    1413,    -1,    -1,    -1,  1417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,
     500,    -1,    -1,    -1,   504,    -1,   506,   507,   508,    -1,
      -1,   511,  1519,  1520,    -1,    -1,    -1,    -1,    -1,    -1,
     520,  1528,    -1,    -1,    -1,    -1,    -1,    -1,  1528,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1543,    -1,    -1,    -1,
    1547,    -1,    -1,    -1,    -1,  1528,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   569,
      -1,    -1,   572,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1519,  1520,    -1,   589,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1607,  1608,  1609,    -1,    -1,    -1,    -1,    -1,  1608,    -1,
    1543,    -1,    -1,    -1,  1547,  1622,  1623,    -1,    -1,  1626,
      -1,  1628,  1629,  1630,  1631,  1608,    -1,    -1,    -1,  1636,
      -1,    -1,    -1,    -1,    -1,   635,  1636,  1466,    -1,    -1,
    1607,  1648,    -1,    -1,    -1,    -1,    -1,    -1,  1648,    -1,
      -1,    -1,  1659,  1636,  1661,  1622,  1623,    -1,    -1,  1626,
      -1,  1628,  1629,  1630,  1631,  1648,    -1,    -1,    -1,    -1,
     670,    -1,    -1,    -1,    -1,    -1,  1609,    -1,    -1,   259,
     680,   681,   262,   263,   264,   265,    -1,   267,    -1,    -1,
     270,  1661,    -1,   273,   274,   275,   276,   277,   278,   279,
     280,   281,    -1,    -1,   284,   285,   286,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   718,    -1,
      -1,   721,   722,   723,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,    -1,    -1,   328,   329,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1771,    -1,  1773,    -1,    -1,    -1,
      -1,  1771,    -1,   773,   774,   775,   259,    -1,    -1,   262,
     263,   264,   265,    -1,   267,    -1,    -1,   270,  1771,    -1,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    -1,
      -1,   284,   285,   286,    -1,    -1,  1773,   259,  1637,    -1,
     262,   263,   264,   265,    -1,   267,    -1,    -1,   270,    -1,
    1649,   273,   274,   275,   276,   277,   278,   279,   280,   281,
      -1,    -1,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,    -1,    -1,   328,   329,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   863,   259,    -1,    -1,   262,   263,   264,
     265,    -1,   267,   325,    -1,   270,   328,   329,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    -1,    -1,   284,
     285,   286,   892,   893,   894,    -1,    -1,    -1,   898,   899,
      -1,    -1,   259,  1732,    -1,   262,   263,   264,   265,   909,
     267,    -1,    -1,   270,    -1,    -1,   273,   274,   275,   276,
     277,   278,   279,   280,   281,    -1,    -1,   284,   285,   286,
     325,    -1,    -1,   328,   329,   259,    -1,   937,   262,   263,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,    -1,   273,
     274,   275,   276,   277,   278,   279,   280,   281,    -1,    -1,
     284,   285,   286,    -1,    -1,    -1,    -1,    -1,   325,    -1,
     259,   328,   329,   262,   263,   264,   265,    -1,   267,    -1,
      -1,   270,    -1,    -1,   273,   274,   275,   276,   277,   278,
     279,   280,   281,    -1,    -1,   284,   285,   286,    -1,    -1,
      -1,   325,    -1,   259,   328,   329,   262,   263,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,    -1,   273,   274,   275,
     276,   277,   278,   279,   280,   281,    -1,    -1,   284,   285,
     286,    -1,    -1,    -1,    -1,    -1,   325,    -1,    -1,   328,
     329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,    -1,  1062,   262,   263,   264,   265,    -1,   267,   325,
      -1,   270,   328,   329,   273,   274,   275,   276,   277,   278,
     279,   280,   281,    -1,    -1,   284,   285,   286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1100,    -1,    -1,  1103,  1104,  1105,    -1,    -1,    -1,    -1,
      -1,  1111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1122,    -1,    -1,    -1,   325,    -1,  1128,   328,
     329,   259,    -1,    -1,   262,   263,   264,   265,    -1,   267,
      -1,    -1,   270,    -1,    -1,   273,   274,   275,   276,   277,
     278,   279,   280,   281,  1154,  1155,   284,   285,   286,   259,
      -1,    -1,   262,   263,   264,   265,    -1,   267,    -1,    -1,
     270,    -1,    -1,   273,   274,   275,   276,   277,   278,   279,
     280,   281,    -1,    -1,   284,   285,   286,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,    -1,
     328,   329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,    -1,    -1,   328,   329,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,    -1,  1324,  1325,   137,    -1,    -1,    -1,
    1330,   142,   143,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    -1,   199,   200,
     201,    -1,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,    -1,   262,   263,   264,
     265,    -1,   267,    -1,    -1,   270,    -1,    -1,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    -1,    -1,   284,
     285,   286,    -1,    -1,   259,    -1,    -1,   262,   263,   264,
     265,    -1,   267,    -1,    -1,   270,    -1,    -1,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    -1,    -1,   284,
     285,   286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
     325,   332,    -1,   328,   329,    -1,    -1,    -1,    -1,  1529,
      -1,    -1,  1532,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1544,    -1,    -1,    -1,  1548,    -1,
     325,    -1,  1552,   328,   329,   259,    -1,    -1,   262,   263,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,    -1,   273,
     274,   275,   276,   277,   278,   279,   280,   281,    -1,    -1,
     284,   285,   286,   259,    -1,    -1,   262,   263,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,    -1,   273,   274,   275,
     276,   277,   278,   279,   280,   281,    -1,    -1,   284,   285,
     286,    -1,   259,    -1,    -1,   262,   263,   264,   265,    -1,
     267,   325,    -1,   270,   328,   329,   273,   274,   275,   276,
     277,   278,   279,   280,   281,    -1,    -1,   284,   285,   286,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
      -1,    -1,   328,   329,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,
     259,   328,   329,   262,   263,   264,   265,    -1,   267,    -1,
      -1,   270,    -1,    -1,   273,   274,   275,   276,   277,   278,
     279,   280,   281,    -1,    -1,   284,   285,   286,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,   325,    -1,    -1,   328,
     329,    -1,    -1,    -1,    58,    -1,  1756,  1757,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,  1812,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,    -1,    -1,    -1,  1825,    -1,   131,   132,   133,
      -1,    -1,   136,   137,   138,   139,    -1,    -1,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,    -1,   199,   200,   201,    -1,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,    -1,    -1,   136,   137,
     138,   139,    -1,    -1,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      -1,   199,   200,   201,    -1,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,   133,    -1,    -1,   136,   137,   138,   139,    -1,    -1,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,   200,   201,
      -1,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    28,    -1,    -1,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,
     136,   137,   138,   139,    -1,    -1,   142,   143,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,   199,   200,   201,    -1,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,
      -1,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,    -1,    -1,   136,   137,   138,   139,
      -1,    -1,   142,   143,   144,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,    -1,   199,
     200,   201,    -1,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,
      -1,    -1,   136,   137,   138,   139,    -1,    -1,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,    -1,   199,   200,   201,    -1,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    39,    40,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,    -1,    -1,   136,   137,
     138,   139,    -1,    -1,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      -1,   199,   200,   201,    -1,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    39,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,   133,    -1,    -1,   136,   137,   138,   139,    -1,    -1,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,   200,   201,
      -1,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    28,    -1,    -1,    31,    32,    -1,    34,    -1,
      36,    -1,    38,    39,    40,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,
     136,   137,   138,   139,    -1,    -1,   142,   143,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,   199,   200,   201,    -1,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,
      -1,    31,    32,    -1,    34,    -1,    36,    -1,    38,    39,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,    -1,    -1,   136,   137,   138,   139,
      -1,    -1,   142,   143,   144,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,    -1,   199,
     200,   201,    -1,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,
      -1,    -1,   136,   137,   138,   139,    -1,    -1,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,    -1,   199,   200,   201,    -1,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,    -1,    -1,   136,   137,
     138,   139,    -1,    -1,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      -1,   199,   200,   201,    -1,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,   133,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,    -1,    -1,
     162,    -1,   164,    -1,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,   200,   201,
      -1,    -1,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,    -1,    -1,    -1,   137,
     138,   139,    -1,    -1,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      -1,   199,   200,   201,    -1,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,
      -1,    -1,    -1,   137,   138,   139,    -1,    -1,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,    -1,   199,   200,   201,    -1,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,    -1,    -1,    -1,   137,   138,   139,
      -1,    -1,   142,   143,   144,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,    -1,   199,
     200,   201,    -1,   203,   204,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,
      -1,   137,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,   199,   200,   201,    -1,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,   133,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,   200,   201,
      -1,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      -1,   199,   200,   201,    -1,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,   136,
     137,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,    -1,    -1,   162,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,    -1,   199,   200,   201,    -1,    -1,   204,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,
     136,   137,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,    -1,    -1,   162,    -1,   164,    -1,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,   199,   200,   201,    -1,    -1,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,    -1,    -1,    -1,   137,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    -1,   199,   200,
     201,    -1,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,
      -1,   137,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,   199,   200,   201,    -1,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,   133,    -1,    -1,   136,   137,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,   200,   201,
      -1,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      -1,   199,   200,   201,    -1,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,
      -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,    -1,   199,   200,   201,    -1,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      -1,   199,   200,   201,    -1,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,    -1,
      -1,    -1,   137,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,    -1,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,    -1,   199,   200,   201,    -1,   203,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,   133,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,    -1,    -1,
     162,    -1,   164,    -1,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,   200,   201,
      -1,    -1,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,    -1,   259,    -1,
      -1,   262,   263,   264,   265,    -1,   267,    -1,    -1,   270,
      -1,    -1,   273,   274,   275,   276,   277,   278,   279,   280,
     281,    -1,    -1,   284,   285,   286,   259,    -1,    -1,   262,
     263,   264,   265,    -1,   267,    -1,    -1,   270,    -1,    -1,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    -1,
      -1,   284,   285,   286,    -1,   259,    -1,    -1,   262,   263,
     264,   265,    -1,   267,   325,    -1,   270,   328,   329,   273,
     274,   275,   276,   277,   278,   279,   280,   281,    -1,    -1,
     284,   285,   286,   259,    -1,    -1,   262,   263,   264,   265,
      -1,   267,   325,    -1,   270,   328,   329,   273,   274,   275,
     276,   277,   278,   279,   280,   281,    -1,    -1,   284,   285,
     286,    -1,   259,    -1,    -1,   262,   263,   264,   265,    -1,
     267,   325,    -1,   270,   328,   329,   273,   274,   275,   276,
     277,   278,   279,   280,   281,    -1,    -1,   284,   285,   286,
      -1,    -1,    -1,   262,   263,   264,   265,    -1,   267,   325,
      -1,   270,   328,   329,   273,   274,   275,   276,   277,   278,
     279,   280,   281,    -1,    -1,   284,   285,   286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,
      -1,   328,   329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,    -1,   328,
     329
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   337,    13,    15,    24,    28,    31,    32,    34,    36,
      38,    39,    40,    42,    43,    44,    58,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     119,   120,   121,   122,   123,   124,   125,   131,   132,   133,
     136,   137,   138,   139,   142,   143,   144,   145,   146,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   199,   200,
     201,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   347,   348,   489,
     490,   491,   492,   493,   494,   496,   501,   512,   515,   521,
     522,   524,   525,   526,   527,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   568,   569,   570,   571,   572,   575,   576,   577,
     588,   590,   592,   593,   594,   597,   599,   600,   601,   602,
     612,   613,   614,   615,   616,   617,   618,   619,   621,   623,
     625,   666,   667,   668,   669,   670,   671,   672,   675,   676,
     677,   678,   680,   687,   688,   692,   693,   694,   695,   706,
     709,   712,   731,   732,   338,   260,   325,   361,   362,   386,
     338,   338,   354,   475,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   114,   131,   132,   143,   145,
     157,   158,   160,   161,   165,   179,   185,   203,   230,   233,
     239,   241,   248,   249,   251,   252,   714,   716,   731,   732,
      38,    39,    44,    58,    63,    64,    65,   136,   165,   715,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   732,
      44,    66,    67,    71,    74,    75,   186,   203,   248,   249,
     608,   610,   611,   612,   680,   696,   697,   698,   699,   701,
     702,   705,   338,     0,   567,   731,   560,   133,   134,   578,
     140,   118,   589,   549,   116,   580,   540,   540,    45,   490,
     731,   330,   332,   350,   689,   731,    23,    44,    52,   135,
     598,    44,    52,    44,    44,    44,    44,    52,   135,   603,
      44,    44,    44,    52,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    52,    13,   673,   674,    52,
      52,    13,   497,   498,    13,   206,   502,   503,    13,   513,
     514,   513,    44,    44,    44,    52,    79,    80,    23,   603,
      44,    52,   135,   595,    44,   481,    70,   115,    70,   238,
      70,    70,   238,    52,    52,   246,   253,    37,   142,   143,
     145,   146,   147,   149,   150,   494,   495,   504,   505,   506,
     162,   195,   523,   168,   169,    17,    18,    19,    20,    21,
      22,    28,    41,   119,   120,   121,   122,   123,   124,   182,
      60,   207,    38,    39,   173,    15,    81,   174,   175,    16,
     176,   177,   178,   170,   181,   172,   180,    52,   545,   549,
      34,    40,    61,    25,    25,   560,   560,    24,    25,    44,
     491,   491,    44,    55,   198,   447,   448,   363,   387,   192,
     352,   355,   448,    56,   243,   476,   477,   481,   484,    59,
     718,    57,   725,   725,   719,   728,   729,   731,    44,   168,
     169,    38,    39,   119,   120,   121,   122,   123,   124,    15,
      81,   174,   175,    25,    44,   610,    44,    44,    44,    44,
      15,    27,    38,   609,   205,   484,   339,   340,   579,   116,
     117,   591,    33,   731,    45,    44,    15,    45,   620,   627,
     680,   490,    52,   596,    45,   490,    45,    73,   203,   623,
     625,    45,    45,    45,   136,   679,   731,   490,    52,   604,
     622,   627,   626,   628,   680,    45,   490,   490,   567,    37,
     231,   490,   490,   567,    37,   567,    13,    37,   567,    37,
     159,   159,   490,   490,   490,   490,    52,    52,   596,    15,
      45,   624,   628,   490,   596,    13,    45,   486,   487,   164,
     607,   491,   171,   491,    53,   707,   708,   731,    53,   491,
     710,   711,   731,   491,   491,   491,   491,    13,   148,   149,
     491,   142,   142,   162,   526,   527,   529,   529,   529,   529,
     529,   529,   528,   529,   529,   529,   529,   529,   529,   529,
     529,   531,    74,   533,   533,   532,   534,   534,   534,   534,
     535,   535,   536,   536,   171,   164,   164,   164,    53,   490,
     550,   550,   550,   490,   490,   731,   490,    27,    45,   491,
     573,   574,   164,   234,   235,   242,    45,   573,    63,   188,
     199,   449,   450,   202,   451,   452,   453,   454,   290,   299,
     364,   326,   327,   389,   475,   202,   356,   731,   164,   482,
     491,   730,   719,    45,    37,   719,   721,   722,   724,   724,
     723,   723,   723,   723,   723,   723,   725,   725,   725,   725,
     719,   728,    45,    45,    45,    45,   703,   704,   731,    45,
     611,    44,    13,    62,   341,   342,   343,   732,   116,   580,
     117,   116,   141,   546,   349,   491,    37,    45,    53,    53,
     490,    53,    45,    45,    45,    45,    53,    53,   490,    45,
      45,    53,    53,    14,   674,   491,    53,    53,   607,   498,
     607,   567,   503,   607,   514,   491,   491,    45,    45,    45,
      53,   490,   490,    37,    45,    53,   567,    37,    45,   608,
      52,   488,   237,    70,   164,    37,    53,   607,    14,    37,
      53,   237,   237,   254,   567,   491,   507,   508,   509,   148,
     491,   491,   491,   529,    44,    52,   257,   544,   564,   631,
     634,   635,   636,   637,   638,   639,   640,   641,   608,   608,
     605,   611,   605,    53,    26,    26,    26,    37,    45,   232,
     240,   491,   491,   491,    45,   136,   136,    54,   450,   457,
     457,   185,   454,   192,   200,   455,   456,   458,   459,   460,
     461,   462,   463,   464,   465,   468,   469,   470,   473,   474,
     478,   480,   489,   665,   681,   713,   259,   261,   268,   269,
     274,   287,   288,   289,   365,   366,   369,   370,   374,   375,
     376,   377,   378,   379,   382,   383,   384,   385,   388,   259,
     262,   263,   264,   265,   267,   270,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   284,   285,   286,   328,   329,
     386,   390,   391,   392,   393,   394,   395,   396,   399,   400,
     404,   405,   406,   407,   408,   413,   414,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   204,   185,   357,
      44,   608,   146,   717,   717,   719,    45,    26,    45,    37,
      45,   607,    37,    15,    45,   608,   700,   567,   133,   330,
     331,   344,   345,   686,    54,    54,    54,   481,   133,   134,
      29,    46,   141,    54,   351,   629,   680,    53,    53,   491,
     142,   125,   499,    14,    14,   144,   162,   516,   518,   519,
     523,   166,    53,    53,   629,   607,   487,   490,   491,   491,
     491,   708,    14,   491,   711,    44,    44,   689,    37,   151,
     152,   510,   507,   631,   490,   638,    52,   220,   221,   222,
     642,   101,   664,   255,   633,   256,    94,    95,   648,   211,
     643,    27,   606,   574,   242,   242,   457,   679,   192,   200,
      76,    77,    78,   185,   193,   194,   195,   196,   197,   236,
     246,   258,   475,   201,   202,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   300,   301,   291,   292,   313,
     314,   316,   371,   292,   304,   314,   371,   292,   302,   303,
     314,   315,   389,   292,   314,   315,   389,   259,   290,   292,
     293,   294,   295,   296,   297,   298,   307,   308,   309,   310,
     311,   312,   322,   323,   324,   259,   292,   314,   259,   126,
     488,   394,   315,   271,   409,   410,   411,   317,   315,   318,
     389,   291,   315,   398,   292,   401,   259,   389,   282,   315,
     320,   321,   415,   292,   314,   315,   389,   315,   389,   292,
     315,   389,   389,   292,   315,   318,   319,   389,   292,   315,
     389,   292,   319,   389,   259,   305,   315,   305,   306,   389,
     315,   389,   732,   679,   192,   358,   359,   360,   485,   564,
     491,   718,   166,   704,   608,    45,   164,    37,    45,   607,
      44,    16,   482,   580,   580,   587,    13,   690,   691,    45,
      45,   491,    13,   206,   500,   491,   491,   491,    13,   520,
     195,   517,   518,    16,   142,   142,   491,    27,    45,    53,
     237,   491,   690,   690,   237,   508,   153,   511,    45,    53,
      53,   631,   108,   225,   107,   635,   106,   125,   131,   208,
     209,   210,   213,   214,   632,   645,   636,   144,    96,    99,
     102,   103,   104,   105,   163,   197,   215,   216,   219,   649,
     650,   651,   652,   653,   656,   661,   662,   663,    95,   130,
     223,   224,   644,   491,   491,    41,   183,   184,   648,   136,
     630,   679,   183,   184,   131,   132,   149,   156,   203,   204,
     183,   189,   466,   731,    79,    80,   113,   250,   254,   684,
     731,   137,   204,   185,   195,   472,   630,   185,   630,   301,
     300,   367,    24,    34,    40,    66,    82,   244,   245,   437,
     438,   439,   440,   443,   444,   445,   560,   608,    63,    64,
      65,   368,   268,   372,   373,   389,   608,   389,   608,   490,
     259,   608,   490,   259,    74,   133,   333,   334,   335,   380,
     133,   381,   381,   610,   259,   490,   317,   272,   410,   412,
     389,   490,   490,   388,   259,   133,   330,   332,   397,   490,
     259,   266,   402,   403,   259,   402,   259,   389,   490,   388,
     388,   283,   416,   608,   490,   259,   490,   259,   388,   490,
     259,   259,   388,   490,   388,   388,   259,   388,   490,   259,
     388,   388,   259,   490,   259,   490,   259,   481,    41,   185,
     197,   475,    37,    45,   719,    45,   608,   608,   164,    14,
     437,   686,    14,    47,    47,    35,   128,   129,   488,   576,
     567,    37,   567,    13,   144,   567,   608,    13,   142,   608,
     491,   491,   167,    45,   491,    45,    45,    44,   154,   155,
     156,   642,    53,   534,   107,   110,   111,   531,   532,   644,
     228,   229,   647,   647,   637,   102,   103,   104,   105,    97,
      98,    44,   125,   195,   655,   225,    97,    98,   731,   678,
     649,   112,   155,   532,   532,   212,   630,    41,   153,   630,
     185,   185,    37,   136,   731,   685,   686,   247,   164,    13,
     732,   679,   203,   630,   125,   471,   679,   471,   133,   330,
     331,   560,    23,    23,    44,    44,    16,   444,    34,    40,
      34,    40,   446,   292,   302,   303,   314,   315,   389,   259,
     259,   133,   490,   389,   259,   259,   292,   302,   314,   315,
     389,   259,   389,   259,   389,   482,   630,   679,   731,   204,
     564,   167,   608,   491,    54,   346,   491,   580,   580,   578,
     607,   691,   567,   491,   164,   567,   491,   491,   690,   630,
     225,   226,   227,   646,   646,   225,   195,   655,   630,    44,
     125,   195,   658,   136,   532,   532,   173,   457,   630,   154,
     155,   630,   630,   190,   191,   467,    44,   488,   683,   684,
      37,   437,   610,   567,   481,    41,   185,   471,   630,    37,
      41,   560,   560,   441,   566,   678,   678,   438,   444,   444,
     444,   444,    25,   608,   490,   259,   259,   608,   490,   259,
     259,   488,   457,    41,   136,   732,   719,   486,    45,    48,
      50,   581,    48,    50,   582,   580,    14,   142,    45,   654,
     654,   217,   644,   659,   678,   630,   657,   657,   532,    45,
     486,   164,   682,   247,   686,   488,   683,   607,   482,   630,
     630,    45,    37,   490,   353,   457,   630,   457,   481,   482,
     583,   585,   584,   586,    30,   491,   491,    37,    45,    45,
     678,   218,    37,    45,   176,   178,   660,    45,   608,   488,
     437,   682,    14,   187,   479,   187,   483,   488,   471,   442,
     564,   566,    26,   457,   482,    14,    49,   126,   488,    51,
     127,   488,    49,   126,   488,    51,   127,   488,   655,   644,
     678,   658,   658,   488,   683,   488,   491,    45,   488,   491,
     218,   682,   457,   488
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 10:

/* Line 1455 of yacc.c  */
#line 828 "../src/parser/XQParser.y"
    {
    QP->_seqType = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 836 "../src/parser/XQParser.y"
    {
    BuiltInModules::addNamespaces(CONTEXT);
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 845 "../src/parser/XQParser.y"
    {
    SequenceType *optionalString =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) SequenceType((ItemType*)&ItemType::ANY_ATOMIC_TYPE, SequenceType::QUESTION_MARK));

    XQGlobalVariable *nameVar =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, optionalString,
                                             WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR)), MEMMGR, /*isParam*/true));
    nameVar->setVariableURI(XQillaFunction::XMLChFunctionURI);
    nameVar->setVariableLocalName(var_name);

    QP->_query->addVariable(nameVar);

    ASTNode *nameVarRef1 = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR));
    XQCallTemplate *call = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate(nameVarRef1, 0, MEMMGR));

    ASTNode *ci = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
    ASTNode *apply = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(ci, 0, 0, MEMMGR));

    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR)));
    ASTNode *exists = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                                           MEMMGR->getPooledString("exists"), args, MEMMGR));

    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQIf(exists, call, apply, MEMMGR)));
  }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 881 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQGlobalVariable((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].sequenceType), (yyvsp[(5) - (5)].astNode), MEMMGR)));
  }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 888 "../src/parser/XQParser.y"
    {
    FunctionSignature *sig = new (MEMMGR) FunctionSignature(MEMMGR);
    sig->argSpecs = (yyvsp[(2) - (5)].argSpecs);
    sig->returnType = (yyvsp[(3) - (5)].sequenceType);
    XQUserFunction* decl=WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(1) - (5)].str), sig, (yyvsp[(5) - (5)].astNode), true, MEMMGR));
    QP->_query->addFunction(decl);
  }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 899 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (9)].argSpecs), (yyvsp[(7) - (9)].sequenceType), MEMMGR);
    XQUserFunction* decl=WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(4) - (9)].itemList), signature, (yyvsp[(9) - (9)].astNode), MEMMGR));
    decl->setModeList((yyvsp[(2) - (9)].modeList));
    QP->_query->addFunction(decl);
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 909 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 918 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 923 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 931 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 935 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (2)].argSpecs);
  }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 944 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQApplyTemplates((yyvsp[(4) - (6)].astNode), (yyvsp[(5) - (6)].templateArgs), (yyvsp[(2) - (6)].mode), MEMMGR));
  }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 951 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();

    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQStep(Node::CHILD, nt, MEMMGR));
  }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 964 "../src/parser/XQParser.y"
    {
    (yyval.mode) = 0;
  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 972 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = 0;
  }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 976 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(2) - (2)].templateArgs);
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 986 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 997 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1006 "../src/parser/XQParser.y"
    {
    printf("  { DelayedModule::Decl::NONE, 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_declarations };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1017 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));

    QP->_moduleName = (yyvsp[(3) - (6)].str);

    UTF8Str module(QP->_moduleName);
    UTF8Str file(QP->_lexer->getFile());

    printf("// Auto-generated by compile-delayed-module from %s\n", file.str());
    printf("// DO NOT EDIT\n\n");

    printf("// %s\n", file.str());
    printf("static const XMLCh %s_file[] = { ", module.str());
    const XMLCh *ptr = QP->_lexer->getFile();
    for(; *ptr != 0; ++ptr) {
      printf("%d, ", *ptr);
    }
    printf("0 };\n\n");

    printf("// %s\n", UTF8((yyvsp[(3) - (6)].str)));
    printf("static const XMLCh %s_prefix[] = { ", module.str());
    ptr = (yyvsp[(3) - (6)].str);
    for(; *ptr != 0; ++ptr) {
      printf("%d, ", *ptr);
    }
    printf("0 };\n\n");

    printf("// %s\n", UTF8((yyvsp[(5) - (6)].str)));
    printf("static const XMLCh %s_uri[] = { ", module.str());
    ptr = (yyvsp[(5) - (6)].str);
    for(; *ptr != 0; ++ptr) {
      printf("%d, ", *ptr);
    }
    printf("0 };\n\n");
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1056 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::Decl %s_declarations[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1066 "../src/parser/XQParser.y"
    {
    XMLBuffer buf;

    // Call staticResolution on the function signature, to resolve the annotation names
    (yyvsp[(2) - (8)].signature)->staticResolution(CONTEXT);

    const XMLCh *localname = XPath2NSUtils::getLocalName((yyvsp[(4) - (8)].str));
    DM_outputDecl("FUNCTION", UTF8(localname), (int)((yyvsp[(5) - (8)].argSpecs) ? (yyvsp[(5) - (8)].argSpecs)->size() : 0),
                  (yyvsp[(2) - (8)].signature)->isPrivate(), (yylsp[(1) - (8)]).first_line, (yylsp[(1) - (8)]).first_column,
                  ((XQLexer*)QP->_lexer)->getQueryString() + (yylsp[(1) - (8)]).first_offset,
                  (yylsp[(8) - (8)]).last_offset - (yylsp[(1) - (8)]).first_offset);
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1082 "../src/parser/XQParser.y"
    {
    // validate the QName
    QualifiedName qName((yyvsp[(3) - (5)].str));
    const XMLCh* prefix = qName.getPrefix();
    if(prefix == 0 || *prefix == 0)
      yyerror((yylsp[(3) - (5)]), "The option name must have a prefix [err:XPST0081]");

    const XMLCh *uri = 0;
    try {
      LOCATION((yylsp[(3) - (5)]), loc);
      uri = CONTEXT->getUriBoundToPrefix(prefix, &loc);
    }
    catch(NamespaceLookupException&) {
      yyerror((yylsp[(3) - (5)]), "The option name is using an undefined namespace prefix [err:XPST0081]");
    }

    if(XPath2Utils::equals(uri, XQRewriteRule::URI)) {
      if(XPath2Utils::equals(qName.getName(), option_rule)) {
        DM_outputDecl("REWRITE_RULE", "", 0, false, (yylsp[(4) - (5)]).first_line, (yylsp[(4) - (5)]).first_column + 1,
                      (yyvsp[(4) - (5)].str), XPath2Utils::intStrlen((yyvsp[(4) - (5)].str)));
      }
    }
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1109 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
    DM_outputDecl("NAMESPACE", UTF8((yyvsp[(3) - (6)].str)), 0, false, (yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column,
                  (yyvsp[(5) - (6)].str), XPath2Utils::intStrlen((yyvsp[(5) - (6)].str)));
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1122 "../src/parser/XQParser.y"
    {
    SequenceType *optionalString =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) SequenceType((ItemType*)&ItemType::ANY_ATOMIC_TYPE, SequenceType::QUESTION_MARK));

    XQGlobalVariable *nameVar =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, optionalString,
                                             WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR)), MEMMGR, /*isParam*/true));
    nameVar->setVariableURI(XQillaFunction::XMLChFunctionURI);
    nameVar->setVariableLocalName(var_name);

    QP->_query->addVariable(nameVar);

    ASTNode *nameVarRef1 = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR));
    XQCallTemplate *call = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate(nameVarRef1, 0, MEMMGR));

    ASTNode *ci = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
    ASTNode *apply = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(ci, 0, 0, MEMMGR));

    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR)));
    ASTNode *exists = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                                           MEMMGR->getPooledString("exists"), args, MEMMGR));

    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQIf(exists, call, apply, MEMMGR)));
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1151 "../src/parser/XQParser.y"
    {
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1154 "../src/parser/XQParser.y"
    {
    // TBD Check for xsl:version attr - jpcs
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();

    VectorOfASTNodes *pattern = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    pattern->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::SELF, nt, MEMMGR)));

    XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    modelist->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));

    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, pattern, signature, (yyvsp[(1) - (1)].astNode), MEMMGR));
    func->setModeList(modelist);

    QP->_query->addFunction(func);
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1178 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1182 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1201 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0 && (yyvsp[(1) - (4)].functDecl)->getPattern() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:template declaration does not have either a {}name or {}match attribute, or both [err:XTSE0500]");
    }

    if((yyvsp[(1) - (4)].functDecl)->getPattern() != 0 && (yyvsp[(1) - (4)].functDecl)->getModeList() == 0) {
      XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
      modelist->push_back(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
      (yyvsp[(1) - (4)].functDecl)->setModeList(modelist);
    }

    (yyvsp[(1) - (4)].functDecl)->getSignature()->argSpecs = (yyvsp[(2) - (4)].argSpecs);
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1220 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1225 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1230 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1237 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1242 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1247 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1255 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1259 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1265 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1270 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1280 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->getSignature()->argSpecs = (yyvsp[(2) - (4)].argSpecs);
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1293 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1298 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1305 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1310 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1318 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1322 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1330 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);

    if((yyval.argSpec)->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:param instruction does not have a {}name attribute");
    }

    if((yyval.argSpec)->getType() == 0) {
      (yyval.argSpec)->setType(WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR)));
    }

    // TBD default parameter values - jpcs

/*     if(!$2->getChildren().empty()) { */
/*       if($$->value != 0) { */
/*         yyerror(@1, "The xsl:with-param instruction has both a select attribute and a sequence constructor [err:XTSE0870]"); */
/*       } */
/*       $$->value = $2; */
/*     } */
/*     else if($$->value == 0) { */
/*       yyerror(@1, "The xsl:with-param instruction has neither a select attribute nor a sequence constructor [err:XTSE0870]"); */
/*     } */
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1357 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1361 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1368 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1374 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1379 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1384 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1393 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].globalVar)->isRequired()) {
      if((yyvsp[(1) - (3)].globalVar)->getVariableExpr() != 0 || !(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
        yyerror((yylsp[(1) - (3)]), "A required xsl:param declaration must be empty and must not specify a {}select attribute");
      }
    }
    else {
      (yyvsp[(1) - (3)].globalVar)->setVariableExpr(XSLT_VARIABLE_VALUE((yylsp[(1) - (3)]), (ASTNode*)(yyvsp[(1) - (3)].globalVar)->getVariableExpr(), (yyvsp[(2) - (3)].parenExpr), (SequenceType*)(yyvsp[(1) - (3)].globalVar)->getSequenceType()));

      if((yyvsp[(1) - (3)].globalVar)->getVariableExpr() == 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:param declaration has both a select attribute and a sequence constructor [err:XTSE0620]");
      }
    }

    if((yyvsp[(1) - (3)].globalVar)->getVariableLocalName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:param declaration does not have a {}name attribute");
    }

    QP->_query->addVariable((yyvsp[(1) - (3)].globalVar));
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1417 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1421 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1428 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1433 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1438 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1443 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1454 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(XSLT_VARIABLE_VALUE((yylsp[(1) - (3)]), (ASTNode*)(yyvsp[(1) - (3)].globalVar)->getVariableExpr(), (yyvsp[(2) - (3)].parenExpr), (SequenceType*)(yyvsp[(1) - (3)].globalVar)->getSequenceType()));
    (yyvsp[(1) - (3)].globalVar)->setSequenceType(0);

    if((yyvsp[(1) - (3)].globalVar)->getVariableExpr() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:variable declaration has both a select attribute and a sequence constructor [err:XTSE0620]");
    }

    if((yyvsp[(1) - (3)].globalVar)->getVariableLocalName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:variable declaration does not have a {}name attribute");
    }

    QP->_query->addVariable((yyvsp[(1) - (3)].globalVar));
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1472 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1476 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1483 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1488 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1496 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1521 "../src/parser/XQParser.y"
    {
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1524 "../src/parser/XQParser.y"
    {
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1527 "../src/parser/XQParser.y"
    {
  }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1530 "../src/parser/XQParser.y"
    {
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1533 "../src/parser/XQParser.y"
    {
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1536 "../src/parser/XQParser.y"
    {
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1539 "../src/parser/XQParser.y"
    {
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1542 "../src/parser/XQParser.y"
    {
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1545 "../src/parser/XQParser.y"
    {
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1548 "../src/parser/XQParser.y"
    {
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1551 "../src/parser/XQParser.y"
    {
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1554 "../src/parser/XQParser.y"
    {
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1557 "../src/parser/XQParser.y"
    {
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1560 "../src/parser/XQParser.y"
    {
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1563 "../src/parser/XQParser.y"
    {
  }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1566 "../src/parser/XQParser.y"
    {
  }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1569 "../src/parser/XQParser.y"
    {
  }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1572 "../src/parser/XQParser.y"
    {
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1582 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1594 "../src/parser/XQParser.y"
    {
  }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1597 "../src/parser/XQParser.y"
    {
  }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1603 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].alias)->getName() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:type-alias declaration does not have a {}name attribute");
    }
    if((yyvsp[(1) - (2)].alias)->getType() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:type-alias declaration does not have an {}as attribute");
    }

    QP->_query->addTypeAlias((yyvsp[(1) - (2)].alias));
  }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1617 "../src/parser/XQParser.y"
    {
    (yyval.alias) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTypeAlias(0, 0, MEMMGR));
  }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1621 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].alias)->setURI(uri);
    (yyvsp[(1) - (2)].alias)->setName(name);
    (yyval.alias) = (yyvsp[(1) - (2)].alias);
  }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1628 "../src/parser/XQParser.y"
    {
    (yyval.alias) = (yyvsp[(1) - (3)].alias);
    (yyval.alias)->setType((yyvsp[(3) - (3)].itemType));
  }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1638 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1643 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1648 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1656 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1664 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1675 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1685 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1689 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1696 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1705 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1709 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1714 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1722 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1726 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1731 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1736 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1765 "../src/parser/XQParser.y"
    {
    XQTextConstructor *text = (XQTextConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = text;

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(text->getValue() != 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:value-of instruction has both a select attribute and a sequence constructor [err:XTSE0870]");
      }
      text->setValue((yyvsp[(2) - (3)].parenExpr));
    }
    else if(text->getValue() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:value-of instruction has neither a select attribute nor a sequence constructor [err:XTSE0870]");
    }
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1783 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1787 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1792 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1801 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1810 "../src/parser/XQParser.y"
    {
    // TBD xsl:sort - jpcs
    XQApplyTemplates *apply = (XQApplyTemplates*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = apply;

    apply->setArguments((yyvsp[(2) - (3)].templateArgs));

    if(apply->getExpression() == 0) {
      NodeTest *nt = new (MEMMGR) NodeTest();
      nt->setTypeWildcard();
      nt->setNameWildcard();
      nt->setNamespaceWildcard();

      apply->setExpression(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(Node::CHILD, nt, MEMMGR)));
    }
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1830 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1834 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1839 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1847 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1852 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1856 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1863 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1867 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1875 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1888 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1892 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1902 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1906 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1914 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);

    if((yyval.templateArg)->name == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:with-param instruction does not have a {}name attribute");
    }

    (yyvsp[(1) - (3)].templateArg)->value = XSLT_VARIABLE_VALUE((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].templateArg)->value, (yyvsp[(2) - (3)].parenExpr), (yyvsp[(1) - (3)].templateArg)->seqType);
    (yyvsp[(1) - (3)].templateArg)->seqType = 0;

    if((yyvsp[(1) - (3)].templateArg)->value == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:with-param instruction has both a select attribute and a sequence constructor [err:XTSE0870]");
    }
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1932 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1936 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1943 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1948 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1953 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1961 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1967 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1975 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1983 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1990 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2004 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2008 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2022 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2031 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2038 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2042 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2049 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs

    XQAnalyzeString *as = (XQAnalyzeString*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (4)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:analyze-string instruction does not have a {}select attribute");
    }

    if(as->getRegex() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:analyze-string instruction does not have a {}regex attribute");
    }

    if((yyvsp[(2) - (4)].astNode) == 0) {
      if((yyvsp[(3) - (4)].astNode) == 0) {
        yyerror((yylsp[(1) - (4)]), "The xsl:analyze-string instruction doesn't contain an xsl:matching-substring or xsl:non-matching-substring child [err:XTSE1130]");
      }

      as->setMatch(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
    else {
      as->setMatch((yyvsp[(2) - (4)].astNode));
    }
    if((yyvsp[(3) - (4)].astNode) == 0) {
      as->setNonMatch(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
    else {
      as->setNonMatch((yyvsp[(3) - (4)].astNode));
    }
  }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 2084 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2088 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2093 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2099 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2108 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2112 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2119 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2123 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2130 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (4)].letTuple)->setExpression(XSLT_VARIABLE_VALUE((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].letTuple)->getExpression(), (yyvsp[(2) - (4)].parenExpr), (yyvsp[(1) - (4)].letTuple)->getVar()->getType()));
    const_cast<ArgumentSpec*>((yyvsp[(1) - (4)].letTuple)->getVar())->setType(0);

    if((yyvsp[(1) - (4)].letTuple)->getExpression() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction has both a select attribute and a sequence constructor [err:XTSE0620]");
    }

    if((yyvsp[(1) - (4)].letTuple)->getVarName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction does not have a {}name attribute");
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQReturn((yyvsp[(1) - (4)].letTuple), (yyvsp[(4) - (4)].parenExpr), MEMMGR));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2148 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), (XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2152 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2159 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2164 "../src/parser/XQParser.y"
    {
    const_cast<ArgumentSpec*>((yyvsp[(1) - (3)].letTuple)->getVar())->setType((yyvsp[(3) - (3)].sequenceType));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2172 "../src/parser/XQParser.y"
    {
    XQCommentConstructor *comment = (XQCommentConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = comment;

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(comment->getValue() != 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:comment instruction has both a select attribute and a sequence constructor [err:XTSE0940]");
      }
      comment->setValue((yyvsp[(2) - (3)].parenExpr));
    }
    else if(comment->getValue() == 0) {
      comment->setValue(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2190 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2194 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2202 "../src/parser/XQParser.y"
    {
    XQPIConstructor *pi = (XQPIConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = pi;

    if(pi->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:processing-instruction instruction does not have a {}name attribute");
    }

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(pi->getValue() != 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:processing-instruction instruction has both a select attribute and a sequence constructor [err:XTSE0880]");
      }
      pi->setValue((yyvsp[(2) - (3)].parenExpr));
    }
    else if(pi->getValue() == 0) {
      pi->setValue(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2224 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2228 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2235 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2243 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2252 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2260 "../src/parser/XQParser.y"
    {
    XQAttributeConstructor *attr = (XQAttributeConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = attr;

    if(attr->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:attribute instruction does not have a {}name attribute");
    }

    if(attr->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      args->push_back(attr->namespaceExpr);
      args->push_back(const_cast<ASTNode*>(attr->getName()));
      ASTNode *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("QName"), args, MEMMGR));
      attr->setName(name);
      attr->namespaceExpr = 0;
    }

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(attr->getChildren() != 0 && !attr->getChildren()->empty()) {
        yyerror((yylsp[(1) - (3)]), "The xsl:attribute instruction has both a select attribute and a sequence constructor [err:XTSE0840]");
      }

      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
      attr->setChildren(children);
    }
    else if(attr->getChildren() == 0) {
      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      children->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
      attr->setChildren(children);
    }
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2298 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2302 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2309 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2316 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2325 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2334 "../src/parser/XQParser.y"
    {
    XQNamespaceConstructor *ns = (XQNamespaceConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = ns;

    if(ns->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:namespace instruction does not have a {}name attribute");
    }

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(ns->getChildren() != 0 && !ns->getChildren()->empty()) {
        yyerror((yylsp[(1) - (3)]), "The xsl:namespace instruction has both a select attribute and a sequence constructor [err:XTSE0840]");
      }

      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
      ns->setChildren(children);
    }
    else if(ns->getChildren() == 0) {
      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      children->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
      ns->setChildren(children);
    }
  }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2361 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 2365 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 2372 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2384 "../src/parser/XQParser.y"
    {
    XQElementConstructor *elem = (XQElementConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = elem;

    if(elem->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:element instruction does not have a {}name attribute");
    }

    if(elem->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      args->push_back(elem->namespaceExpr);
      args->push_back(const_cast<ASTNode*>(elem->getName()));
      ASTNode *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("QName"), args, MEMMGR));
      elem->setName(name);
      elem->namespaceExpr = 0;
    }

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
    elem->setChildren(children);
  }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2411 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2415 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2422 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2432 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2444 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2448 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2453 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2462 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2475 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2479 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2484 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 2493 "../src/parser/XQParser.y"
    {
    // TBD xsl:sort - jpcs
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQMap *map = (XQMap*)(yyval.astNode);
    map->setArg2((yyvsp[(2) - (3)].parenExpr));

    if(map->getArg1() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:for-each instruction does not have a {}select attribute");
    }
  }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2507 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 2511 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2524 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2529 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2541 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2545 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::SELF, nt, MEMMGR));
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2553 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2566 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, nt, MEMMGR));
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2574 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 2587 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 2594 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 2633 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 2637 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2641 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[parent::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(Node::PARENT, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2659 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[ancestor::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(Node::ANCESTOR, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2677 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2687 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2701 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2709 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2715 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2721 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2727 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2738 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 2742 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2770 "../src/parser/XQParser.y"
    {
    // TBD Set the language correctly on the context - jpcs
    if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_0)) {
      QP->_lexer->setVersion3(false);
      QP->_query->setVersion3(false);
    }
    else if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz3_0)) {
      if(!QP->_lexer->isVersion3()) {
        yyerror((yylsp[(1) - (2)]), "This XQuery processor is not configured to support XQuery 3.0 [err:XQST0031]");
      }
      QP->_lexer->setVersion3(true);
      QP->_query->setVersion3(true);
    }
    else
      yyerror((yylsp[(1) - (2)]), "This XQuery processor only supports version 1.0 and 3.0 [err:XQST0031]");
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2790 "../src/parser/XQParser.y"
    {
    XMLCh *encName = (yyvsp[(2) - (2)].str);
    if((*encName < chLatin_A || *encName > chLatin_Z) && (*encName < chLatin_a || *encName > chLatin_z))
      yyerror((yylsp[(1) - (2)]), "The specified encoding does not conform to the definition of EncName [err:XQST0087]");

    for(++encName; *encName; ++encName) {
      if((*encName < chLatin_A || *encName > chLatin_Z) &&
         (*encName < chLatin_a || *encName > chLatin_z) &&
         (*encName < chDigit_0 || *encName > chDigit_9) &&
         *encName != chPeriod && *encName != chDash)
        yyerror((yylsp[(1) - (2)]), "The specified encoding does not conform to the definition of EncName [err:XQST0087]");
    }
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2814 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2828 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2832 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2836 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2840 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2844 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2848 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2854 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2860 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2864 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2868 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2900 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2908 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2913 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2922 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2927 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2936 "../src/parser/XQParser.y"
    {
    // validate the QName
    QualifiedName qName((yyvsp[(3) - (4)].str));
    const XMLCh* prefix = qName.getPrefix();
    if(prefix == 0 || *prefix == 0)
      yyerror((yylsp[(3) - (4)]), "The option name must have a prefix [err:XPST0081]");

    const XMLCh *uri = 0;
    try {
      LOCATION((yylsp[(3) - (4)]), loc);
      uri = CONTEXT->getUriBoundToPrefix(prefix, &loc);
    }
    catch(NamespaceLookupException&) {
      yyerror((yylsp[(3) - (4)]), "The option name is using an undefined namespace prefix [err:XPST0081]");
    }

    if(XPath2Utils::equals(uri, XQillaFunction::XMLChFunctionURI)) {
      if(XPath2Utils::equals(qName.getName(), option_projection)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          CONTEXT->setProjection(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          CONTEXT->setProjection(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:projection. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else if(XPath2Utils::equals(qName.getName(), option_psvi)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          CONTEXT->getDocumentCache()->setDoPSVI(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          CONTEXT->getDocumentCache()->setDoPSVI(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:psvi. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else if(XPath2Utils::equals(qName.getName(), option_lint)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          CONTEXT->setDoLintWarnings(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          CONTEXT->setDoLintWarnings(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:lint. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else if(XPath2Utils::equals(qName.getName(), option_extensions)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          QP->_lexer->setEnableExtensions(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          QP->_lexer->setEnableExtensions(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:extensions. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else {
        yyerror((yylsp[(3) - (4)]), "Unknown option name in the xqilla namespace [err:XQILLA]");
      }
    }
    else if(XPath2Utils::equals(uri, XQRewriteRule::URI)) {
      if(XPath2Utils::equals(qName.getName(), option_rule)) {
        LOCATION((yylsp[(4) - (4)]), loc);
        loc.setLocationInfo(loc.getFile(), loc.getLine(), loc.getColumn() + 1);
        QP->_query->addRewriteRule(XQRewriteRule::parse((yyvsp[(4) - (4)].str), MEMMGR, &loc));
      }
      else {
        yyerror((yylsp[(3) - (4)]), "Unknown option name in the xqilla rewrite namespace [err:XQILLA]");
      }
    }
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 3017 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 3025 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 3030 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 3039 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3044 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3053 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 3063 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 3067 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3075 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3079 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 3087 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (4)]), BIT_COLLATION_SPECIFIED, "default collation", "XQST0038");
    try {
      LOCATION((yylsp[(4) - (4)]), loc);
      CONTEXT->getCollation((yyvsp[(4) - (4)].str), &loc);
    }
    catch(ContextException&) {
      yyerror((yylsp[(4) - (4)]), "The specified collation does not exist [err:XQST0038]");
    }
    CONTEXT->setDefaultCollation((yyvsp[(4) - (4)].str));
  }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 3103 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 3112 "../src/parser/XQParser.y"
    {
    if(XPath2Utils::equals((yyvsp[(3) - (5)].str), XMLUni::fgZeroLenString))
      CONTEXT->setDefaultElementAndTypeNS((yyvsp[(4) - (5)].str));
    else if(XPath2Utils::equals((yyvsp[(4) - (5)].str), XMLUni::fgZeroLenString))
      yyerror((yylsp[(1) - (5)]), "A schema that has no target namespace cannot be bound to a non-empty prefix [err:XQST0057]");
    else {
      SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str));
    }
    LOCATION((yylsp[(1) - (5)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].stringList), &loc);
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 3124 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 3132 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 3136 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 3141 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 3150 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 3154 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 3162 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), &loc);
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 3172 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 3184 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 3189 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 3198 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 3202 "../src/parser/XQParser.y"
    {
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
    (yyval.signature)->annotations.push_back((yyvsp[(2) - (2)].annotation));
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 3213 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Annotation(0, XQFunction::XMLChFunctionURI, (yyvsp[(1) - (1)].str), trueExpr, MEMMGR));
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 3225 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQGlobalVariable((yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode), MEMMGR)));
  }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 3232 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 3236 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 3244 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 3253 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 3257 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 3264 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 3268 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3277 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3285 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) Annotation((yyvsp[(2) - (2)].str), trueExpr));
  }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3292 "../src/parser/XQParser.y"
    {
    (yyval.annotation) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) Annotation((yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].parenExpr)));
  }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3299 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.parenExpr)->addItem((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3304 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (3)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(3) - (3)].astNode));
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3313 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3318 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3328 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3336 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3344 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3357 "../src/parser/XQParser.y"
    {
      ASTNode* prevExpr=(yyvsp[(1) - (3)].astNode);
      if(prevExpr->getType()==ASTNode::SEQUENCE)
      {
        ((XQSequence *)prevExpr)->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
      }
      else {
        XQSequence *dis = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
        dis->addItem((yyvsp[(1) - (3)].astNode));
        dis->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = dis;
      }
    }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3396 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tuples = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Check the correct clause order for XQuery 1.0
      // FLWORExpr ::= (ForClause |  LetClause)+ WhereClause? OrderByClause? "return" ExprSingle
      if(!QP->_lexer->isVersion3()) {
        const TupleNode *where = 0;
        const TupleNode *forlet = 0;
        const TupleNode *node = tuples;
        while(node) {
          switch(node->getType()) {
          case TupleNode::ORDER_BY:
            if(where)
              XQThrow3(StaticErrorException, X("XQParser"), X("Where clause after order by clause [err:XPST0003]"), where);
            else if(forlet)
              XQThrow3(StaticErrorException, X("XQParser"), X("For or let clause after order by clause [err:XPST0003]"), forlet);
            break;
          case TupleNode::WHERE:
            if(where)
              XQThrow3(StaticErrorException, X("XQParser"), X("Duplicate where clause [err:XPST0003]"), where);
            else if(forlet)
              XQThrow3(StaticErrorException, X("XQParser"), X("For or let clause after where clause [err:XPST0003]"), forlet);
            where = node;
            break;
          case TupleNode::FOR:
          case TupleNode::LET:
            forlet = node;
            break;
          default:
            break;
          }

          node = node->getParent();
        }
      }

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tuples, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3441 "../src/parser/XQParser.y"
    {
    // Order by has a special check here, because a single OrderByClause can result
    // in multiple OrderByTuple objects.
    const TupleNode *node = (yyvsp[(1) - (2)].tupleNode);
    while(node) {
      if(node->getType() == TupleNode::ORDER_BY)
        XQThrow3(StaticErrorException, X("XQParser"), X("Duplicate order by clause [err:XPST0003]"), (yyvsp[(2) - (2)].tupleNode));
      node = node->getParent();
    }

    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3454 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 3469 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 3476 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3484 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 3495 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3499 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3509 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3513 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3523 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3530 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3538 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 3542 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQDecimalLiteral((ItemType*)&ItemType::INTEGER, 0, MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3551 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3559 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 3567 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3572 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3580 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3590 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3597 "../src/parser/XQParser.y"
    {
    try {
      LOCATION((yylsp[(4) - (5)]), loc);
      Collation *collation = CONTEXT->getCollation((yyvsp[(5) - (5)].str), &loc);

      (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (5)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (5)].orderByModifier) | (yyvsp[(3) - (5)].orderByModifier), collation, MEMMGR));
    }
    catch(ContextException&) {
      yyerror((yylsp[(4) - (5)]), "The specified collation does not exist [err:XQST0076]");
    }
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3612 "../src/parser/XQParser.y"
    {
    SequenceType *zero_or_one = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType((ItemType*)&ItemType::ITEM, SequenceType::QUESTION_MARK));

    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAtomize((yyval.astNode), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPromoteUntyped((yyval.astNode), (ItemType*)&ItemType::STRING, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs((yyval.astNode), zero_or_one, MEMMGR));
  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3626 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3630 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3634 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3641 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3650 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3654 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3663 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3671 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3682 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3690 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3701 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3708 "../src/parser/XQParser.y"
    {
    XQTypeswitch::Cases::iterator it = (yyvsp[(2) - (2)].caseClauses)->begin();
    for(; it != (yyvsp[(2) - (2)].caseClauses)->end(); ++it) {
      (yyvsp[(1) - (2)].caseClauses)->push_back(*it);
    }

    (yyval.caseClauses) = (yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3721 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3725 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3733 "../src/parser/XQParser.y"
    {
    // TBD Don't copy the expression when unions of SequenceTypes are implemented - jpcs
    XQTypeswitch::Cases::iterator it = (yyvsp[(1) - (3)].caseClauses)->begin();
    if(it != (yyvsp[(1) - (3)].caseClauses)->end()) {
      (*it)->setExpression((yyvsp[(3) - (3)].astNode));

      for(++it; it != (yyvsp[(1) - (3)].caseClauses)->end(); ++it) {
        (*it)->setExpression((yyvsp[(3) - (3)].astNode)->copy(CONTEXT));
      }
    }

    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3751 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3756 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION3(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3765 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3769 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3779 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (4)].astNode);
    ((XQSwitch*)(yyval.astNode))->setDefault((yyvsp[(4) - (4)].astNode));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3787 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (4)].astNode);
    (yyvsp[(2) - (4)].switchCase)->setExpression((yyvsp[(4) - (4)].astNode));
    ((XQSwitch*)(yyval.astNode))->getCases().push_back((yyvsp[(2) - (4)].switchCase));
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3793 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQSwitch((yyvsp[(3) - (7)].astNode), MEMMGR));
    (yyvsp[(5) - (7)].switchCase)->setExpression((yyvsp[(7) - (7)].astNode));
    ((XQSwitch*)(yyval.astNode))->getCases().push_back((yyvsp[(5) - (7)].switchCase));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3802 "../src/parser/XQParser.y"
    {
    (yyval.switchCase) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSwitch::Case(MEMMGR));
    (yyval.switchCase)->getValues().push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3807 "../src/parser/XQParser.y"
    {
    (yyval.switchCase) = (yyvsp[(1) - (3)].switchCase);
    (yyval.switchCase)->getValues().push_back((yyvsp[(3) - (3)].astNode));
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3816 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3824 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OR) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3838 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::AND) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3857 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3861 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3864 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3865 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3869 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3873 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3877 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3881 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3885 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3889 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3893 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3897 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3901 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3905 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 3909 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3913 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3922 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3926 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3934 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::fn.uri, MEMMGR->getPooledString("concat"), args, MEMMGR));
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3946 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3958 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3962 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3971 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3975 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3979 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3983 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3992 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3996 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 4005 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 4009 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 4018 "../src/parser/XQParser.y"
    {
    ASTNode *falseExpr =
      WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("false"), 0, MEMMGR));
    XQTypeswitch::Case *defcase =
      WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, falseExpr));

    ASTNode *trueExpr =
      WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    XQTypeswitch::Cases *cases = new (MEMMGR)
      XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    cases->push_back(WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(4) - (4)].sequenceType), trueExpr)));

    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTypeswitch((yyvsp[(1) - (4)].astNode), cases, defcase, MEMMGR));
  }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 4040 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 4050 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 4059 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 4068 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 4074 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 4095 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 4099 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 4103 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 4111 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 4118 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 4131 "../src/parser/XQParser.y"
    {
        // validate the QName
        QualifiedName qName((yyvsp[(3) - (4)].str));
        const XMLCh* prefix=qName.getPrefix();
        if(prefix == NULL || *prefix == 0)
          yyerror((yylsp[(3) - (4)]), "The pragma name must have a prefix [err:XPST0081]");

        try {
          LOCATION((yylsp[(3) - (4)]), loc);
          CONTEXT->getUriBoundToPrefix(prefix, &loc);
        }
        catch(NamespaceLookupException&) {
          yyerror((yylsp[(3) - (4)]), "The pragma name is using an undefined namespace prefix [err:XPST0081]");
        }
      }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 4152 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 4161 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 4167 "../src/parser/XQParser.y"
    {
    XQNav *nav = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQNav(MEMMGR));

    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (2)]), new (MEMMGR)
      SequenceType(WRAP((yylsp[(1) - (2)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT))));

    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR)));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::DESCENDANT_OR_SELF, step, MEMMGR)));

    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 4192 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT))));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 4206 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 4212 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQStep(Node::DESCENDANT_OR_SELF, step, MEMMGR)));
    nav->addStep((yyvsp[(3) - (3)].astNode));

    (yyval.astNode) = nav;
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 4225 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 4238 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 4248 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 4255 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 4264 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      switch((yyvsp[(1) - (2)].axis)) {
      case Node::NAMESPACE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::namespace_string); break;
      case Node::ATTRIBUTE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string); break;
      default: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string); break;
      }
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis),(yyvsp[(2) - (2)].nodeTest),MEMMGR));
  }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 4287 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::CHILD;
  }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 4291 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT;
  }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 4295 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ATTRIBUTE;
  }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 4299 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::SELF;
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 4303 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT_OR_SELF;
  }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 4307 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING_SIBLING;
  }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 4311 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING;
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4315 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::NAMESPACE;
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 4323 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4331 "../src/parser/XQParser.y"
    {
    Node::Axis axis = Node::CHILD;
    ItemType *itemtype = (yyvsp[(1) - (1)].nodeTest)->getItemType();
    if(itemtype != 0 && itemtype->getItemTestType() == ItemType::TEST_ATTRIBUTE) {
      axis = Node::ATTRIBUTE;
    }
    else if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(axis, (yyvsp[(1) - (1)].nodeTest), MEMMGR));
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4348 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4365 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PARENT;
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4369 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR;
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4373 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING_SIBLING;
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4377 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING;
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4381 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR_OR_SELF;
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4389 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, step, MEMMGR));
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4401 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4411 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 4423 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 4430 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 4437 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4450 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4479 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4490 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4494 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4502 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4510 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4520 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4530 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4534 "../src/parser/XQParser.y"
    {
    bool partial = false;
    VectorOfASTNodes::iterator i;
    for(i = (yyvsp[(3) - (4)].itemList)->begin(); i != (yyvsp[(3) - (4)].itemList)->end(); ++i) {
      if(*i == 0) {
        partial = true;
        break;
      }
    }

    if(partial) {
      // This is a partial function application
      XQFunctionRef *ref = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList)->size(), MEMMGR));
      (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPartialApply(ref, (yyvsp[(3) - (4)].itemList), MEMMGR));
    }
    else {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
    }
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4557 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4562 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4573 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION3(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4582 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4586 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4599 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4605 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4618 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4622 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4631 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4647 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4651 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4658 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4662 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4672 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4676 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4681 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4689 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4693 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4697 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4708 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4712 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4717 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4725 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4729 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4733 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4748 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4752 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4757 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4762 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4767 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
    }
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4778 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4787 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4796 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(WRAP((yylsp[(2) - (3)]), new (MEMMGR)
          XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR)), value, MEMMGR));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4807 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 4832 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4840 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4848 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4852 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4860 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 4864 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4873 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4880 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4884 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4894 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4902 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4910 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4918 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4925 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4933 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4940 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4944 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4952 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4959 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4963 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4971 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(WRAP((yyloc), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4975 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4985 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4989 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4998 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 5000 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 5002 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 5004 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 5010 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING));
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 5022 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName)));
  }
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 5052 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NODE));
  }
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 5060 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT));
  }
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 5064 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 5071 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_SCHEMA_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 5082 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TEXT));
  }
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 5090 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_COMMENT));
  }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 5098 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION3(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NAMESPACE));
  }
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 5107 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_PI));
  }
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 5111 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 5115 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 5123 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE));
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 5127 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 5131 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 5140 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 5148 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 5161 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT));
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 5165 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 5169 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 5173 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName)));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5183 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5191 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5211 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5223 "../src/parser/XQParser.y"
    {
    // TBD weight
    (yyval.ftselection) = (yyvsp[(1) - (3)].ftselection);

    for(VectorOfFTOptions::iterator i = (yyvsp[(2) - (3)].ftoptionlist)->begin();
        i != (yyvsp[(2) - (3)].ftoptionlist)->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
/*     delete $2; */
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5238 "../src/parser/XQParser.y"
    {
}
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5241 "../src/parser/XQParser.y"
    {
}
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5247 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5251 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5261 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].ftselection)->getType() == FTSelection::OR) {
      FTOr *op = (FTOr*)(yyvsp[(1) - (3)].ftselection);
      op->addArg((yyvsp[(3) - (3)].ftselection));
      (yyval.ftselection) = op;
    }
    else {
      (yyval.ftselection) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTOr((yyvsp[(1) - (3)].ftselection), (yyvsp[(3) - (3)].ftselection), MEMMGR));
    }
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5278 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].ftselection)->getType() == FTSelection::AND) {
      FTAnd *op = (FTAnd*)(yyvsp[(1) - (3)].ftselection);
      op->addArg((yyvsp[(3) - (3)].ftselection));
      (yyval.ftselection) = op;
    }
    else {
      (yyval.ftselection) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTAnd((yyvsp[(1) - (3)].ftselection), (yyvsp[(3) - (3)].ftselection), MEMMGR));
    }
  }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 5294 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 5304 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 5314 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 5323 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5328 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 5338 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5342 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 5350 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5355 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5364 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5368 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5372 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5376 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5380 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5384 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5394 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5405 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5411 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5417 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5423 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5438 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5442 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5446 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5450 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5454 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5458 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5462 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5466 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5474 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5478 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5482 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5490 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5494 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5530 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5534 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5538 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5542 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5551 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5555 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5563 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5567 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5577 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5581 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5585 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5589 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5593 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5600 "../src/parser/XQParser.y"
    {
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5603 "../src/parser/XQParser.y"
    {
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5610 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5614 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5618 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5622 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5632 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5636 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5640 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5647 "../src/parser/XQParser.y"
    {
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5650 "../src/parser/XQParser.y"
    {
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5658 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5662 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5669 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5673 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5681 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5685 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5693 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5701 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5705 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5713 "../src/parser/XQParser.y"
    {
}
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5720 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5728 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5733 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5738 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5750 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5754 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5758 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5762 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5766 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5777 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5788 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5792 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5802 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5810 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5817 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5822 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5830 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5839 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDecimalLiteral((ItemType*)&ItemType::INTEGER,
        ATDecimalOrDerivedImpl::parseDecimal((yyvsp[(1) - (1)].str)), MEMMGR));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5848 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDecimalLiteral((ItemType*)&ItemType::DECIMAL,
        ATDecimalOrDerivedImpl::parseDecimal((yyvsp[(1) - (1)].str)), MEMMGR));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5857 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDoubleLiteral((ItemType*)&ItemType::DOUBLE,
        ATDoubleOrDerivedImpl::parseDouble((yyvsp[(1) - (1)].str)), MEMMGR));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5867 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5874 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5883 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5895 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5900 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5905 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5911 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5917 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5923 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5932 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5936 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5944 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5948 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5955 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5960 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5968 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5973 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5982 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5986 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5990 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5998 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 6002 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 6010 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 6014 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 6018 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 6022 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 6030 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 6034 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 6038 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 6046 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 6051 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 6061 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 6078 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 6086 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 6097 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION3(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 6102 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION3(DynamicFunctionInvocation, (yylsp[(1) - (4)]));

    bool partial = false;
    VectorOfASTNodes::iterator i;
    for(i = (yyvsp[(3) - (4)].itemList)->begin(); i != (yyvsp[(3) - (4)].itemList)->end(); ++i) {
      if(*i == 0) {
        partial = true;
        break;
      }
    }

    if(partial) {
      // This is a partial function application
      (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPartialApply((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
    }
    else {
      (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
    }
  }
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 6130 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ItemType(ItemType::TEST_FUNCTION));
  }
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 6142 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature(0, (yyvsp[(6) - (6)].sequenceType), MEMMGR), 0));
  }
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 6146 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature((yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].sequenceType), MEMMGR), 0));
  }
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 6153 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(1) - (1)].sequenceType), MEMMGR)));
  }
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 6158 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(3) - (3)].sequenceType), MEMMGR)));
  }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 6167 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;

  case 864:

/* Line 1455 of yacc.c  */
#line 6180 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType((yyvsp[(3) - (4)].tupleMembers), 0));
  }
    break;

  case 865:

/* Line 1455 of yacc.c  */
#line 6184 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TUPLE));
  }
    break;

  case 866:

/* Line 1455 of yacc.c  */
#line 6191 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = new (MEMMGR) TupleMembers(true, MEMMGR);
    (yyvsp[(1) - (1)].argSpec)->setIndex(0);
    (yyval.tupleMembers)->add(0, (yyvsp[(1) - (1)].argSpec));
  }
    break;

  case 867:

/* Line 1455 of yacc.c  */
#line 6197 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = (yyvsp[(1) - (3)].tupleMembers);
    (yyvsp[(3) - (3)].argSpec)->setIndex((yyval.tupleMembers)->size());
    (yyval.tupleMembers)->add(0, (yyvsp[(3) - (3)].argSpec));
  }
    break;

  case 868:

/* Line 1455 of yacc.c  */
#line 6207 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) ArgumentSpec((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].sequenceType), MEMMGR));
  }
    break;

  case 869:

/* Line 1455 of yacc.c  */
#line 6215 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(WRAP((yylsp[(3) - (6)]), new (MEMMGR)
          SequenceType((yyvsp[(3) - (6)].itemType), SequenceType::EXACTLY_ONE)), (yyvsp[(5) - (6)].sequenceType), 0));
  }
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 6220 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_MAP));
  }
    break;

  case 873:

/* Line 1455 of yacc.c  */
#line 6230 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tuples = setLastAncestor((yyvsp[(3) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the tuple constructor expression
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTupleConstructor(tuples, MEMMGR));
  }
    break;

  case 874:

/* Line 1455 of yacc.c  */
#line 6238 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleConstructor(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)), MEMMGR));
  }
    break;

  case 876:

/* Line 1455 of yacc.c  */
#line 6246 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 877:

/* Line 1455 of yacc.c  */
#line 6254 "../src/parser/XQParser.y"
    {
    // TBD LetTuple doesn't give us the correct in-scope vars for the initializer - jpcs
    (yyval.tupleNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) LetTuple(0, (yyvsp[(1) - (4)].str), WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTreatAs((yyvsp[(4) - (4)].astNode), (yyvsp[(2) - (4)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 878:

/* Line 1455 of yacc.c  */
#line 6263 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 879:

/* Line 1455 of yacc.c  */
#line 6267 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
        MEMMGR->getPooledString("empty-map"), 0, MEMMGR));
  }
    break;

  case 880:

/* Line 1455 of yacc.c  */
#line 6275 "../src/parser/XQParser.y"
    {
    XQFunctionCall *func = (XQFunctionCall*)(yyvsp[(1) - (1)].astNode);
    const_cast<VectorOfASTNodes&>(*func->getArguments())[0] =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("empty-map"), 0, MEMMGR));
    (yyval.astNode) = func;
  }
    break;

  case 881:

/* Line 1455 of yacc.c  */
#line 6283 "../src/parser/XQParser.y"
    {
    XQFunctionCall *func = (XQFunctionCall*)(yyvsp[(3) - (3)].astNode);
    const_cast<VectorOfASTNodes&>(*func->getArguments())[0] = (yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = func;
  }
    break;

  case 882:

/* Line 1455 of yacc.c  */
#line 6293 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back(0);
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
        MEMMGR->getPooledString("map-put"), args, MEMMGR));
  }
    break;

  case 884:

/* Line 1455 of yacc.c  */
#line 6307 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleMember((yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyval.astNode), MEMMGR));
  }
    break;

  case 885:

/* Line 1455 of yacc.c  */
#line 6315 "../src/parser/XQParser.y"
    {
    QP->_query->addTypeAlias(WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeAlias((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].itemType), MEMMGR)));
  }
    break;

  case 886:

/* Line 1455 of yacc.c  */
#line 6325 "../src/parser/XQParser.y"
    {
    QP->_rwrule = (yyvsp[(1) - (1)].rwrule);
  }
    break;

  case 887:

/* Line 1455 of yacc.c  */
#line 6332 "../src/parser/XQParser.y"
    {
    QP->_rwpattern = (yyvsp[(1) - (1)].rwpattern);
  }
    break;

  case 888:

/* Line 1455 of yacc.c  */
#line 6339 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQRewriteRule((yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].rwpattern), (yyvsp[(4) - (5)].astNode), MEMMGR));
    (yyval.rwrule)->addCase((yyvsp[(5) - (5)].rwcase));
  }
    break;

  case 889:

/* Line 1455 of yacc.c  */
#line 6344 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = (yyvsp[(1) - (2)].rwrule);
    (yyval.rwrule)->addCase((yyvsp[(2) - (2)].rwcase));
  }
    break;

  case 890:

/* Line 1455 of yacc.c  */
#line 6352 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 891:

/* Line 1455 of yacc.c  */
#line 6356 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 892:

/* Line 1455 of yacc.c  */
#line 6363 "../src/parser/XQParser.y"
    {
    (yyval.rwcase) = new (MEMMGR) RewriteCase((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 893:

/* Line 1455 of yacc.c  */
#line 6370 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) RewritePattern(ASTNode::IF, (yyvsp[(3) - (8)].rwpattern), (yyvsp[(6) - (8)].rwpattern), (yyvsp[(8) - (8)].rwpattern), MEMMGR));
  }
    break;

  case 895:

/* Line 1455 of yacc.c  */
#line 6378 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].rwpattern)->type == ASTNode::OR) {
      (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
      (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
    }
    else {
      (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::OR, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
    }
  }
    break;

  case 897:

/* Line 1455 of yacc.c  */
#line 6392 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].rwpattern)->type == ASTNode::AND) {
      (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
      (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
    }
    else {
      (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::AND, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
    }
  }
    break;

  case 899:

/* Line 1455 of yacc.c  */
#line 6406 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 900:

/* Line 1455 of yacc.c  */
#line 6410 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::NOT_EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 901:

/* Line 1455 of yacc.c  */
#line 6414 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 902:

/* Line 1455 of yacc.c  */
#line 6418 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 903:

/* Line 1455 of yacc.c  */
#line 6422 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 904:

/* Line 1455 of yacc.c  */
#line 6426 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 906:

/* Line 1455 of yacc.c  */
#line 6434 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::PLUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 907:

/* Line 1455 of yacc.c  */
#line 6438 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MINUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 909:

/* Line 1455 of yacc.c  */
#line 6446 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MULTIPLY, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 910:

/* Line 1455 of yacc.c  */
#line 6450 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 911:

/* Line 1455 of yacc.c  */
#line 6454 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::INTEGER_DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 912:

/* Line 1455 of yacc.c  */
#line 6458 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MOD, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 914:

/* Line 1455 of yacc.c  */
#line 6466 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (2)].rwpattern);
  }
    break;

  case 915:

/* Line 1455 of yacc.c  */
#line 6470 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::UNARY_MINUS, (yyvsp[(2) - (2)].rwpattern), MEMMGR));
  }
    break;

  case 917:

/* Line 1455 of yacc.c  */
#line 6478 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) RewritePattern(ASTNode::PREDICATE, (yyvsp[(1) - (4)].rwpattern), (yyvsp[(3) - (4)].rwpattern), MEMMGR));
  }
    break;

  case 919:

/* Line 1455 of yacc.c  */
#line 6486 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(3) - (4)].rwpattern);
    (yyval.rwpattern)->type = ASTNode::FUNCTION;
    (yyval.rwpattern)->value = (yyvsp[(1) - (4)].str);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 920:

/* Line 1455 of yacc.c  */
#line 6494 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (3)].rwpattern);
    LOCATION((yylsp[(1) - (3)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 921:

/* Line 1455 of yacc.c  */
#line 6500 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::EXPR_SUBSTITUTION, (yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 922:

/* Line 1455 of yacc.c  */
#line 6504 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 923:

/* Line 1455 of yacc.c  */
#line 6508 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 924:

/* Line 1455 of yacc.c  */
#line 6512 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 925:

/* Line 1455 of yacc.c  */
#line 6516 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 926:

/* Line 1455 of yacc.c  */
#line 6523 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yyloc), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, MEMMGR));
  }
    break;

  case 928:

/* Line 1455 of yacc.c  */
#line 6531 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, (yyvsp[(1) - (1)].rwpattern), MEMMGR));
  }
    break;

  case 929:

/* Line 1455 of yacc.c  */
#line 6535 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
    (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
  }
    break;

  case 931:

/* Line 1455 of yacc.c  */
#line 6547 "../src/parser/XQParser.y"
    {
    if(!QP->_rewriteRule)
      yyerror((yylsp[(1) - (2)]), "Expression substitutions are only allowed in rewrite rules");
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQExprSubstitution((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;



/* Line 1455 of yacc.c  */
#line 13412 "../src/parser/XQParser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 6584 "../src/parser/XQParser.y"


}  // namespace XQParser


