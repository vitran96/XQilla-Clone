
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
#define REJECT_NOT_VERSION11(where,pos) if(!QP->_lexer->isVersion11()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

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
static const XMLCh sz1_1[] = { chDigit_1, chPeriod, chDigit_1, chNull };
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
#line 419 "../src/parser/XQParser.cpp"

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
     _DOLLAR_ = 267,
     _COLON_EQUALS_ = 268,
     _ASTERISK_ = 269,
     _BAR_ = 270,
     _BANG_EQUALS_ = 271,
     _LESS_THAN_EQUALS_ = 272,
     _GREATER_THAN_ = 273,
     _GREATER_THAN_EQUALS_ = 274,
     _LESS_THAN_LESS_THAN_ = 275,
     _GREATER_THAN_GREATER_THAN_ = 276,
     _COLON_COLON_ = 277,
     _AT_SIGN_ = 278,
     _LSQUARE_ = 279,
     _RSQUARE_ = 280,
     _QUESTION_MARK_ = 281,
     _LESS_THAN_OP_OR_TAG_ = 282,
     _START_TAG_CLOSE_ = 283,
     _END_TAG_CLOSE_ = 284,
     _PI_START_ = 285,
     _XML_COMMENT_START_ = 286,
     _XML_COMMENT_END_ = 287,
     _SLASH_SLASH_ = 288,
     _END_TAG_OPEN_ = 289,
     _PRAGMA_OPEN_ = 290,
     _COMMA_ = 291,
     _PLUS_ = 292,
     _MINUS_ = 293,
     _SLASH_ = 294,
     _EQUALS_ = 295,
     _DOT_ = 296,
     _DOT_DOT_ = 297,
     _LPAR_ = 298,
     _RPAR_ = 299,
     _EMPTY_TAG_CLOSE_ = 300,
     _VALUE_INDICATOR_ = 301,
     _OPEN_QUOT_ = 302,
     _CLOSE_QUOT_ = 303,
     _OPEN_APOS_ = 304,
     _CLOSE_APOS_ = 305,
     _LBRACE_ = 306,
     _RBRACE_ = 307,
     _SEMICOLON_ = 308,
     _HASH_ = 309,
     _PERCENT_ = 310,
     _COLON_ = 311,
     _TILDE_ = 312,
     _MINUS_GREATER_THAN_ = 313,
     _INTEGER_LITERAL_ = 314,
     _DECIMAL_LITERAL_ = 315,
     _DOUBLE_LITERAL_ = 316,
     _ATTRIBUTE_ = 317,
     _COMMENT_ = 318,
     _DOCUMENT_NODE_ = 319,
     _NAMESPACE_NODE_ = 320,
     _NODE_ = 321,
     _PROCESSING_INSTRUCTION_ = 322,
     _SCHEMA_ATTRIBUTE_ = 323,
     _SCHEMA_ELEMENT_ = 324,
     _TEXT_ = 325,
     _EMPTY_SEQUENCE_ = 326,
     _BOUNDARY_SPACE_ = 327,
     _FT_OPTION_ = 328,
     _BASE_URI_ = 329,
     _LAX_ = 330,
     _STRICT_ = 331,
     _IDIV_ = 332,
     _CHILD_ = 333,
     _DESCENDANT_ = 334,
     _SELF_ = 335,
     _DESCENDANT_OR_SELF_ = 336,
     _FOLLOWING_SIBLING_ = 337,
     _FOLLOWING_ = 338,
     _PARENT_ = 339,
     _ANCESTOR_ = 340,
     _PRECEDING_SIBLING_ = 341,
     _PRECEDING_ = 342,
     _ANCESTOR_OR_SELF_ = 343,
     _DOCUMENT_ = 344,
     _NOT_ = 345,
     _USING_ = 346,
     _NO_ = 347,
     _SENSITIVE_ = 348,
     _INSENSITIVE_ = 349,
     _DIACRITICS_ = 350,
     _WITHOUT_ = 351,
     _WITHOUT_C_ = 352,
     _STEMMING_ = 353,
     _THESAURUS_ = 354,
     _STOP_ = 355,
     _WILDCARDS_ = 356,
     _ENTIRE_ = 357,
     _CONTENT_ = 358,
     _WORD_ = 359,
     _TYPE_ = 360,
     _START_ = 361,
     _END_ = 362,
     _MOST_ = 363,
     _SKIP_ = 364,
     _COPY_ = 365,
     _VALUE_ = 366,
     _WHITESPACE_ = 367,
     _PI_CONTENT_ = 368,
     _XML_COMMENT_CONTENT_ = 369,
     _EQ_ = 370,
     _NE_ = 371,
     _LT_ = 372,
     _LE_ = 373,
     _GT_ = 374,
     _GE_ = 375,
     _AT_ = 376,
     _QUOT_ATTR_CONTENT_ = 377,
     _APOS_ATTR_CONTENT_ = 378,
     _WHITESPACE_ELEMENT_CONTENT_ = 379,
     _ELEMENT_CONTENT_ = 380,
     _AT_LM_ = 381,
     _ORDERED_ = 382,
     _UNORDERED_ = 383,
     _QNAME_ = 384,
     _XMLNS_QNAME_ = 385,
     _CONSTR_QNAME_ = 386,
     _STRING_LITERAL_ = 387,
     _VARIABLE_ = 388,
     _NCNAME_COLON_STAR_ = 389,
     _STAR_COLON_NCNAME_ = 390,
     _PI_TARGET_ = 391,
     _PRAGMA_CONTENT_ = 392,
     _RETURN_ = 393,
     _FOR_ = 394,
     _IN_ = 395,
     _LET_ = 396,
     _WHERE_ = 397,
     _COUNT_ = 398,
     _BY_ = 399,
     _ORDER_ = 400,
     _STABLE_ = 401,
     _ASCENDING_ = 402,
     _DESCENDING_ = 403,
     _EMPTY_ = 404,
     _GREATEST_ = 405,
     _LEAST_ = 406,
     _COLLATION_ = 407,
     _SOME_ = 408,
     _EVERY_ = 409,
     _SATISFIES_ = 410,
     _TYPESWITCH_ = 411,
     _CASE_ = 412,
     _CASE_S_ = 413,
     _AS_ = 414,
     _IF_ = 415,
     _THEN_ = 416,
     _ELSE_ = 417,
     _OR_ = 418,
     _AND_ = 419,
     _INSTANCE_ = 420,
     _OF_ = 421,
     _CASTABLE_ = 422,
     _TO_ = 423,
     _DIV_ = 424,
     _MOD_ = 425,
     _UNION_ = 426,
     _INTERSECT_ = 427,
     _EXCEPT_ = 428,
     _VALIDATE_ = 429,
     _CAST_ = 430,
     _TREAT_ = 431,
     _IS_ = 432,
     _PRESERVE_ = 433,
     _STRIP_ = 434,
     _NAMESPACE_ = 435,
     _ITEM_ = 436,
     _EXTERNAL_ = 437,
     _ENCODING_ = 438,
     _NO_PRESERVE_ = 439,
     _INHERIT_ = 440,
     _NO_INHERIT_ = 441,
     _DECLARE_ = 442,
     _CONSTRUCTION_ = 443,
     _ORDERING_ = 444,
     _DEFAULT_ = 445,
     _COPY_NAMESPACES_ = 446,
     _OPTION_ = 447,
     _XQUERY_ = 448,
     _VERSION_ = 449,
     _IMPORT_ = 450,
     _SCHEMA_ = 451,
     _MODULE_ = 452,
     _ELEMENT_ = 453,
     _FUNCTION_ = 454,
     _FUNCTION_EXT_ = 455,
     _SCORE_ = 456,
     _CONTAINS_ = 457,
     _WEIGHT_ = 458,
     _WINDOW_ = 459,
     _DISTANCE_ = 460,
     _OCCURS_ = 461,
     _TIMES_ = 462,
     _SAME_ = 463,
     _DIFFERENT_ = 464,
     _LOWERCASE_ = 465,
     _UPPERCASE_ = 466,
     _RELATIONSHIP_ = 467,
     _LEVELS_ = 468,
     _LANGUAGE_ = 469,
     _ANY_ = 470,
     _ALL_ = 471,
     _PHRASE_ = 472,
     _EXACTLY_ = 473,
     _FROM_ = 474,
     _WORDS_ = 475,
     _SENTENCES_ = 476,
     _PARAGRAPHS_ = 477,
     _SENTENCE_ = 478,
     _PARAGRAPH_ = 479,
     _REPLACE_ = 480,
     _MODIFY_ = 481,
     _FIRST_ = 482,
     _INSERT_ = 483,
     _BEFORE_ = 484,
     _AFTER_ = 485,
     _REVALIDATION_ = 486,
     _WITH_ = 487,
     _NODES_ = 488,
     _RENAME_ = 489,
     _LAST_ = 490,
     _DELETE_ = 491,
     _INTO_ = 492,
     _UPDATING_ = 493,
     _ID_ = 494,
     _KEY_ = 495,
     _TEMPLATE_ = 496,
     _MATCHES_ = 497,
     _TUPLE_ = 498,
     _MAP_ = 499,
     _NAME_ = 500,
     _CALL_ = 501,
     _APPLY_ = 502,
     _TEMPLATES_ = 503,
     _MODE_ = 504,
     _FTOR_ = 505,
     _FTAND_ = 506,
     _FTNOT_ = 507,
     _TYPE_ALIAS_ = 508,
     _XSLT_END_ELEMENT_ = 509,
     _XSLT_STYLESHEET_ = 510,
     _XSLT_TEMPLATE_ = 511,
     _XSLT_VALUE_OF_ = 512,
     _XSLT_TEXT_ = 513,
     _XSLT_APPLY_TEMPLATES_ = 514,
     _XSLT_CALL_TEMPLATE_ = 515,
     _XSLT_WITH_PARAM_ = 516,
     _XSLT_SEQUENCE_ = 517,
     _XSLT_PARAM_ = 518,
     _XSLT_FUNCTION_ = 519,
     _XSLT_CHOOSE_ = 520,
     _XSLT_WHEN_ = 521,
     _XSLT_OTHERWISE_ = 522,
     _XSLT_IF_ = 523,
     _XSLT_VARIABLE_ = 524,
     _XSLT_COMMENT_ = 525,
     _XSLT_PI_ = 526,
     _XSLT_DOCUMENT_ = 527,
     _XSLT_ATTRIBUTE_ = 528,
     _XSLT_NAMESPACE_ = 529,
     _XSLT_ELEMENT_ = 530,
     _XSLT_ANALYZE_STRING_ = 531,
     _XSLT_MATCHING_SUBSTRING_ = 532,
     _XSLT_NON_MATCHING_SUBSTRING_ = 533,
     _XSLT_COPY_OF_ = 534,
     _XSLT_COPY_ = 535,
     _XSLT_FOR_EACH_ = 536,
     _XSLT_OUTPUT_ = 537,
     _XSLT_IMPORT_SCHEMA_ = 538,
     _XSLT_TYPE_ALIAS_ = 539,
     _XSLT_VERSION_ = 540,
     _XSLT_MODE_ = 541,
     _XSLT_NAME_ = 542,
     _XSLT_DOCTYPE_PUBLIC_ = 543,
     _XSLT_DOCTYPE_SYSTEM_ = 544,
     _XSLT_ENCODING_ = 545,
     _XSLT_MEDIA_TYPE_ = 546,
     _XSLT_NORMALIZATION_FORM_ = 547,
     _XSLT_STANDALONE_ = 548,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 549,
     _XSLT_NAMESPACE_STR_ = 550,
     _XSLT_SCHEMA_LOCATION_ = 551,
     _XSLT_TUNNEL_ = 552,
     _XSLT_REQUIRED_ = 553,
     _XSLT_OVERRIDE_ = 554,
     _XSLT_COPY_NAMESPACES_ = 555,
     _XSLT_INHERIT_NAMESPACES_ = 556,
     _XSLT_BYTE_ORDER_MARK_ = 557,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 558,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 559,
     _XSLT_INDENT_ = 560,
     _XSLT_OMIT_XML_DECLARATION_ = 561,
     _XSLT_UNDECLARE_PREFIXES_ = 562,
     _XSLT_MATCH_ = 563,
     _XSLT_AS_ = 564,
     _XSLT_SELECT_ = 565,
     _XSLT_PRIORITY_ = 566,
     _XSLT_TEST_ = 567,
     _XSLT_SEPARATOR_ = 568,
     _XSLT_NAMESPACE_A_ = 569,
     _XSLT_REGEX_ = 570,
     _XSLT_FLAGS_ = 571,
     _XSLT_METHOD_ = 572,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 573,
     _XSLT_USE_CHARACTER_MAPS_ = 574,
     _XSLT_ELEMENT_NAME_ = 575,
     _XSLT_XMLNS_ATTR_ = 576,
     _XSLT_ATTR_NAME_ = 577,
     _XSLT_TEXT_NODE_ = 578,
     _XSLT_WS_TEXT_NODE_ = 579,
     _HASH_DEFAULT_ = 580,
     _HASH_ALL_ = 581,
     _HASH_CURRENT_ = 582,
     _XML_ = 583,
     _HTML_ = 584,
     _XHTML_ = 585
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
#define _DOLLAR_ 267
#define _COLON_EQUALS_ 268
#define _ASTERISK_ 269
#define _BAR_ 270
#define _BANG_EQUALS_ 271
#define _LESS_THAN_EQUALS_ 272
#define _GREATER_THAN_ 273
#define _GREATER_THAN_EQUALS_ 274
#define _LESS_THAN_LESS_THAN_ 275
#define _GREATER_THAN_GREATER_THAN_ 276
#define _COLON_COLON_ 277
#define _AT_SIGN_ 278
#define _LSQUARE_ 279
#define _RSQUARE_ 280
#define _QUESTION_MARK_ 281
#define _LESS_THAN_OP_OR_TAG_ 282
#define _START_TAG_CLOSE_ 283
#define _END_TAG_CLOSE_ 284
#define _PI_START_ 285
#define _XML_COMMENT_START_ 286
#define _XML_COMMENT_END_ 287
#define _SLASH_SLASH_ 288
#define _END_TAG_OPEN_ 289
#define _PRAGMA_OPEN_ 290
#define _COMMA_ 291
#define _PLUS_ 292
#define _MINUS_ 293
#define _SLASH_ 294
#define _EQUALS_ 295
#define _DOT_ 296
#define _DOT_DOT_ 297
#define _LPAR_ 298
#define _RPAR_ 299
#define _EMPTY_TAG_CLOSE_ 300
#define _VALUE_INDICATOR_ 301
#define _OPEN_QUOT_ 302
#define _CLOSE_QUOT_ 303
#define _OPEN_APOS_ 304
#define _CLOSE_APOS_ 305
#define _LBRACE_ 306
#define _RBRACE_ 307
#define _SEMICOLON_ 308
#define _HASH_ 309
#define _PERCENT_ 310
#define _COLON_ 311
#define _TILDE_ 312
#define _MINUS_GREATER_THAN_ 313
#define _INTEGER_LITERAL_ 314
#define _DECIMAL_LITERAL_ 315
#define _DOUBLE_LITERAL_ 316
#define _ATTRIBUTE_ 317
#define _COMMENT_ 318
#define _DOCUMENT_NODE_ 319
#define _NAMESPACE_NODE_ 320
#define _NODE_ 321
#define _PROCESSING_INSTRUCTION_ 322
#define _SCHEMA_ATTRIBUTE_ 323
#define _SCHEMA_ELEMENT_ 324
#define _TEXT_ 325
#define _EMPTY_SEQUENCE_ 326
#define _BOUNDARY_SPACE_ 327
#define _FT_OPTION_ 328
#define _BASE_URI_ 329
#define _LAX_ 330
#define _STRICT_ 331
#define _IDIV_ 332
#define _CHILD_ 333
#define _DESCENDANT_ 334
#define _SELF_ 335
#define _DESCENDANT_OR_SELF_ 336
#define _FOLLOWING_SIBLING_ 337
#define _FOLLOWING_ 338
#define _PARENT_ 339
#define _ANCESTOR_ 340
#define _PRECEDING_SIBLING_ 341
#define _PRECEDING_ 342
#define _ANCESTOR_OR_SELF_ 343
#define _DOCUMENT_ 344
#define _NOT_ 345
#define _USING_ 346
#define _NO_ 347
#define _SENSITIVE_ 348
#define _INSENSITIVE_ 349
#define _DIACRITICS_ 350
#define _WITHOUT_ 351
#define _WITHOUT_C_ 352
#define _STEMMING_ 353
#define _THESAURUS_ 354
#define _STOP_ 355
#define _WILDCARDS_ 356
#define _ENTIRE_ 357
#define _CONTENT_ 358
#define _WORD_ 359
#define _TYPE_ 360
#define _START_ 361
#define _END_ 362
#define _MOST_ 363
#define _SKIP_ 364
#define _COPY_ 365
#define _VALUE_ 366
#define _WHITESPACE_ 367
#define _PI_CONTENT_ 368
#define _XML_COMMENT_CONTENT_ 369
#define _EQ_ 370
#define _NE_ 371
#define _LT_ 372
#define _LE_ 373
#define _GT_ 374
#define _GE_ 375
#define _AT_ 376
#define _QUOT_ATTR_CONTENT_ 377
#define _APOS_ATTR_CONTENT_ 378
#define _WHITESPACE_ELEMENT_CONTENT_ 379
#define _ELEMENT_CONTENT_ 380
#define _AT_LM_ 381
#define _ORDERED_ 382
#define _UNORDERED_ 383
#define _QNAME_ 384
#define _XMLNS_QNAME_ 385
#define _CONSTR_QNAME_ 386
#define _STRING_LITERAL_ 387
#define _VARIABLE_ 388
#define _NCNAME_COLON_STAR_ 389
#define _STAR_COLON_NCNAME_ 390
#define _PI_TARGET_ 391
#define _PRAGMA_CONTENT_ 392
#define _RETURN_ 393
#define _FOR_ 394
#define _IN_ 395
#define _LET_ 396
#define _WHERE_ 397
#define _COUNT_ 398
#define _BY_ 399
#define _ORDER_ 400
#define _STABLE_ 401
#define _ASCENDING_ 402
#define _DESCENDING_ 403
#define _EMPTY_ 404
#define _GREATEST_ 405
#define _LEAST_ 406
#define _COLLATION_ 407
#define _SOME_ 408
#define _EVERY_ 409
#define _SATISFIES_ 410
#define _TYPESWITCH_ 411
#define _CASE_ 412
#define _CASE_S_ 413
#define _AS_ 414
#define _IF_ 415
#define _THEN_ 416
#define _ELSE_ 417
#define _OR_ 418
#define _AND_ 419
#define _INSTANCE_ 420
#define _OF_ 421
#define _CASTABLE_ 422
#define _TO_ 423
#define _DIV_ 424
#define _MOD_ 425
#define _UNION_ 426
#define _INTERSECT_ 427
#define _EXCEPT_ 428
#define _VALIDATE_ 429
#define _CAST_ 430
#define _TREAT_ 431
#define _IS_ 432
#define _PRESERVE_ 433
#define _STRIP_ 434
#define _NAMESPACE_ 435
#define _ITEM_ 436
#define _EXTERNAL_ 437
#define _ENCODING_ 438
#define _NO_PRESERVE_ 439
#define _INHERIT_ 440
#define _NO_INHERIT_ 441
#define _DECLARE_ 442
#define _CONSTRUCTION_ 443
#define _ORDERING_ 444
#define _DEFAULT_ 445
#define _COPY_NAMESPACES_ 446
#define _OPTION_ 447
#define _XQUERY_ 448
#define _VERSION_ 449
#define _IMPORT_ 450
#define _SCHEMA_ 451
#define _MODULE_ 452
#define _ELEMENT_ 453
#define _FUNCTION_ 454
#define _FUNCTION_EXT_ 455
#define _SCORE_ 456
#define _CONTAINS_ 457
#define _WEIGHT_ 458
#define _WINDOW_ 459
#define _DISTANCE_ 460
#define _OCCURS_ 461
#define _TIMES_ 462
#define _SAME_ 463
#define _DIFFERENT_ 464
#define _LOWERCASE_ 465
#define _UPPERCASE_ 466
#define _RELATIONSHIP_ 467
#define _LEVELS_ 468
#define _LANGUAGE_ 469
#define _ANY_ 470
#define _ALL_ 471
#define _PHRASE_ 472
#define _EXACTLY_ 473
#define _FROM_ 474
#define _WORDS_ 475
#define _SENTENCES_ 476
#define _PARAGRAPHS_ 477
#define _SENTENCE_ 478
#define _PARAGRAPH_ 479
#define _REPLACE_ 480
#define _MODIFY_ 481
#define _FIRST_ 482
#define _INSERT_ 483
#define _BEFORE_ 484
#define _AFTER_ 485
#define _REVALIDATION_ 486
#define _WITH_ 487
#define _NODES_ 488
#define _RENAME_ 489
#define _LAST_ 490
#define _DELETE_ 491
#define _INTO_ 492
#define _UPDATING_ 493
#define _ID_ 494
#define _KEY_ 495
#define _TEMPLATE_ 496
#define _MATCHES_ 497
#define _TUPLE_ 498
#define _MAP_ 499
#define _NAME_ 500
#define _CALL_ 501
#define _APPLY_ 502
#define _TEMPLATES_ 503
#define _MODE_ 504
#define _FTOR_ 505
#define _FTAND_ 506
#define _FTNOT_ 507
#define _TYPE_ALIAS_ 508
#define _XSLT_END_ELEMENT_ 509
#define _XSLT_STYLESHEET_ 510
#define _XSLT_TEMPLATE_ 511
#define _XSLT_VALUE_OF_ 512
#define _XSLT_TEXT_ 513
#define _XSLT_APPLY_TEMPLATES_ 514
#define _XSLT_CALL_TEMPLATE_ 515
#define _XSLT_WITH_PARAM_ 516
#define _XSLT_SEQUENCE_ 517
#define _XSLT_PARAM_ 518
#define _XSLT_FUNCTION_ 519
#define _XSLT_CHOOSE_ 520
#define _XSLT_WHEN_ 521
#define _XSLT_OTHERWISE_ 522
#define _XSLT_IF_ 523
#define _XSLT_VARIABLE_ 524
#define _XSLT_COMMENT_ 525
#define _XSLT_PI_ 526
#define _XSLT_DOCUMENT_ 527
#define _XSLT_ATTRIBUTE_ 528
#define _XSLT_NAMESPACE_ 529
#define _XSLT_ELEMENT_ 530
#define _XSLT_ANALYZE_STRING_ 531
#define _XSLT_MATCHING_SUBSTRING_ 532
#define _XSLT_NON_MATCHING_SUBSTRING_ 533
#define _XSLT_COPY_OF_ 534
#define _XSLT_COPY_ 535
#define _XSLT_FOR_EACH_ 536
#define _XSLT_OUTPUT_ 537
#define _XSLT_IMPORT_SCHEMA_ 538
#define _XSLT_TYPE_ALIAS_ 539
#define _XSLT_VERSION_ 540
#define _XSLT_MODE_ 541
#define _XSLT_NAME_ 542
#define _XSLT_DOCTYPE_PUBLIC_ 543
#define _XSLT_DOCTYPE_SYSTEM_ 544
#define _XSLT_ENCODING_ 545
#define _XSLT_MEDIA_TYPE_ 546
#define _XSLT_NORMALIZATION_FORM_ 547
#define _XSLT_STANDALONE_ 548
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 549
#define _XSLT_NAMESPACE_STR_ 550
#define _XSLT_SCHEMA_LOCATION_ 551
#define _XSLT_TUNNEL_ 552
#define _XSLT_REQUIRED_ 553
#define _XSLT_OVERRIDE_ 554
#define _XSLT_COPY_NAMESPACES_ 555
#define _XSLT_INHERIT_NAMESPACES_ 556
#define _XSLT_BYTE_ORDER_MARK_ 557
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 558
#define _XSLT_INCLUDE_CONTENT_TYPE_ 559
#define _XSLT_INDENT_ 560
#define _XSLT_OMIT_XML_DECLARATION_ 561
#define _XSLT_UNDECLARE_PREFIXES_ 562
#define _XSLT_MATCH_ 563
#define _XSLT_AS_ 564
#define _XSLT_SELECT_ 565
#define _XSLT_PRIORITY_ 566
#define _XSLT_TEST_ 567
#define _XSLT_SEPARATOR_ 568
#define _XSLT_NAMESPACE_A_ 569
#define _XSLT_REGEX_ 570
#define _XSLT_FLAGS_ 571
#define _XSLT_METHOD_ 572
#define _XSLT_CDATA_SECTION_ELEMENTS_ 573
#define _XSLT_USE_CHARACTER_MAPS_ 574
#define _XSLT_ELEMENT_NAME_ 575
#define _XSLT_XMLNS_ATTR_ 576
#define _XSLT_ATTR_NAME_ 577
#define _XSLT_TEXT_NODE_ 578
#define _XSLT_WS_TEXT_NODE_ 579
#define _HASH_DEFAULT_ 580
#define _HASH_ALL_ 581
#define _HASH_CURRENT_ 582
#define _XML_ 583
#define _HTML_ 584
#define _XHTML_ 585




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
#line 1135 "../src/parser/XQParser.cpp"

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
#define YYFINAL  404
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9019

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  331
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  381
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1071
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1783

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   585

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
     325,   326,   327,   328,   329,   330
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    14,    17,    21,    24,    27,
      30,    33,    34,    43,    44,    46,    50,    54,    61,    62,
      65,    68,    71,    80,    86,    93,    95,   100,   102,   103,
     106,   109,   110,   113,   116,   119,   122,   125,   128,   131,
     136,   138,   142,   145,   149,   153,   157,   158,   161,   164,
     167,   169,   171,   173,   178,   180,   183,   187,   190,   191,
     194,   198,   200,   203,   207,   211,   214,   217,   221,   223,
     226,   230,   234,   237,   240,   244,   246,   249,   253,   257,
     260,   262,   265,   269,   272,   276,   279,   282,   285,   288,
     291,   294,   297,   300,   303,   306,   309,   313,   316,   318,
     320,   322,   324,   326,   328,   331,   334,   336,   339,   343,
     346,   348,   351,   354,   358,   362,   367,   368,   372,   375,
     376,   379,   382,   383,   386,   389,   392,   394,   396,   398,
     400,   402,   404,   406,   408,   410,   412,   414,   416,   418,
     420,   422,   424,   426,   428,   432,   434,   438,   442,   446,
     448,   450,   454,   456,   460,   464,   466,   468,   470,   471,
     474,   478,   480,   483,   484,   487,   491,   493,   496,   500,
     504,   507,   510,   514,   518,   522,   527,   529,   532,   536,
     540,   541,   545,   550,   552,   556,   560,   564,   565,   569,
     570,   574,   579,   581,   584,   588,   592,   596,   598,   602,
     606,   608,   612,   616,   620,   622,   626,   628,   632,   636,
     640,   644,   648,   650,   654,   658,   662,   664,   668,   672,
     675,   677,   681,   684,   688,   690,   693,   696,   700,   702,
     706,   710,   712,   714,   716,   718,   720,   722,   727,   734,
     736,   738,   740,   742,   744,   747,   751,   755,   759,   763,
     766,   768,   772,   776,   779,   780,   785,   788,   791,   792,
     796,   801,   805,   808,   811,   814,   817,   824,   825,   829,
     833,   837,   841,   845,   849,   853,   857,   861,   865,   867,
     869,   871,   873,   875,   877,   879,   881,   883,   885,   887,
     893,   897,   901,   907,   913,   918,   922,   926,   930,   936,
     942,   948,   950,   952,   954,   956,   961,   965,   971,   976,
     977,   980,   984,   988,   992,  1000,  1005,  1009,  1013,  1014,
    1017,  1019,  1021,  1023,  1031,  1034,  1036,  1044,  1047,  1051,
    1052,  1055,  1057,  1059,  1062,  1068,  1070,  1074,  1078,  1080,
    1084,  1088,  1090,  1094,  1096,  1098,  1100,  1102,  1104,  1106,
    1108,  1110,  1112,  1114,  1116,  1118,  1120,  1124,  1126,  1129,
    1132,  1134,  1136,  1138,  1140,  1142,  1145,  1149,  1151,  1159,
    1160,  1164,  1165,  1169,  1172,  1176,  1178,  1184,  1190,  1193,
    1197,  1201,  1206,  1210,  1212,  1216,  1222,  1224,  1225,  1227,
    1229,  1230,  1233,  1236,  1241,  1246,  1250,  1252,  1258,  1265,
    1268,  1270,  1276,  1280,  1284,  1288,  1292,  1293,  1297,  1306,
    1310,  1312,  1316,  1318,  1322,  1326,  1327,  1332,  1336,  1340,
    1344,  1348,  1352,  1356,  1360,  1364,  1368,  1372,  1376,  1380,
    1382,  1387,  1393,  1395,  1399,  1401,  1405,  1409,  1411,  1415,
    1419,  1423,  1427,  1429,  1433,  1437,  1439,  1443,  1447,  1449,
    1454,  1456,  1461,  1463,  1468,  1470,  1475,  1477,  1480,  1483,
    1485,  1487,  1489,  1491,  1496,  1502,  1508,  1512,  1517,  1519,
    1522,  1527,  1529,  1532,  1534,  1537,  1540,  1542,  1544,  1548,
    1552,  1554,  1556,  1558,  1560,  1562,  1564,  1569,  1571,  1576,
    1579,  1581,  1584,  1587,  1590,  1593,  1596,  1599,  1602,  1605,
    1608,  1610,  1613,  1615,  1618,  1621,  1624,  1627,  1630,  1632,
    1634,  1636,  1638,  1640,  1642,  1644,  1646,  1648,  1653,  1655,
    1657,  1659,  1661,  1663,  1665,  1667,  1669,  1671,  1673,  1675,
    1677,  1679,  1681,  1683,  1686,  1688,  1692,  1695,  1697,  1702,
    1707,  1711,  1716,  1720,  1722,  1724,  1726,  1728,  1730,  1732,
    1734,  1736,  1742,  1753,  1755,  1757,  1758,  1766,  1774,  1775,
    1777,  1781,  1785,  1789,  1793,  1794,  1797,  1800,  1801,  1804,
    1807,  1808,  1811,  1814,  1815,  1818,  1821,  1822,  1825,  1828,
    1831,  1834,  1838,  1839,  1841,  1845,  1847,  1850,  1852,  1854,
    1856,  1858,  1860,  1862,  1864,  1869,  1873,  1875,  1879,  1882,
    1886,  1890,  1892,  1896,  1900,  1905,  1910,  1914,  1916,  1920,
    1923,  1927,  1930,  1931,  1933,  1934,  1937,  1940,  1944,  1945,
    1947,  1949,  1951,  1955,  1957,  1959,  1961,  1963,  1965,  1967,
    1969,  1971,  1973,  1975,  1977,  1979,  1981,  1983,  1985,  1989,
    1993,  1998,  2003,  2007,  2011,  2015,  2019,  2024,  2029,  2033,
    2038,  2045,  2047,  2049,  2054,  2056,  2060,  2065,  2072,  2080,
    2082,  2084,  2089,  2091,  2093,  2095,  2097,  2099,  2103,  2104,
    2107,  2108,  2111,  2115,  2117,  2121,  2123,  2128,  2130,  2133,
    2135,  2137,  2140,  2143,  2147,  2149,  2152,  2157,  2161,  2166,
    2167,  2169,  2172,  2174,  2177,  2179,  2180,  2184,  2187,  2191,
    2195,  2200,  2202,  2206,  2210,  2213,  2216,  2219,  2222,  2225,
    2227,  2229,  2231,  2233,  2235,  2238,  2242,  2244,  2246,  2248,
    2250,  2252,  2254,  2256,  2258,  2261,  2264,  2266,  2268,  2271,
    2274,  2276,  2279,  2282,  2285,  2291,  2297,  2300,  2301,  2305,
    2308,  2313,  2318,  2325,  2330,  2334,  2339,  2340,  2343,  2346,
    2350,  2352,  2356,  2359,  2362,  2365,  2367,  2370,  2374,  2378,
    2382,  2386,  2390,  2397,  2404,  2409,  2414,  2419,  2422,  2425,
    2428,  2431,  2434,  2442,  2448,  2454,  2461,  2465,  2467,  2472,
    2474,  2476,  2478,  2480,  2482,  2484,  2490,  2498,  2507,  2518,
    2525,  2534,  2535,  2538,  2541,  2545,  2546,  2549,  2551,  2555,
    2557,  2559,  2561,  2565,  2573,  2577,  2585,  2591,  2601,  2603,
    2605,  2607,  2609,  2613,  2619,  2621,  2623,  2627,  2632,  2636,
    2641,  2643,  2645,  2651,  2652,  2655,  2662,  2670,  2672,  2676,
    2680,  2682,  2684,  2689,  2693,  2695,  2699,  2702,  2709,  2713,
    2715,  2717,  2722,  2726,  2728,  2732,  2737,  2742,  2746,  2748,
    2752,  2756,  2758,  2762,  2768,  2770,  2772,  2778,  2781,  2782,
    2785,  2789,  2798,  2800,  2804,  2806,  2810,  2812,  2816,  2820,
    2824,  2828,  2832,  2836,  2838,  2842,  2846,  2848,  2852,  2856,
    2860,  2864,  2866,  2869,  2872,  2874,  2879,  2881,  2886,  2890,
    2893,  2895,  2897,  2899,  2901,  2902,  2904,  2906,  2910,  2912,
    2915,  2917,  2919,  2921,  2923,  2925,  2927,  2929,  2931,  2933,
    2935,  2937,  2939,  2941,  2943,  2945,  2947,  2949,  2951,  2953,
    2955,  2957,  2959,  2961,  2963,  2965,  2967,  2969,  2971,  2973,
    2975,  2977,  2979,  2981,  2983,  2985,  2987,  2989,  2991,  2993,
    2995,  2997,  2999,  3001,  3003,  3005,  3007,  3009,  3011,  3013,
    3015,  3017,  3019,  3021,  3023,  3025,  3027,  3029,  3031,  3033,
    3035,  3037,  3039,  3041,  3043,  3045,  3047,  3049,  3051,  3053,
    3055,  3057,  3059,  3061,  3063,  3065,  3067,  3069,  3071,  3073,
    3075,  3077,  3079,  3081,  3083,  3085,  3087,  3089,  3091,  3093,
    3095,  3097,  3099,  3101,  3103,  3105,  3107,  3109,  3111,  3113,
    3115,  3117,  3119,  3121,  3123,  3125,  3127,  3129,  3131,  3133,
    3135,  3137,  3139,  3141,  3143,  3145,  3147,  3149,  3151,  3153,
    3155,  3157,  3159,  3161,  3163,  3165,  3167,  3169,  3171,  3173,
    3175,  3177,  3179,  3181,  3183,  3185,  3187,  3189,  3191,  3193,
    3195,  3197,  3199,  3201,  3203,  3205,  3207,  3209,  3211,  3213,
    3215,  3217,  3219,  3221,  3223,  3225,  3227,  3229,  3231,  3233,
    3235,  3237,  3239,  3241,  3243,  3245,  3247,  3249,  3251,  3253,
    3255,  3257
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     332,     0,    -1,     3,   471,    -1,     4,   333,   429,    -1,
       6,   333,   334,    -1,     5,   343,    -1,     7,   333,   337,
      -1,     8,   336,    -1,     9,   693,    -1,    10,   694,    -1,
      11,   587,    -1,    -1,   187,   457,   199,   711,   463,   464,
     470,   335,    -1,    -1,   439,    -1,   457,   463,   464,    -1,
     430,   338,   339,    -1,   197,   180,   658,    40,   609,   439,
      -1,    -1,   339,   340,    -1,   339,   341,    -1,   339,   342,
      -1,   187,   457,   199,   711,   463,   464,   470,   439,    -1,
     187,   192,   710,   132,   439,    -1,   187,   180,   658,    40,
     609,   439,    -1,   344,    -1,   255,   345,   346,   254,    -1,
     368,    -1,    -1,   345,   285,    -1,   345,   294,    -1,    -1,
     346,   347,    -1,   346,   351,    -1,   346,   356,    -1,   346,
     358,    -1,   346,   360,    -1,   346,   366,    -1,   346,   364,
      -1,   348,   353,   371,   254,    -1,   256,    -1,   348,   308,
     419,    -1,   348,   287,    -1,   348,   311,   350,    -1,   348,
     286,   349,    -1,   348,   309,   587,    -1,    -1,   349,   129,
      -1,   349,   325,    -1,   349,   326,    -1,    59,    -1,    60,
      -1,    61,    -1,   352,   353,   371,   254,    -1,   264,    -1,
     352,   287,    -1,   352,   309,   587,    -1,   352,   299,    -1,
      -1,   353,   354,    -1,   355,   371,   254,    -1,   263,    -1,
     355,   287,    -1,   355,   310,   472,    -1,   355,   309,   587,
      -1,   355,   298,    -1,   355,   297,    -1,   357,   371,   254,
      -1,   263,    -1,   357,   287,    -1,   357,   310,   472,    -1,
     357,   309,   587,    -1,   357,   298,    -1,   357,   297,    -1,
     359,   371,   254,    -1,   269,    -1,   359,   287,    -1,   359,
     310,   472,    -1,   359,   309,   587,    -1,   361,   254,    -1,
     282,    -1,   361,   287,    -1,   361,   317,   362,    -1,   361,
     302,    -1,   361,   318,   363,    -1,   361,   288,    -1,   361,
     289,    -1,   361,   290,    -1,   361,   303,    -1,   361,   304,
      -1,   361,   305,    -1,   361,   291,    -1,   361,   292,    -1,
     361,   306,    -1,   361,   293,    -1,   361,   307,    -1,   361,
     319,   363,    -1,   361,   285,    -1,   328,    -1,   329,    -1,
     330,    -1,    70,    -1,   129,    -1,   129,    -1,   363,   129,
      -1,   365,   254,    -1,   284,    -1,   365,   287,    -1,   365,
     309,   589,    -1,   367,   254,    -1,   283,    -1,   283,   295,
      -1,   283,   296,    -1,   283,   295,   296,    -1,   283,   296,
     295,    -1,   320,   369,   371,   254,    -1,    -1,   369,   322,
     370,    -1,   369,   321,    -1,    -1,   370,   470,    -1,   370,
     122,    -1,    -1,   371,   376,    -1,   371,   368,    -1,   371,
     372,    -1,   373,    -1,   375,    -1,   377,    -1,   381,    -1,
     386,    -1,   390,    -1,   388,    -1,   399,    -1,   401,    -1,
     403,    -1,   405,    -1,   407,    -1,   409,    -1,   411,    -1,
     395,    -1,   413,    -1,   415,    -1,   417,    -1,   374,   371,
     254,    -1,   257,    -1,   374,   310,   472,    -1,   374,   313,
     370,    -1,   258,   376,   254,    -1,   323,    -1,   324,    -1,
     378,   380,   254,    -1,   259,    -1,   378,   310,   472,    -1,
     378,   286,   379,    -1,   129,    -1,   325,    -1,   327,    -1,
      -1,   380,   384,    -1,   382,   383,   254,    -1,   260,    -1,
     382,   287,    -1,    -1,   383,   384,    -1,   385,   371,   254,
      -1,   261,    -1,   385,   287,    -1,   385,   310,   472,    -1,
     385,   309,   587,    -1,   385,   297,    -1,   387,   254,    -1,
     262,   310,   472,    -1,   389,   371,   254,    -1,   268,   312,
     472,    -1,   265,   391,   394,   254,    -1,   392,    -1,   391,
     392,    -1,   393,   371,   254,    -1,   266,   312,   472,    -1,
      -1,   267,   371,   254,    -1,   396,   397,   398,   254,    -1,
     276,    -1,   396,   310,   472,    -1,   396,   315,   370,    -1,
     396,   316,   370,    -1,    -1,   277,   371,   254,    -1,    -1,
     278,   371,   254,    -1,   400,   371,   254,   371,    -1,   269,
      -1,   400,   287,    -1,   400,   310,   472,    -1,   400,   309,
     587,    -1,   402,   371,   254,    -1,   270,    -1,   402,   310,
     472,    -1,   404,   371,   254,    -1,   271,    -1,   404,   287,
     370,    -1,   404,   310,   472,    -1,   406,   371,   254,    -1,
     272,    -1,   408,   371,   254,    -1,   273,    -1,   408,   287,
     370,    -1,   408,   314,   370,    -1,   408,   310,   472,    -1,
     408,   313,   370,    -1,   410,   371,   254,    -1,   274,    -1,
     410,   287,   370,    -1,   410,   310,   472,    -1,   412,   371,
     254,    -1,   275,    -1,   412,   287,   370,    -1,   412,   314,
     370,    -1,   414,   254,    -1,   279,    -1,   414,   310,   472,
      -1,   414,   300,    -1,   416,   371,   254,    -1,   280,    -1,
     416,   300,    -1,   416,   301,    -1,   418,   371,   254,    -1,
     281,    -1,   418,   310,   472,    -1,   419,    15,   420,    -1,
     420,    -1,   425,    -1,    39,    -1,   422,    -1,    39,    -1,
      33,    -1,   239,    43,   423,    44,    -1,   240,    43,   657,
      36,   424,    44,    -1,   657,    -1,   545,    -1,   543,    -1,
     545,    -1,   426,    -1,   421,   426,    -1,   422,    39,   426,
      -1,   422,    33,   426,    -1,   425,    39,   426,    -1,   425,
      33,   426,    -1,   427,   428,    -1,   538,    -1,    78,    22,
     538,    -1,    62,    22,   538,    -1,    23,   538,    -1,    -1,
     428,    24,   472,    25,    -1,   430,   433,    -1,   430,   434,
      -1,    -1,   193,   431,   439,    -1,   193,   431,   432,   439,
      -1,   193,   432,   439,    -1,   194,   132,    -1,   183,   132,
      -1,   436,   471,    -1,   435,   436,    -1,   197,   180,   658,
      40,   609,   439,    -1,    -1,   436,   437,   439,    -1,   436,
     438,   439,    -1,   436,   440,   439,    -1,   436,   442,   439,
      -1,   436,   460,   439,    -1,   436,   462,   439,    -1,   436,
     660,   439,    -1,   436,   443,   439,    -1,   436,   444,   439,
      -1,   436,   692,   439,    -1,   441,    -1,   450,    -1,   451,
      -1,   456,    -1,   445,    -1,   446,    -1,   644,    -1,   447,
      -1,   452,    -1,   455,    -1,    53,    -1,   187,   180,   658,
      40,   609,    -1,   187,    72,   178,    -1,   187,    72,   179,
      -1,   187,   190,   198,   180,   609,    -1,   187,   190,   199,
     180,   609,    -1,   187,   192,   710,   132,    -1,   187,    73,
     627,    -1,   187,   189,   127,    -1,   187,   189,   128,    -1,
     187,   190,   145,   149,   150,    -1,   187,   190,   145,   149,
     151,    -1,   187,   191,   448,    36,   449,    -1,   178,    -1,
     184,    -1,   185,    -1,   186,    -1,   187,   190,   152,   609,
      -1,   187,    74,   609,    -1,   195,   196,   454,   609,   453,
      -1,   195,   196,   609,   453,    -1,    -1,   121,   609,    -1,
     453,    36,   609,    -1,   180,   658,    40,    -1,   190,   198,
     180,    -1,   195,   197,   180,   658,    40,   609,   453,    -1,
     195,   197,   609,   453,    -1,   187,   188,   178,    -1,   187,
     188,   179,    -1,    -1,   457,   458,    -1,   459,    -1,   466,
      -1,   238,    -1,   187,   457,   133,    12,   546,   586,   461,
      -1,    13,   473,    -1,   182,    -1,   187,   457,   199,   711,
     463,   464,   465,    -1,    43,    44,    -1,    43,   468,    44,
      -1,    -1,   159,   587,    -1,   470,    -1,   182,    -1,    55,
     710,    -1,    55,   710,    43,   467,    44,    -1,   543,    -1,
     467,    36,   543,    -1,   468,    36,   469,    -1,   469,    -1,
      12,   546,   586,    -1,    51,   472,    52,    -1,   472,    -1,
     472,    36,   473,    -1,   473,    -1,   474,    -1,   494,    -1,
     497,    -1,   503,    -1,   645,    -1,   647,    -1,   650,    -1,
     649,    -1,   651,    -1,   504,    -1,   666,    -1,   667,    -1,
     475,   138,   473,    -1,   476,    -1,   475,   488,    -1,   475,
     477,    -1,   478,    -1,   483,    -1,   476,    -1,   486,    -1,
     487,    -1,   139,   479,    -1,   479,    36,   480,    -1,   480,
      -1,    12,   546,   586,   481,   482,   140,   473,    -1,    -1,
     121,    12,   546,    -1,    -1,   201,    12,   546,    -1,   141,
     484,    -1,   484,    36,   485,    -1,   485,    -1,    12,   546,
     586,    13,   473,    -1,   201,    12,   546,    13,   473,    -1,
     142,   473,    -1,   143,    12,   546,    -1,   145,   144,   489,
      -1,   146,   145,   144,   489,    -1,   489,    36,   490,    -1,
     490,    -1,   491,   492,   493,    -1,   491,   492,   493,   152,
     609,    -1,   473,    -1,    -1,   147,    -1,   148,    -1,    -1,
     149,   150,    -1,   149,   151,    -1,   153,   495,   155,   473,
      -1,   154,   495,   155,   473,    -1,   495,    36,   496,    -1,
     496,    -1,    12,   546,   586,   140,   473,    -1,   156,    43,
     472,    44,   498,   499,    -1,   498,   500,    -1,   500,    -1,
     190,    12,   546,   138,   473,    -1,   190,   138,   473,    -1,
     501,   138,   473,    -1,   157,   502,   587,    -1,   501,    15,
     587,    -1,    -1,    12,   546,   159,    -1,   160,    43,   472,
      44,   161,   473,   162,   473,    -1,   504,   163,   505,    -1,
     505,    -1,   505,   164,   506,    -1,   506,    -1,   508,    40,
     508,    -1,   508,    16,   508,    -1,    -1,   508,    27,   507,
     508,    -1,   508,    17,   508,    -1,   508,    18,   508,    -1,
     508,    19,   508,    -1,   508,   115,   508,    -1,   508,   116,
     508,    -1,   508,   117,   508,    -1,   508,   118,   508,    -1,
     508,   119,   508,    -1,   508,   120,   508,    -1,   508,   177,
     508,    -1,   508,    20,   508,    -1,   508,    21,   508,    -1,
     508,    -1,   509,   202,    70,   610,    -1,   509,   202,    70,
     610,   643,    -1,   509,    -1,   510,   168,   510,    -1,   510,
      -1,   510,    37,   511,    -1,   510,    38,   511,    -1,   511,
      -1,   511,    14,   512,    -1,   511,   169,   512,    -1,   511,
      77,   512,    -1,   511,   170,   512,    -1,   512,    -1,   512,
      15,   513,    -1,   512,   171,   513,    -1,   513,    -1,   513,
     172,   514,    -1,   513,   173,   514,    -1,   514,    -1,   515,
     165,   166,   587,    -1,   515,    -1,   516,   176,   159,   587,
      -1,   516,    -1,   517,   167,   159,   584,    -1,   517,    -1,
     518,   175,   159,   584,    -1,   518,    -1,    38,   518,    -1,
      37,   518,    -1,   519,    -1,   520,    -1,   525,    -1,   521,
      -1,   174,    51,   472,    52,    -1,   174,    75,    51,   472,
      52,    -1,   174,    76,    51,   472,    52,    -1,   522,    51,
      52,    -1,   522,    51,   472,    52,    -1,   523,    -1,   522,
     523,    -1,    35,   559,   710,   524,    -1,   137,    -1,   112,
     137,    -1,   526,    -1,   526,   527,    -1,    33,   527,    -1,
     527,    -1,    39,    -1,   527,    39,   528,    -1,   527,    33,
     528,    -1,   528,    -1,   529,    -1,   541,    -1,   530,    -1,
     531,    -1,   532,    -1,   530,    24,   472,    25,    -1,   535,
      -1,   531,    24,   472,    25,    -1,   533,   538,    -1,   534,
      -1,    78,    22,    -1,    79,    22,    -1,    62,    22,    -1,
      80,    22,    -1,    81,    22,    -1,    82,    22,    -1,    83,
      22,    -1,   180,    22,    -1,    23,   538,    -1,   538,    -1,
     536,   538,    -1,   537,    -1,    84,    22,    -1,    85,    22,
      -1,    86,    22,    -1,    87,    22,    -1,    88,    22,    -1,
      42,    -1,   591,    -1,   539,    -1,   659,    -1,   540,    -1,
      14,    -1,   134,    -1,   135,    -1,   542,    -1,   541,    24,
     472,    25,    -1,   674,    -1,   543,    -1,   545,    -1,   547,
      -1,   548,    -1,   551,    -1,   554,    -1,   549,    -1,   550,
      -1,   671,    -1,   544,    -1,   657,    -1,   654,    -1,   655,
      -1,   656,    -1,    12,   546,    -1,   710,    -1,    43,   472,
      44,    -1,    43,    44,    -1,    41,    -1,   127,    51,   472,
      52,    -1,   128,    51,   472,    52,    -1,   711,    43,    44,
      -1,   711,    43,   552,    44,    -1,   552,    36,   553,    -1,
     553,    -1,   473,    -1,    26,    -1,   555,    -1,   571,    -1,
     556,    -1,   567,    -1,   569,    -1,    27,   557,   558,   559,
      45,    -1,    27,   557,   558,   559,    28,   566,    34,   557,
     559,    29,    -1,   129,    -1,   130,    -1,    -1,   558,   112,
     129,   559,    46,   559,   560,    -1,   558,   112,   130,   559,
      46,   559,   561,    -1,    -1,   112,    -1,    47,   562,    48,
      -1,    49,   564,    50,    -1,    47,   563,    48,    -1,    49,
     565,    50,    -1,    -1,   562,   470,    -1,   562,   122,    -1,
      -1,   563,   470,    -1,   563,   122,    -1,    -1,   564,   470,
      -1,   564,   123,    -1,    -1,   565,   470,    -1,   565,   123,
      -1,    -1,   566,   555,    -1,   566,   470,    -1,   566,   125,
      -1,   566,   124,    -1,    31,   568,    32,    -1,    -1,   114,
      -1,    30,   136,   570,    -1,   113,    -1,   112,   113,    -1,
     572,    -1,   573,    -1,   576,    -1,   578,    -1,   579,    -1,
     580,    -1,   581,    -1,    89,    51,   472,    52,    -1,   198,
     574,   575,    -1,   131,    -1,    51,   472,    52,    -1,    51,
      52,    -1,    51,   472,    52,    -1,    62,   577,   575,    -1,
     131,    -1,    51,   472,    52,    -1,   180,   582,   575,    -1,
      70,    51,   472,    52,    -1,    63,    51,   472,    52,    -1,
      67,   582,   583,    -1,   131,    -1,    51,   472,    52,    -1,
      51,    52,    -1,    51,   472,    52,    -1,   590,   585,    -1,
      -1,    26,    -1,    -1,   159,   587,    -1,   589,   588,    -1,
      71,    43,    44,    -1,    -1,    14,    -1,    37,    -1,    26,
      -1,   181,    43,    44,    -1,   590,    -1,   591,    -1,   675,
      -1,   680,    -1,   659,    -1,   593,    -1,   602,    -1,   598,
      -1,   604,    -1,   600,    -1,   597,    -1,   595,    -1,   594,
      -1,   596,    -1,   592,    -1,    66,    43,    44,    -1,    64,
      43,    44,    -1,    64,    43,   602,    44,    -1,    64,    43,
     604,    44,    -1,    70,    43,    44,    -1,    63,    43,    44,
      -1,    65,    43,    44,    -1,    67,    43,    44,    -1,    67,
      43,   658,    44,    -1,    67,    43,   132,    44,    -1,    62,
      43,    44,    -1,    62,    43,   599,    44,    -1,    62,    43,
     599,    36,   608,    44,    -1,   606,    -1,    14,    -1,    68,
      43,   601,    44,    -1,   606,    -1,   198,    43,    44,    -1,
     198,    43,   603,    44,    -1,   198,    43,   603,    36,   608,
      44,    -1,   198,    43,   603,    36,   608,    26,    44,    -1,
     607,    -1,    14,    -1,    69,    43,   605,    44,    -1,   607,
      -1,   659,    -1,   659,    -1,   659,    -1,   132,    -1,   613,
     612,   611,    -1,    -1,   203,   509,    -1,    -1,   612,   624,
      -1,   613,   250,   614,    -1,   614,    -1,   614,   251,   615,
      -1,   615,    -1,   615,    90,   140,   616,    -1,   616,    -1,
     252,   617,    -1,   617,    -1,   618,    -1,   618,   627,    -1,
     619,   622,    -1,    43,   610,    44,    -1,   620,    -1,   543,
     621,    -1,    51,   472,    52,   621,    -1,   522,    51,    52,
      -1,   522,    51,   610,    52,    -1,    -1,   215,    -1,   215,
     104,    -1,   216,    -1,   216,   220,    -1,   217,    -1,    -1,
     206,   623,   207,    -1,   218,   510,    -1,   126,   151,   510,
      -1,   126,   108,   510,    -1,   219,   510,   168,   510,    -1,
     127,    -1,   204,   510,   625,    -1,   205,   623,   625,    -1,
     208,   626,    -1,   209,   626,    -1,   121,   106,    -1,   121,
     107,    -1,   102,   103,    -1,   220,    -1,   221,    -1,   222,
      -1,   223,    -1,   224,    -1,    91,   628,    -1,   627,    91,
     628,    -1,   640,    -1,   641,    -1,   632,    -1,   631,    -1,
     629,    -1,   630,    -1,   635,    -1,   642,    -1,   158,    94,
      -1,   158,    93,    -1,   210,    -1,   211,    -1,    95,    94,
      -1,    95,    93,    -1,    98,    -1,    92,    98,    -1,    99,
     634,    -1,    99,   190,    -1,    99,    43,   634,   633,    44,
      -1,    99,    43,   190,   633,    44,    -1,    92,    99,    -1,
      -1,   633,    36,   634,    -1,   121,   609,    -1,   121,   609,
     212,   657,    -1,   121,   609,   623,   213,    -1,   121,   609,
     212,   657,   623,   213,    -1,   100,   220,   637,   636,    -1,
      92,   100,   220,    -1,   100,   220,   190,   636,    -1,    -1,
     636,   639,    -1,   121,   609,    -1,    43,   638,    44,    -1,
     657,    -1,   638,    36,   657,    -1,   171,   637,    -1,   173,
     637,    -1,   214,   657,    -1,   101,    -1,    92,   101,    -1,
     192,   710,   132,    -1,    97,   103,   512,    -1,   187,   231,
      76,    -1,   187,   231,    75,    -1,   187,   231,   109,    -1,
     646,   473,   159,   227,   237,   473,    -1,   646,   473,   159,
     235,   237,   473,    -1,   646,   473,   237,   473,    -1,   646,
     473,   230,   473,    -1,   646,   473,   229,   473,    -1,   228,
      66,    -1,   228,   233,    -1,   648,   473,    -1,   236,    66,
      -1,   236,   233,    -1,   225,   111,   166,    66,   473,   232,
     473,    -1,   225,    66,   473,   232,   473,    -1,   234,    66,
     473,   159,   473,    -1,   110,   652,   226,   473,   138,   473,
      -1,   652,    36,   653,    -1,   653,    -1,    12,   546,    13,
     473,    -1,    59,    -1,    60,    -1,    61,    -1,   132,    -1,
     710,    -1,   710,    -1,   187,   241,   245,   710,   470,    -1,
     187,   241,   245,   710,   662,   661,   470,    -1,   187,   241,
     245,   710,   663,   242,   419,   470,    -1,   187,   241,   245,
     710,   663,   242,   419,   662,   661,   470,    -1,   187,   241,
     663,   242,   419,   470,    -1,   187,   241,   663,   242,   419,
     662,   661,   470,    -1,    -1,   159,   587,    -1,    43,    44,
      -1,    43,   468,    44,    -1,    -1,   249,   664,    -1,   665,
      -1,   664,    36,   665,    -1,   129,    -1,   325,    -1,   326,
      -1,   246,   241,   710,    -1,   246,   241,   710,   232,    43,
     669,    44,    -1,   247,   248,   473,    -1,   247,   248,   473,
     232,    43,   669,    44,    -1,   247,   248,   473,   249,   668,
      -1,   247,   248,   473,   249,   668,   232,    43,   669,    44,
      -1,   710,    -1,   325,    -1,   327,    -1,   670,    -1,   669,
      36,   670,    -1,    12,   546,   586,    13,   473,    -1,   672,
      -1,   673,    -1,   711,    54,    59,    -1,   200,   463,   586,
     470,    -1,   541,    43,    44,    -1,   541,    43,   552,    44,
      -1,   676,    -1,   678,    -1,   677,   200,    43,    14,    44,
      -1,    -1,   677,   466,    -1,   677,   200,    43,    44,   159,
     587,    -1,   677,   200,    43,   679,    44,   159,   587,    -1,
     587,    -1,   679,    36,   587,    -1,    43,   589,    44,    -1,
     681,    -1,   684,    -1,   243,    43,   682,    44,    -1,   243,
      43,    44,    -1,   683,    -1,   682,    36,   683,    -1,   710,
     586,    -1,   244,    43,   590,    36,   587,    44,    -1,   244,
      43,    44,    -1,   685,    -1,   688,    -1,   243,    51,   686,
      52,    -1,   243,    51,    52,    -1,   687,    -1,   686,    36,
     687,    -1,   710,   586,    13,   473,    -1,   244,    51,   689,
      52,    -1,   244,    51,    52,    -1,   690,    -1,   689,    36,
     690,    -1,   473,    13,   473,    -1,   691,    -1,   541,    23,
     710,    -1,   187,   253,   710,   159,   589,    -1,   695,    -1,
     698,    -1,   710,    56,   698,   696,   697,    -1,   695,   697,
      -1,    -1,   142,   473,    -1,    58,   709,   696,    -1,   160,
      43,   698,    44,   161,   698,   162,   698,    -1,   699,    -1,
     699,   163,   700,    -1,   700,    -1,   700,   164,   701,    -1,
     701,    -1,   702,   115,   702,    -1,   702,   116,   702,    -1,
     702,   119,   702,    -1,   702,   120,   702,    -1,   702,   117,
     702,    -1,   702,   118,   702,    -1,   702,    -1,   702,    37,
     703,    -1,   702,    38,   703,    -1,   703,    -1,   703,    14,
     704,    -1,   703,   169,   704,    -1,   703,    77,   704,    -1,
     703,   170,   704,    -1,   704,    -1,    37,   704,    -1,    38,
     704,    -1,   705,    -1,   705,    24,   698,    25,    -1,   706,
      -1,   711,    43,   707,    44,    -1,    43,   707,    44,    -1,
      57,   710,    -1,    59,    -1,    60,    -1,    61,    -1,   132,
      -1,    -1,   708,    -1,   698,    -1,   708,    36,   698,    -1,
     473,    -1,    57,   710,    -1,   711,    -1,    62,    -1,    63,
      -1,    64,    -1,   198,    -1,   181,    -1,   160,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,   156,
      -1,    71,    -1,    65,    -1,   129,    -1,    72,    -1,    73,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,
      -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,
      -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    90,    -1,    93,    -1,    94,    -1,    95,
      -1,    96,    -1,    98,    -1,    99,    -1,   100,    -1,   101,
      -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,
      -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,   111,
      -1,   115,    -1,   116,    -1,   117,    -1,   118,    -1,   119,
      -1,   120,    -1,   121,    -1,   133,    -1,   138,    -1,   139,
      -1,   140,    -1,   141,    -1,   142,    -1,   144,    -1,   145,
      -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,
      -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,   155,
      -1,   157,    -1,   159,    -1,   161,    -1,   162,    -1,   163,
      -1,   164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,
      -1,   169,    -1,   170,    -1,   171,    -1,   172,    -1,   173,
      -1,   174,    -1,   175,    -1,   176,    -1,   177,    -1,   178,
      -1,   179,    -1,   180,    -1,   182,    -1,   183,    -1,   184,
      -1,   185,    -1,   186,    -1,   187,    -1,   188,    -1,   189,
      -1,   190,    -1,   191,    -1,   192,    -1,   194,    -1,   195,
      -1,   196,    -1,   199,    -1,   201,    -1,    91,    -1,    92,
      -1,   202,    -1,   203,    -1,   204,    -1,   205,    -1,   206,
      -1,   207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,
      -1,   212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,
      -1,   217,    -1,   218,    -1,   219,    -1,   220,    -1,   221,
      -1,   222,    -1,   223,    -1,   224,    -1,   225,    -1,   226,
      -1,   227,    -1,   228,    -1,   229,    -1,   230,    -1,   231,
      -1,   232,    -1,   233,    -1,   234,    -1,   235,    -1,   236,
      -1,   237,    -1,   238,    -1,   127,    -1,   128,    -1,   239,
      -1,   240,    -1,   241,    -1,   242,    -1,   245,    -1,   246,
      -1,   247,    -1,   248,    -1,   249,    -1,   250,    -1,   251,
      -1,   252,    -1,   243,    -1,   253,    -1,   244,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   798,   798,   800,   801,   803,   805,   806,   808,   809,
     811,   819,   824,   832,   832,   835,   844,   855,   895,   898,
     899,   900,   904,   920,   947,   960,   989,   992,  1014,  1016,
    1020,  1027,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1039,
    1058,  1063,  1068,  1075,  1080,  1085,  1094,  1097,  1103,  1108,
    1115,  1115,  1115,  1118,  1131,  1136,  1143,  1148,  1157,  1160,
    1168,  1195,  1199,  1206,  1212,  1217,  1222,  1231,  1255,  1259,
    1266,  1271,  1276,  1281,  1292,  1310,  1314,  1321,  1326,  1334,
    1359,  1362,  1365,  1368,  1371,  1374,  1377,  1380,  1383,  1386,
    1389,  1392,  1395,  1398,  1401,  1404,  1407,  1410,  1416,  1417,
    1418,  1419,  1420,  1432,  1435,  1441,  1455,  1459,  1466,  1473,
    1476,  1481,  1486,  1494,  1502,  1513,  1524,  1527,  1534,  1544,
    1547,  1552,  1561,  1564,  1569,  1574,  1582,  1583,  1584,  1585,
    1586,  1587,  1588,  1589,  1590,  1591,  1592,  1593,  1594,  1595,
    1596,  1597,  1598,  1599,  1603,  1621,  1625,  1630,  1639,  1645,
    1645,  1648,  1668,  1672,  1677,  1685,  1690,  1694,  1702,  1705,
    1713,  1726,  1730,  1741,  1744,  1752,  1770,  1774,  1781,  1786,
    1791,  1799,  1805,  1813,  1821,  1828,  1842,  1846,  1860,  1869,
    1877,  1880,  1887,  1922,  1926,  1931,  1937,  1947,  1950,  1958,
    1961,  1968,  1986,  1990,  1997,  2002,  2010,  2028,  2032,  2040,
    2062,  2066,  2073,  2081,  2090,  2098,  2136,  2140,  2147,  2154,
    2163,  2172,  2199,  2203,  2210,  2222,  2249,  2253,  2260,  2270,
    2282,  2286,  2291,  2300,  2313,  2317,  2322,  2331,  2345,  2349,
    2362,  2367,  2379,  2383,  2391,  2404,  2412,  2425,  2432,  2446,
    2446,  2449,  2449,  2471,  2475,  2479,  2497,  2515,  2525,  2539,
    2547,  2553,  2559,  2565,  2577,  2580,  2594,  2595,  2600,  2602,
    2603,  2604,  2608,  2628,  2645,  2648,  2652,  2664,  2666,  2670,
    2674,  2678,  2682,  2686,  2692,  2698,  2702,  2706,  2720,  2721,
    2722,  2723,  2724,  2725,  2726,  2727,  2731,  2731,  2734,  2738,
    2746,  2751,  2760,  2765,  2774,  2855,  2863,  2868,  2877,  2882,
    2891,  2901,  2905,  2913,  2917,  2925,  2941,  2950,  2962,  2971,
    2974,  2979,  2988,  2992,  3000,  3010,  3022,  3027,  3037,  3040,
    3047,  3047,  3051,  3063,  3070,  3074,  3082,  3091,  3095,  3103,
    3106,  3114,  3115,  3123,  3130,  3137,  3142,  3151,  3156,  3166,
    3174,  3182,  3195,  3210,  3217,  3218,  3219,  3220,  3221,  3222,
    3223,  3224,  3225,  3226,  3227,  3228,  3233,  3277,  3278,  3291,
    3298,  3298,  3301,  3301,  3301,  3306,  3313,  3317,  3321,  3333,
    3336,  3347,  3350,  3360,  3367,  3371,  3375,  3379,  3388,  3396,
    3404,  3409,  3417,  3421,  3427,  3434,  3449,  3464,  3467,  3471,
    3479,  3487,  3491,  3500,  3508,  3519,  3523,  3527,  3538,  3545,
    3554,  3558,  3562,  3570,  3588,  3593,  3603,  3606,  3614,  3622,
    3631,  3636,  3645,  3655,  3659,  3663,  3663,  3667,  3671,  3675,
    3679,  3683,  3687,  3691,  3695,  3699,  3703,  3707,  3711,  3715,
    3720,  3724,  3728,  3733,  3740,  3745,  3749,  3753,  3758,  3762,
    3766,  3770,  3774,  3779,  3783,  3787,  3792,  3796,  3800,  3805,
    3822,  3827,  3832,  3837,  3841,  3846,  3850,  3855,  3861,  3867,
    3872,  3873,  3874,  3882,  3886,  3890,  3898,  3905,  3914,  3914,
    3918,  3938,  3939,  3947,  3948,  3954,  3975,  3979,  3993,  3999,
    4012,  4016,  4016,  4020,  4021,  4030,  4031,  4037,  4038,  4047,
    4059,  4070,  4074,  4078,  4082,  4086,  4090,  4094,  4098,  4106,
    4114,  4131,  4139,  4148,  4152,  4156,  4160,  4164,  4172,  4184,
    4189,  4194,  4201,  4206,  4213,  4220,  4232,  4233,  4237,  4243,
    4244,  4245,  4246,  4247,  4248,  4249,  4250,  4251,  4255,  4255,
    4258,  4258,  4258,  4262,  4269,  4273,  4277,  4285,  4293,  4303,
    4313,  4317,  4340,  4345,  4355,  4356,  4365,  4369,  4378,  4378,
    4378,  4382,  4388,  4397,  4397,  4402,  4405,  4414,  4425,  4425,
    4430,  4434,  4441,  4445,  4456,  4459,  4464,  4473,  4476,  4480,
    4492,  4495,  4500,  4509,  4512,  4516,  4532,  4535,  4540,  4545,
    4550,  4561,  4571,  4574,  4579,  4589,  4590,  4604,  4605,  4606,
    4607,  4608,  4609,  4610,  4615,  4623,  4631,  4635,  4643,  4647,
    4656,  4663,  4667,  4677,  4685,  4693,  4701,  4708,  4716,  4723,
    4727,  4735,  4743,  4746,  4755,  4758,  4768,  4772,  4782,  4783,
    4785,  4787,  4793,  4797,  4798,  4799,  4800,  4805,  4821,  4822,
    4823,  4824,  4825,  4826,  4827,  4828,  4829,  4830,  4835,  4843,
    4847,  4854,  4865,  4873,  4881,  4890,  4894,  4898,  4906,  4910,
    4914,  4922,  4923,  4931,  4939,  4944,  4948,  4952,  4956,  4965,
    4966,  4974,  4981,  4984,  4987,  4990,  4994,  5006,  5022,  5024,
    5031,  5034,  5043,  5055,  5060,  5072,  5077,  5081,  5086,  5091,
    5096,  5097,  5106,  5111,  5115,  5121,  5125,  5133,  5138,  5148,
    5151,  5155,  5159,  5163,  5167,  5175,  5177,  5188,  5194,  5200,
    5206,  5221,  5225,  5229,  5233,  5237,  5241,  5245,  5249,  5257,
    5261,  5265,  5273,  5277,  5285,  5286,  5298,  5299,  5300,  5301,
    5302,  5303,  5304,  5305,  5313,  5317,  5321,  5325,  5334,  5338,
    5346,  5350,  5360,  5364,  5368,  5372,  5376,  5384,  5386,  5393,
    5397,  5401,  5405,  5415,  5419,  5423,  5431,  5433,  5441,  5445,
    5452,  5456,  5464,  5468,  5476,  5484,  5488,  5496,  5503,  5511,
    5516,  5521,  5533,  5537,  5541,  5545,  5549,  5555,  5555,  5560,
    5566,  5566,  5571,  5575,  5585,  5593,  5600,  5605,  5613,  5622,
    5630,  5638,  5647,  5654,  5663,  5675,  5680,  5685,  5691,  5697,
    5703,  5713,  5716,  5724,  5728,  5736,  5740,  5748,  5753,  5762,
    5766,  5770,  5778,  5782,  5790,  5794,  5798,  5802,  5810,  5814,
    5818,  5826,  5831,  5841,  5854,  5854,  5858,  5866,  5877,  5882,
    5906,  5906,  5910,  5916,  5918,  5922,  5926,  5933,  5938,  5947,
    5956,  5956,  5960,  5964,  5971,  5977,  5987,  5995,  6000,  6006,
    6006,  6010,  6018,  6025,  6026,  6034,  6043,  6047,  6055,  6063,
    6073,  6084,  6087,  6095,  6105,  6112,  6119,  6124,  6133,  6136,
    6143,  6150,  6154,  6158,  6168,  6172,  6182,  6186,  6190,  6194,
    6198,  6202,  6206,  6210,  6214,  6218,  6222,  6226,  6230,  6234,
    6238,  6242,  6246,  6250,  6254,  6258,  6262,  6266,  6274,  6280,
    6284,  6288,  6292,  6296,  6304,  6307,  6311,  6315,  6323,  6327,
    6338,  6338,  6338,  6338,  6338,  6338,  6338,  6338,  6339,  6339,
    6339,  6339,  6339,  6339,  6340,  6344,  6344,  6344,  6344,  6344,
    6344,  6344,  6344,  6344,  6344,  6345,  6345,  6345,  6345,  6345,
    6345,  6345,  6346,  6346,  6346,  6346,  6346,  6346,  6346,  6346,
    6347,  6347,  6347,  6347,  6347,  6347,  6347,  6347,  6347,  6347,
    6347,  6348,  6348,  6348,  6348,  6348,  6348,  6348,  6348,  6348,
    6348,  6348,  6348,  6349,  6349,  6349,  6349,  6349,  6349,  6349,
    6349,  6349,  6349,  6350,  6350,  6350,  6350,  6350,  6350,  6350,
    6350,  6350,  6350,  6350,  6350,  6351,  6351,  6351,  6351,  6351,
    6351,  6351,  6351,  6351,  6351,  6351,  6351,  6352,  6352,  6352,
    6352,  6352,  6352,  6352,  6352,  6352,  6353,  6353,  6353,  6353,
    6353,  6353,  6353,  6353,  6354,  6354,  6354,  6354,  6354,  6354,
    6354,  6354,  6354,  6354,  6354,  6355,  6355,  6355,  6355,  6355,
    6355,  6355,  6355,  6355,  6356,  6356,  6356,  6356,  6356,  6356,
    6356,  6356,  6356,  6356,  6357,  6357,  6357,  6357,  6357,  6357,
    6357,  6357,  6357,  6357,  6357,  6358,  6358,  6358,  6358,  6358,
    6358,  6358,  6358,  6358,  6358,  6358,  6359,  6359,  6359,  6359,
    6359,  6359
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
  "\"$\"", "\":=\"", "\"*\"", "\"|\"", "\"!=\"", "\"<=\"",
  "\"> (comparison operator)\"", "\">=\"", "\"<<\"", "\">>\"", "\"::\"",
  "\"@\"", "\"[\"", "\"]\"", "\"?\"", "\"<\"", "\"> (start tag close)\"",
  "\"> (end tag close)\"", "\"<?\"", "\"<!--\"", "\"-->\"", "\"//\"",
  "\"</\"", "\"(#\"", "\",\"", "\"+\"", "\"-\"", "\"/\"",
  "\"= (comparison operator)\"", "\".\"", "\"..\"", "\"(\"", "\")\"",
  "\"/>\"", "\"=\"", "\"\\\" (open)\"", "\"\\\" (close)\"", "\"' (open)\"",
  "\"' (close)\"", "\"{\"", "\"}\"", "\";\"", "\"#\"", "\"%\"", "\":\"",
  "\"~\"", "\"->\"", "\"<integer literal>\"", "\"<decimal literal>\"",
  "\"<double literal>\"", "\"attribute\"", "\"comment\"",
  "\"document-node\"", "\"namespace-node\"", "\"node\"",
  "\"processing-instruction\"", "\"schema-attribute\"",
  "\"schema-element\"", "\"text\"", "\"empty-sequence\"",
  "\"boundary-space\"", "\"ft-option\"", "\"base-uri\"", "\"lax\"",
  "\"strict\"", "\"idiv\"", "\"child\"", "\"descendant\"", "\"self\"",
  "\"descendant-or-self\"", "\"following-sibling\"", "\"following\"",
  "\"parent\"", "\"ancestor\"", "\"preceding-sibling\"", "\"preceding\"",
  "\"ancestor-of-self\"", "\"document\"", "\"not\"", "\"using\"", "\"no\"",
  "\"sensitive\"", "\"insensitive\"", "\"diacritics\"", "\"without\"",
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
  "\"every\"", "\"satisfies\"", "\"typeswitch\"", "\"case\"",
  "\"case (followed by (in)sensitive)\"", "\"as\"", "\"if\"", "\"then\"",
  "\"else\"", "\"or\"", "\"and\"", "\"instance\"", "\"of\"",
  "\"castable\"", "\"to\"", "\"div\"", "\"mod\"", "\"union\"",
  "\"intersect\"", "\"except\"", "\"validate\"", "\"cast\"", "\"treat\"",
  "\"is\"", "\"preserve\"", "\"strip\"", "\"namespace\"", "\"item\"",
  "\"external\"", "\"encoding\"", "\"no-preserve\"", "\"inherit\"",
  "\"no-inherit\"", "\"declare\"", "\"construction\"", "\"ordering\"",
  "\"default\"", "\"copy-namespaces\"", "\"option\"", "\"xquery\"",
  "\"version\"", "\"import\"", "\"schema\"", "\"module\"", "\"element\"",
  "\"function\"", "\"function (XQuery 1.1)\"", "\"score\"", "\"contains\"",
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
  "SelectLanguage", "XQueryNamespaces", "Start_FunctionDecl",
  "FunctionDecl_MaybeSemicolon", "Start_FunctionSignature",
  "Start_DelayedModule", "DM_ModuleDecl", "DM_Prolog", "DM_FunctionDecl",
  "DM_OptionDecl", "DM_NamespaceDecl", "Start_XSLT", "Stylesheet_XSLT",
  "StylesheetAttrs_XSLT", "StylesheetContent_XSLT", "Template_XSLT",
  "TemplateAttrs_XSLT", "TemplateModes_XSLT", "Number_XSLT",
  "Function_XSLT", "FunctionAttrs_XSLT", "ParamList_XSLT", "Param_XSLT",
  "ParamAttrs_XSLT", "GlobalParam_XSLT", "GlobalParamAttrs_XSLT",
  "GlobalVariable_XSLT", "GlobalVariableAttrs_XSLT", "Output_XSLT",
  "OutputAttrs_XSLT", "OutputMethod_XSLT", "QNames_XSLT", "TypeAlias_XSLT",
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
  "CaseClauseVariable", "IfExpr", "OrExpr", "AndExpr", "ComparisonExpr",
  "$@1", "FTContainsExpr", "RangeExpr", "AdditiveExpr",
  "MultiplicativeExpr", "UnionExpr", "IntersectExceptExpr",
  "InstanceofExpr", "TreatExpr", "CastableExpr", "CastExpr", "UnaryExpr",
  "ValueExpr", "ValidateExpr", "ExtensionExpr", "PragmaList", "Pragma",
  "PragmaContents", "PathExpr", "LeadingSlash", "RelativePathExpr",
  "StepExpr", "AxisStep", "ForwardStepPredicateList",
  "ReverseStepPredicateList", "ForwardStep", "ForwardAxis",
  "AbbrevForwardStep", "ReverseStep", "ReverseAxis", "AbbrevReverseStep",
  "NodeTest", "NameTest", "Wildcard", "PostfixExpr", "PrimaryExpr",
  "Literal", "NumericLiteral", "VarRef", "VarName", "ParenthesizedExpr",
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
     585
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   331,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   333,   334,   335,   335,   336,   337,   338,   339,   339,
     339,   339,   340,   341,   342,   343,   344,   344,   345,   345,
     345,   346,   346,   346,   346,   346,   346,   346,   346,   347,
     348,   348,   348,   348,   348,   348,   349,   349,   349,   349,
     350,   350,   350,   351,   352,   352,   352,   352,   353,   353,
     354,   355,   355,   355,   355,   355,   355,   356,   357,   357,
     357,   357,   357,   357,   358,   359,   359,   359,   359,   360,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   362,   362,
     362,   362,   362,   363,   363,   364,   365,   365,   365,   366,
     367,   367,   367,   367,   367,   368,   369,   369,   369,   370,
     370,   370,   371,   371,   371,   371,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   373,   374,   374,   374,   375,   376,
     376,   377,   378,   378,   378,   379,   379,   379,   380,   380,
     381,   382,   382,   383,   383,   384,   385,   385,   385,   385,
     385,   386,   387,   388,   389,   390,   391,   391,   392,   393,
     394,   394,   395,   396,   396,   396,   396,   397,   397,   398,
     398,   399,   400,   400,   400,   400,   401,   402,   402,   403,
     404,   404,   404,   405,   406,   407,   408,   408,   408,   408,
     408,   409,   410,   410,   410,   411,   412,   412,   412,   413,
     414,   414,   414,   415,   416,   416,   416,   417,   418,   418,
     419,   419,   420,   420,   420,   421,   421,   422,   422,   423,
     423,   424,   424,   425,   425,   425,   425,   425,   425,   426,
     427,   427,   427,   427,   428,   428,   429,   429,   430,   430,
     430,   430,   431,   432,   433,   434,   435,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   437,   437,
     437,   437,   437,   437,   437,   437,   438,   438,   439,   440,
     441,   441,   442,   442,   443,   444,   445,   445,   446,   446,
     447,   448,   448,   449,   449,   450,   451,   452,   452,   453,
     453,   453,   454,   454,   455,   455,   456,   456,   457,   457,
     458,   458,   459,   460,   461,   461,   462,   463,   463,   464,
     464,   465,   465,   466,   466,   467,   467,   468,   468,   469,
     470,   471,   472,   472,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   474,   475,   475,   475,
     476,   476,   477,   477,   477,   478,   479,   479,   480,   481,
     481,   482,   482,   483,   484,   484,   485,   485,   486,   487,
     488,   488,   489,   489,   490,   490,   491,   492,   492,   492,
     493,   493,   493,   494,   494,   495,   495,   496,   497,   498,
     498,   499,   499,   500,   501,   501,   502,   502,   503,   504,
     504,   505,   505,   506,   506,   507,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     508,   508,   508,   509,   509,   510,   510,   510,   511,   511,
     511,   511,   511,   512,   512,   512,   513,   513,   513,   514,
     514,   515,   515,   516,   516,   517,   517,   518,   518,   518,
     519,   519,   519,   520,   520,   520,   521,   521,   522,   522,
     523,   524,   524,   525,   525,   525,   525,   526,   527,   527,
     527,   528,   528,   529,   529,   530,   530,   531,   531,   532,
     532,   533,   533,   533,   533,   533,   533,   533,   533,   534,
     534,   535,   535,   536,   536,   536,   536,   536,   537,   538,
     538,   539,   539,   540,   540,   540,   541,   541,   541,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   543,   543,
     544,   544,   544,   545,   546,   547,   547,   548,   549,   550,
     551,   551,   552,   552,   553,   553,   554,   554,   555,   555,
     555,   556,   556,   557,   557,   558,   558,   558,   559,   559,
     560,   560,   561,   561,   562,   562,   562,   563,   563,   563,
     564,   564,   564,   565,   565,   565,   566,   566,   566,   566,
     566,   567,   568,   568,   569,   570,   570,   571,   571,   571,
     571,   571,   571,   571,   572,   573,   574,   574,   575,   575,
     576,   577,   577,   578,   579,   580,   581,   582,   582,   583,
     583,   584,   585,   585,   586,   586,   587,   587,   588,   588,
     588,   588,   589,   589,   589,   589,   589,   590,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   592,   593,
     593,   593,   594,   595,   596,   597,   597,   597,   598,   598,
     598,   599,   599,   600,   601,   602,   602,   602,   602,   603,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   611,
     612,   612,   613,   613,   614,   614,   615,   615,   616,   616,
     617,   617,   618,   618,   618,   619,   619,   620,   620,   621,
     621,   621,   621,   621,   621,   622,   622,   623,   623,   623,
     623,   624,   624,   624,   624,   624,   624,   624,   624,   625,
     625,   625,   626,   626,   627,   627,   628,   628,   628,   628,
     628,   628,   628,   628,   629,   629,   629,   629,   630,   630,
     631,   631,   632,   632,   632,   632,   632,   633,   633,   634,
     634,   634,   634,   635,   635,   635,   636,   636,   637,   637,
     638,   638,   639,   639,   640,   641,   641,   642,   643,   644,
     644,   644,   645,   645,   645,   645,   645,   646,   646,   647,
     648,   648,   649,   649,   650,   651,   652,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   660,   660,   660,   660,
     660,   661,   661,   662,   662,   663,   663,   664,   664,   665,
     665,   665,   666,   666,   667,   667,   667,   667,   668,   668,
     668,   669,   669,   670,   671,   671,   672,   673,   674,   674,
     675,   675,   676,   677,   677,   678,   678,   679,   679,   680,
     589,   589,   681,   681,   682,   682,   683,   684,   684,   542,
     542,   685,   685,   686,   686,   687,   688,   688,   689,   689,
     690,   541,   691,   692,   693,   694,   695,   695,   696,   696,
     697,   698,   698,   699,   699,   700,   700,   701,   701,   701,
     701,   701,   701,   701,   702,   702,   702,   703,   703,   703,
     703,   703,   704,   704,   704,   705,   705,   706,   706,   706,
     706,   706,   706,   706,   707,   707,   708,   708,   709,   542,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     3,     2,     3,     2,     2,     2,
       2,     0,     8,     0,     1,     3,     3,     6,     0,     2,
       2,     2,     8,     5,     6,     1,     4,     1,     0,     2,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     4,
       1,     3,     2,     3,     3,     3,     0,     2,     2,     2,
       1,     1,     1,     4,     1,     2,     3,     2,     0,     2,
       3,     1,     2,     3,     3,     2,     2,     3,     1,     2,
       3,     3,     2,     2,     3,     1,     2,     3,     3,     2,
       1,     2,     3,     2,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     3,     2,
       1,     2,     2,     3,     3,     4,     0,     3,     2,     0,
       2,     2,     0,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     3,     3,     1,
       1,     3,     1,     3,     3,     1,     1,     1,     0,     2,
       3,     1,     2,     0,     2,     3,     1,     2,     3,     3,
       2,     2,     3,     3,     3,     4,     1,     2,     3,     3,
       0,     3,     4,     1,     3,     3,     3,     0,     3,     0,
       3,     4,     1,     2,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     2,
       1,     3,     2,     3,     1,     2,     2,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     4,     6,     1,
       1,     1,     1,     1,     2,     3,     3,     3,     3,     2,
       1,     3,     3,     2,     0,     4,     2,     2,     0,     3,
       4,     3,     2,     2,     2,     2,     6,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     3,     5,     5,     4,     3,     3,     3,     5,     5,
       5,     1,     1,     1,     1,     4,     3,     5,     4,     0,
       2,     3,     3,     3,     7,     4,     3,     3,     0,     2,
       1,     1,     1,     7,     2,     1,     7,     2,     3,     0,
       2,     1,     1,     2,     5,     1,     3,     3,     1,     3,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     2,     3,     1,     7,     0,
       3,     0,     3,     2,     3,     1,     5,     5,     2,     3,
       3,     4,     3,     1,     3,     5,     1,     0,     1,     1,
       0,     2,     2,     4,     4,     3,     1,     5,     6,     2,
       1,     5,     3,     3,     3,     3,     0,     3,     8,     3,
       1,     3,     1,     3,     3,     0,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     5,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     4,
       1,     4,     1,     4,     1,     4,     1,     2,     2,     1,
       1,     1,     1,     4,     5,     5,     3,     4,     1,     2,
       4,     1,     2,     1,     2,     2,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     4,     1,     4,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     1,     4,     4,
       3,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     5,    10,     1,     1,     0,     7,     7,     0,     1,
       3,     3,     3,     3,     0,     2,     2,     0,     2,     2,
       0,     2,     2,     0,     2,     2,     0,     2,     2,     2,
       2,     3,     0,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     3,     2,     3,
       3,     1,     3,     3,     4,     4,     3,     1,     3,     2,
       3,     2,     0,     1,     0,     2,     2,     3,     0,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     4,     3,     3,     3,     3,     4,     4,     3,     4,
       6,     1,     1,     4,     1,     3,     4,     6,     7,     1,
       1,     4,     1,     1,     1,     1,     1,     3,     0,     2,
       0,     2,     3,     1,     3,     1,     4,     1,     2,     1,
       1,     2,     2,     3,     1,     2,     4,     3,     4,     0,
       1,     2,     1,     2,     1,     0,     3,     2,     3,     3,
       4,     1,     3,     3,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     2,     2,
       1,     2,     2,     2,     5,     5,     2,     0,     3,     2,
       4,     4,     6,     4,     3,     4,     0,     2,     2,     3,
       1,     3,     2,     2,     2,     1,     2,     3,     3,     3,
       3,     3,     6,     6,     4,     4,     4,     2,     2,     2,
       2,     2,     7,     5,     5,     6,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     5,     7,     8,    10,     6,
       8,     0,     2,     2,     3,     0,     2,     1,     3,     1,
       1,     1,     3,     7,     3,     7,     5,     9,     1,     1,
       1,     1,     3,     5,     1,     1,     3,     4,     3,     4,
       1,     1,     5,     0,     2,     6,     7,     1,     3,     3,
       1,     1,     4,     3,     1,     3,     2,     6,     3,     1,
       1,     4,     3,     1,     3,     4,     4,     3,     1,     3,
       3,     1,     3,     5,     1,     1,     5,     2,     0,     2,
       3,     8,     1,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     2,     2,     1,     4,     1,     4,     3,     2,
       1,     1,     1,     1,     0,     1,     1,     3,     1,     2,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    11,     0,    11,    11,   318,     0,     0,   823,
       0,     0,   513,     0,     0,     0,   582,     0,   558,     0,
       0,   477,   537,   508,     0,     0,   779,   780,   781,   901,
     902,   903,   914,   907,   908,   909,   910,   911,   913,   916,
     917,   918,   919,   920,   921,   922,   923,   924,   925,   926,
     927,   928,   929,   930,   931,   932,   933,   934,  1016,  1017,
     935,   936,   937,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,  1055,  1056,   915,   782,   960,
     514,   515,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   912,
     978,   979,   906,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,   905,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,   904,  1014,
       0,  1015,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1057,
    1058,  1059,  1060,  1069,  1071,  1061,  1062,  1063,  1064,  1065,
    1066,  1067,  1068,  1070,     2,   341,   343,   344,     0,   357,
     360,   361,   345,   346,   347,   353,   410,   412,   429,   432,
     434,   437,   442,   445,   448,   450,   452,   454,   456,   459,
     460,   462,     0,   468,   461,   473,   476,   480,   481,   483,
     484,   485,     0,   490,   487,     0,   502,   500,   510,   512,
     482,   516,   519,   528,   520,   521,   522,   525,   526,   523,
     524,   546,   548,   549,   550,   547,   587,   588,   589,   590,
     591,   592,   593,   509,   637,   628,   635,   634,   636,   633,
     630,   632,   629,   631,   348,     0,   349,     0,   351,   350,
     352,   530,   531,   532,   529,   511,   354,   355,   527,   814,
     815,   518,   839,   840,   851,   784,   900,   258,    28,   116,
       5,    25,    27,     0,   258,     7,     0,   901,   902,   903,
     914,   907,   908,   909,   910,   911,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   932,   933,   951,  1055,
    1056,   962,   964,   975,   976,   912,   906,   993,   999,   904,
    1041,  1044,  1050,  1052,  1069,  1071,  1062,  1063,     8,   854,
       0,   900,     0,     0,   894,     0,   890,   891,   892,   893,
       0,     9,   855,   862,   864,   866,   873,   876,   881,   884,
     886,     0,   823,   901,   902,   908,   911,   913,   905,   904,
    1069,  1071,    10,   618,   623,   624,   627,   625,   820,     0,
     821,   626,   830,   831,     1,   533,   534,   499,   553,   554,
     555,     0,   583,     0,   475,   559,     0,   458,   457,   536,
       0,   899,   493,     0,     0,   601,     0,     0,     0,     0,
       0,     0,     0,     0,   607,     0,     0,     0,     0,     0,
     491,   492,   494,   495,   496,   497,   503,   504,   505,   506,
     507,     0,     0,     0,   777,     0,     0,     0,   365,   367,
       0,     0,   373,   375,     0,     0,   396,     0,     0,     0,
       0,     0,     0,   498,     0,     0,     0,   596,     0,     0,
     614,     0,     0,   767,   768,     0,   770,   771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     362,   359,   363,   364,   358,     0,     0,     0,     0,     0,
       0,     0,     0,   415,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   469,
     474,     0,     0,     0,     0,   489,   501,     0,     0,     0,
       0,   769,     0,     0,     0,     3,   267,    31,   122,   318,
       4,     6,     0,     0,   322,   319,   320,   329,   321,     0,
     857,     0,   882,   883,   896,     0,   895,   889,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   894,     0,     0,     0,     0,     0,
     619,   621,   620,   616,     0,   824,   558,     0,   585,   584,
     581,     0,   535,   652,   648,     0,   651,   663,     0,     0,
     600,   643,     0,   639,     0,     0,     0,     0,   644,   638,
     645,     0,     0,   783,     0,     0,   606,     0,   654,     0,
     662,   664,   642,     0,     0,     0,     0,     0,     0,     0,
     614,     0,   614,     0,     0,   614,     0,     0,     0,     0,
       0,     0,     0,     0,   603,   660,   655,     0,   659,     0,
     595,     0,   327,     0,   338,   823,     0,     0,     0,     0,
     842,     0,   843,   614,   847,     0,     0,   848,   802,   804,
     342,   356,   378,     0,     0,     0,   409,   411,   414,   417,
     418,   419,   427,   428,     0,   413,   420,   421,   422,   423,
     424,   425,   426,     0,   435,   436,   433,   438,   440,   439,
     441,   443,   444,   446,   447,   823,   823,     0,     0,   466,
       0,   479,   478,     0,     0,   852,     0,   545,   818,   544,
       0,   543,     0,     0,     0,     0,   540,     0,   816,     0,
       0,     0,     0,     0,   256,   257,   267,     0,    29,    30,
       0,   118,   119,     0,     0,     0,    18,   333,   823,    15,
     898,   858,   858,   888,     0,     0,   863,   865,   874,   875,
     867,   868,   871,   872,   869,   870,   877,   879,   878,   880,
       0,     0,   829,   617,   622,   833,     0,   834,   614,   838,
       0,   823,   559,     0,   586,     0,   471,   470,     0,   649,
     602,   598,     0,   605,   640,   641,   647,   646,   608,   609,
       0,   653,   661,   604,   594,     0,   776,     0,   538,   539,
     369,   366,     0,     0,   374,     0,   395,   393,   394,     0,
       0,   463,     0,     0,     0,   656,   597,   614,     0,   328,
     615,     0,   817,     0,     0,     0,     0,   841,     0,     0,
       0,   846,     0,     0,     0,   379,   386,   380,   383,   387,
       0,   416,     0,     0,     0,     0,   689,   430,   670,   673,
     675,   677,   679,   680,   695,   684,   449,   451,   453,   612,
     455,   467,   486,   488,   517,     0,   819,     0,     0,   766,
     765,   764,   541,   263,   262,   288,     0,   259,   261,     0,
     265,  1005,  1012,     0,     0,     0,   278,     0,     0,     0,
     282,   283,   285,   279,   280,   286,   287,   281,     0,     0,
     264,   284,     0,     0,    26,    40,    68,    54,    75,    80,
     110,   106,    32,    58,    33,    58,    34,   122,    35,   122,
      36,     0,    38,     0,    37,     0,   117,   115,   145,     0,
     152,   161,     0,     0,     0,   192,   197,   200,   204,   206,
     212,   216,   183,   220,   224,   228,   149,   150,   124,   125,
     126,   122,   127,   123,   128,   158,   129,   163,   130,     0,
     132,   122,   131,   140,   187,   133,   122,   134,   122,   135,
     122,   136,   122,   137,   122,   138,   122,   139,   122,   141,
       0,   142,   122,   143,   122,     0,     0,    16,     0,   330,
       0,   860,     0,   897,     0,   885,   887,     0,   832,   836,
     823,     0,     0,   827,     0,   558,   558,   576,   551,   472,
       0,   665,   599,   610,   778,     0,     0,   371,     0,     0,
       0,   406,     0,   400,     0,     0,   464,   465,     0,   339,
     337,     0,   773,     0,   774,   844,     0,   850,   849,     0,
       0,   809,   810,   806,   808,     0,   388,   389,   390,   381,
       0,     0,   678,     0,   690,   692,   694,   685,     0,   431,
       0,   668,     0,     0,     0,   681,     0,   682,   613,   611,
     542,     0,     0,   260,     0,   318,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   795,     0,     0,
       0,     0,   268,   269,   270,   271,   275,   276,   272,   273,
     274,   277,   111,   112,    46,    42,     0,   823,     0,   122,
      55,    57,   823,   122,    69,    73,    72,   823,     0,     0,
      76,   823,     0,     0,    79,    97,    81,    85,    86,    87,
      91,    92,    94,    83,    88,    89,    90,    93,    95,     0,
       0,     0,   105,   107,   823,   109,   121,   120,     0,     0,
       0,   180,   176,   122,     0,     0,   119,     0,     0,     0,
       0,   162,     0,   171,     0,   122,     0,   119,   119,   189,
     193,   823,     0,     0,     0,     0,   119,     0,     0,     0,
     119,     0,   119,   119,     0,   119,     0,     0,   119,   119,
       0,   219,   222,     0,   225,   226,     0,     0,     0,     0,
       0,   318,    19,    20,    21,     0,   335,   859,   856,     0,
     835,     0,   822,   823,   823,     0,     0,     0,     0,   650,
     775,     0,     0,     0,   376,   377,   397,     0,   823,     0,
     398,   399,   823,     0,     0,     0,   657,   340,     0,   845,
       0,     0,   811,     0,     0,   382,     0,   384,   683,   689,
     687,     0,   691,   693,     0,   672,     0,     0,   701,     0,
       0,     0,     0,     0,   667,   671,   674,     0,     0,     0,
     730,     0,     0,   755,     0,     0,   726,   727,     0,   714,
     720,   721,   719,   718,   722,   716,   717,   723,     0,     0,
       0,     0,     0,   762,   763,     0,   290,   291,   295,   666,
     306,     0,   316,   317,   296,   297,     0,     0,     0,     0,
     301,   302,     0,     0,   760,   759,   761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   309,     0,   309,   113,
     114,    44,     0,   236,   235,   901,   922,  1057,  1058,    41,
     231,     0,   234,   232,   243,   254,   250,    45,    50,    51,
      52,    43,    61,    59,   122,     0,    56,     0,    71,    70,
      67,    78,    77,    74,   101,   102,    98,    99,   100,    82,
     103,    84,    96,   108,   148,   172,     0,   122,   177,     0,
       0,   174,   146,   147,   144,   155,   156,   157,   154,   153,
     151,   166,   159,   122,   160,   164,   173,     0,   184,   185,
     186,   122,     0,   195,   194,   122,   198,   196,   201,   202,
     199,   203,   207,   209,   210,   208,   205,   213,   214,   211,
     217,   218,   215,   221,   223,   229,   227,   329,     0,     0,
       0,     0,     0,   334,     0,   837,   825,   828,   823,   558,
     558,     0,   580,   579,   578,   577,   370,     0,     0,     0,
     404,     0,     0,   405,   403,     0,   658,   772,   614,     0,
     803,   805,     0,   391,   392,     0,   686,   688,   758,   708,
     706,   707,   669,     0,     0,   712,   713,   704,   705,   676,
     731,   736,     0,   756,   729,   728,     0,     0,   733,   732,
       0,   725,   724,     0,   754,   715,     0,     0,   697,     0,
     696,     0,     0,     0,   305,     0,     0,     0,   294,   795,
     799,   800,   801,   796,   797,     0,   823,     0,     0,     0,
       0,   309,     0,   308,     0,   315,    47,    48,    49,   253,
       0,     0,     0,     0,     0,   244,     0,     0,     0,     0,
     249,    62,    66,    65,   823,     0,     0,    39,    53,   104,
     179,     0,   175,   178,   167,   170,   823,     0,     0,   188,
       0,   182,   191,     0,     0,     0,     0,     0,   336,     0,
     826,     0,     0,   558,   372,   368,   407,     0,   402,   408,
       0,   812,     0,   385,   709,   710,   711,   702,   703,   744,
     737,   737,   739,     0,     0,   746,   746,   757,   699,   698,
       0,   266,   289,   298,   299,   292,   293,   303,   304,   300,
       0,   785,   791,     0,     0,     0,   853,   614,   329,   312,
     313,   307,   310,     0,     0,   252,   251,     0,   240,   239,
       0,   230,   246,   245,   248,   247,     0,    64,    63,    60,
     181,   169,   168,   165,   190,    13,    17,     0,     0,     0,
     861,   564,   570,   556,   567,   573,   557,     0,     0,     0,
     807,     0,     0,     0,     0,     0,   750,   748,   745,   743,
     700,   793,     0,   823,     0,     0,   798,   789,   791,     0,
       0,   311,   309,   237,     0,     0,    12,    14,     0,    23,
     329,     0,     0,     0,     0,   552,   401,   813,     0,   735,
     734,   740,   741,     0,   749,     0,     0,   747,   794,   792,
     786,     0,     0,     0,   325,   323,   332,   326,   331,   314,
       0,   241,   242,   255,    24,     0,   560,   566,   565,   561,
     572,   571,   562,   569,   568,   563,   575,   574,   738,     0,
     751,   752,   753,   787,   791,   790,   324,   238,     0,   742,
       0,    22,   788
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   307,   560,  1716,   315,   561,   766,  1017,  1232,
    1233,  1234,   310,   311,   557,   760,   942,   943,  1361,  1381,
     944,   945,  1139,  1383,  1384,   946,   947,   948,   949,   950,
     951,  1399,  1401,   952,   953,   954,   955,   978,   558,   956,
     763,   979,   980,   981,   982,   983,   984,   985,  1418,  1190,
     986,   987,  1192,  1422,  1423,   988,   989,   990,   991,   992,
    1181,  1182,  1183,  1409,   993,   994,  1199,  1432,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1369,  1370,
    1371,  1372,  1657,  1750,  1373,  1374,  1375,  1570,   555,   556,
     751,   752,   754,   755,   756,   757,   913,   914,   907,   915,
     916,   917,   918,   919,   920,   921,   922,  1342,  1639,   923,
     924,   925,  1553,  1355,   926,   927,  1119,   565,   566,   928,
    1745,   929,   480,   769,  1747,   568,  1235,   673,   674,  1177,
     204,   205,   206,   207,   208,   209,   501,   210,   458,   459,
    1047,  1253,   211,   462,   463,   502,   503,   504,   867,   868,
     869,  1078,  1277,   212,   465,   466,   213,  1052,  1260,  1053,
    1054,  1258,   214,   215,   216,   217,   704,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   807,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   405,   255,   256,   257,   258,
     259,   740,   741,   260,   261,   262,   410,   606,   416,  1683,
    1686,  1721,  1723,  1722,  1724,  1248,   263,   413,   264,   609,
     265,   266,   267,   478,   620,   268,   426,   269,   270,   271,
     272,   435,   636,   888,  1099,   676,   392,   603,   393,   394,
     273,   274,   275,   276,   277,   278,   279,   280,   615,   281,
     637,   282,   667,   283,   639,   616,   640,  1040,  1330,   877,
    1294,  1091,   878,   879,   880,   881,   882,   883,   884,   885,
    1087,  1097,  1322,  1295,  1617,  1507,  1095,  1309,  1310,  1311,
    1312,  1313,  1691,  1519,  1314,  1698,  1626,  1695,  1737,  1315,
    1316,  1317,  1089,   931,   284,   285,   286,   287,   288,   289,
     290,   453,   454,   291,   292,   293,   294,   632,   295,   932,
    1704,  1642,  1349,  1543,  1544,   296,   297,  1073,  1271,  1272,
     298,   299,   300,   301,   397,   398,   399,   400,  1034,   401,
     402,   796,   797,   403,   302,   681,   682,   303,   686,   687,
     304,   933,   358,   371,   359,  1021,   570,   574,   373,   374,
     375,   376,   377,   378,   379,   380,   575,   576,   771,   305,
     306
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1607
static const yytype_int16 yypact[] =
{
     877,  3953, -1607,  -135, -1607, -1607, -1607,  7999,  6336,  6764,
     108,  7999, -1607,  5399,   244,    68,    36,  4679,   192,  4195,
    4195, -1607, -1607, -1607,  2501,  7999, -1607, -1607, -1607,   273,
     392,   121,   275,   413,   251,   455,   470,   449, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607,   508,   540,   603,   647,   689,
     707,   760,   767,   778,   780,   795,   606, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607,   648, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607,   643,   759, -1607, -1607, -1607,
   -1607, -1607, -1607,   801, -1607,    33, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607,   811,   811, -1607,   777,
   -1607, -1607,   803, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607,   391, -1607, -1607, -1607,
   -1607, -1607,   281, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,   271, -1607,
     812, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607,    94, -1607, -1607,    20, -1607,
   -1607, -1607, -1607, -1607,   798, -1607,    22, -1607, -1607, -1607,
   -1607, -1607, -1607,   823,   844, -1607,   658,   657, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607,   891, -1607, -1607,   638, -1607,
   -1607, -1607, -1607, -1607, -1607,   787,   789, -1607,   955,   750,
      62,   109,    37,   509, -1607,   790,   782,   792,   779, -1607,
   -1607, -1607,   397, -1607, -1607,  4679,   500, -1607, -1607,   932,
     933, -1607,  5399, -1607, -1607,  5399, -1607, -1607, -1607, -1607,
     446, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607,  3953, -1607,  3953, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607,   398,   768, -1607, -1607,
   -1607, -1607, -1607,   775,   768, -1607,    27, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,   902,
     908, -1607,  6553,  6553,  6336,  7999, -1607, -1607, -1607, -1607,
     922, -1607, -1607,   804,   802, -1607,   357,   137, -1607,   944,
   -1607,   935,  6975,   936,   940,   941,   943,   945,   946,   947,
     949,   950, -1607,   412, -1607, -1607, -1607, -1607, -1607,    26,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607,   632, -1607,   962,   500, -1607,  7999, -1607, -1607, -1607,
     498, -1607, -1607,  5879,  3953, -1607,   948,   952,  3953,    41,
     953,   954,  7185,  3953, -1607,   951,  7999,  7999,   956,  3953,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607,  3953,  7999,     7, -1607,  3953,  3953,  7999,   965, -1607,
    7999,   975,   967, -1607,  7999,    55, -1607,    76,  3953,  3953,
    3953,   959,   963, -1607,   948,  6119,  3953, -1607,   948,   352,
     846,  3953,   840, -1607, -1607,  3953, -1607, -1607,  7807,  2743,
    7999,  3953,  3953,  3953,   801,    33,  3953,   995,   869,   870,
   -1607, -1607, -1607, -1607, -1607,  4195,  4195,  4195,  4195,  4195,
    4195,  4195,  4195, -1607,  4195,  4195,  4195,  4195,  4195,  4195,
    4195,  4195,   957,  4195,  4195,  4195,  4195,  4195,  4195,  4195,
    4195,  4195,  4195,  4195,   850,   859,   860,   863,  2985, -1607,
     500,  4679,  4679,  3953,  3953, -1607, -1607,  7999,  3953,  2017,
     133, -1607,  2259,   966,   349, -1607,   827,    25,   451, -1607,
   -1607, -1607,   829,  7999, -1607, -1607, -1607,   871, -1607,  3953,
   -1607,  6336, -1607, -1607, -1607,   984,   993, -1607,  6336,  6553,
    6553,  6553,  6553,  6553,  6553,  6553,  6553,  6553,  6553,  6553,
    6553,  6553,  6553,  6336,  6336,   987,   989,   990,  7395,  7605,
   -1607, -1607, -1607, -1607,   992, -1607,   924,   926, -1607, -1607,
   -1607,   222, -1607, -1607, -1607,   521, -1607, -1607,   426,  3227,
   -1607, -1607,   479, -1607,   470,   947,   994,   997, -1607, -1607,
   -1607,   998,   999, -1607,   499,  3469, -1607,  1001, -1607,  1002,
   -1607, -1607, -1607,   511,   516,  1035,   648,  3953,   517,   518,
     846,   801,   846,  7999,    33,   846,   811,  3953,  3953,   614,
     618,   554,  3953,  3953, -1607, -1607, -1607,   635, -1607,   563,
   -1607,  7999, -1607,   663, -1607,  6764,  1003,   817,   986,   896,
   -1607,   565, -1607,   846, -1607,  1043,   566, -1607,   826,   128,
   -1607, -1607, -1607,  7999,  3953,   915,   789, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607,  4195, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607,    15,   109,   109,   788,    37,    37,    37,
      37,   509,   509, -1607, -1607,  6764,  6764,  7999,  7999, -1607,
     571, -1607, -1607,   578,   623, -1607,   630, -1607, -1607, -1607,
     672, -1607,   497,  3953,  3953,  3953, -1607,   690, -1607,   928,
     937,    24,  1012,   897, -1607, -1607, -1607,  4437, -1607, -1607,
     459, -1607, -1607,  1169,    -9,   898, -1607,  1033,  6764, -1607,
   -1607,   938,   938, -1607,  6336,  1039,   802, -1607,   137,   137,
     797,   797,   797,   797,   797,   797, -1607, -1607, -1607, -1607,
    1054,  1040, -1607, -1607, -1607, -1607,   695, -1607,   846, -1607,
    1049,  5639,   709,   399, -1607,   960, -1607, -1607,  7999, -1607,
   -1607, -1607,   584, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
     585, -1607, -1607, -1607, -1607,  3953, -1607,   958, -1607, -1607,
     968, -1607,  1073,  1074, -1607,   961, -1607, -1607, -1607,   931,
     929, -1607,   595,   599,  7999, -1607, -1607,   846,  1079, -1607,
   -1607,  3953, -1607,  3953,  3953,  3953,  7999, -1607,  1080,  3953,
    3953, -1607,  1051,  1055,  1748, -1607, -1607,  1056, -1607,   711,
    3953, -1607,    15,  3953,   292,   453,   661,  1005,   849,   853,
    1010, -1607, -1607,  1014,   900, -1607, -1607, -1607, -1607,  1081,
   -1607, -1607, -1607, -1607, -1607,  3711, -1607,   872,   873, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607,  1012, -1607, -1607,  7999,
     559,   148,   670,  1012,  1012,  1012, -1607,  1012,  1012,  1012,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,  1012,  1012,
   -1607, -1607,  1012,  1012, -1607, -1607, -1607, -1607, -1607, -1607,
     598, -1607, -1607,   208, -1607,  -142, -1607,   212, -1607,   177,
   -1607,   385, -1607,    63, -1607,   858,   158, -1607, -1607,   574,
   -1607, -1607,   806,   847,   807, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607,   314, -1607, -1607, -1607,  -158, -1607,   831, -1607,   867,
   -1607, -1607, -1607, -1607,   104, -1607,   197, -1607,   813, -1607,
      93, -1607, -1607, -1607,   141, -1607,   172, -1607,  -139, -1607,
    -151, -1607,   600, -1607,   814,  8181,  7999,   927,   347, -1607,
    3953, -1607,   902, -1607,   964, -1607, -1607,  7999, -1607, -1607,
    6764,  1078,   969, -1607,   715,   192,   192, -1607, -1607, -1607,
    1082, -1607, -1607, -1607, -1607,  3953,  1115,   930,  3953,  3953,
    3953,  1121,   140, -1607,    86,  3953, -1607, -1607,   339, -1607,
   -1607,   609, -1607,   904, -1607, -1607,  3953, -1607, -1607,  1122,
    1122, -1607, -1607,   905, -1607,  3953, -1607, -1607,   996,  1056,
    1094,   613, -1607,    12,  1037,   919, -1607, -1607,  1046, -1607,
      15,   492,    15,  1006,   101,  1052,    58, -1607, -1607, -1607,
   -1607,  3953,  3953, -1607,  1102,   452,   670,   725,  1014,  1018,
    7999,   728,   781,   224,   528,  7999,   312,   377,  7999,    28,
     -27,   -14, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607,   855,   861, -1607, -1607,  4919,  6764,   791,   890,
   -1607, -1607,  6764,   890, -1607, -1607, -1607,  6764,  3953,  1250,
   -1607,  6764,  3953,  1449, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,   -45,
    1026,  1026, -1607, -1607,  6975, -1607, -1607, -1607,   909,  3953,
     852,   644, -1607, -1607,  3953,  3953, -1607,  8182,   -85,  3953,
     456, -1607,   486, -1607,  8210, -1607,  3953, -1607, -1607,   880,
   -1607,  6764,  3953,  8239,  3953,  8267, -1607,  3953,  8296,  8324,
   -1607,  3953, -1607, -1607,  8353, -1607,  3953,  8381, -1607, -1607,
    8410, -1607, -1607,  3953, -1607, -1607,  8438,  3953,  8467,   812,
    1119,   -34, -1607, -1607, -1607,   720, -1607, -1607, -1607,  6336,
   -1607,  1124, -1607,  6764,  6764,  1007,  1125,  1126,   315, -1607,
   -1607,  7999,  1161,  1041, -1607, -1607, -1607,  7999,  6764,    57,
   -1607, -1607,  6764,  3953,  1013,  1135, -1607, -1607,  3953, -1607,
    7999,   721, -1607,   724,  1142, -1607,   762,  1034, -1607,   661,
   -1607,  1136, -1607, -1607,  4195,   853,  1084,   808, -1607,  4195,
    4195,    58,   696,   696, -1607, -1607,  1010,    15,   743,   824,
   -1607,    35,   970, -1607,   828,  7999, -1607, -1607,  1057, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,   101,   182,
    4195,  4195,   985, -1607, -1607,  1018, -1607, -1607,  1052, -1607,
   -1607,  1151, -1607, -1607, -1607, -1607,  1047,  1018,  1015,  1019,
   -1607, -1607,  1162,  1068, -1607, -1607, -1607,  7999,   -68,   971,
    1042,  1190,  8181,  7999,  1008,  1018,  1083,  7999,  1083, -1607,
   -1607,   -64,  5399, -1607,  1361,   388,  1181,  1165,  1166,  1195,
   -1607,  5159,   694,   770, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607,   240,  8495, -1607,  8524, -1607,   891,
   -1607, -1607,   891, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607,  1076,  1076, -1607, -1607,   891,  3953, -1607, -1607,   972,
    8552,   891,   891,   158, -1607, -1607, -1607, -1607, -1607,   891,
   -1607, -1607, -1607,   193, -1607, -1607, -1607,  8581,   891,   158,
     158, -1607,   973, -1607,   891, -1607,   891, -1607,   158,   891,
   -1607, -1607,   158,   891,   158,   158, -1607,   158,   891, -1607,
     158,   158, -1607,   891, -1607,   891, -1607,   871,  1018,  7999,
    7999,    -2,   347, -1607,  1050, -1607, -1607, -1607,  6764,   192,
     192,   244, -1607, -1607, -1607, -1607, -1607,  7999,  3953,  1058,
   -1607,  7999,  3953, -1607, -1607,  3953, -1607, -1607,   846,  1122,
   -1607, -1607,  1122, -1607, -1607,  1018, -1607, -1607,    37, -1607,
   -1607, -1607, -1607,    52,   669, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607,  1000, -1607, -1607, -1607,   139,  1018, -1607, -1607,
      92, -1607, -1607,  1087, -1607, -1607,  4195,  4195,   788,    69,
   -1607,  1012,  1018,   773, -1607,  1018,  1018,   740, -1607,     5,
   -1607, -1607, -1607,  1178, -1607,  4919,  6975,  7999,   812,  1175,
    1036,  1083,  1018,  1185,  1182,  1185, -1607, -1607, -1607, -1607,
    5399,  5399,    80,  1057,  4919, -1607,  5159,  5159,  5159,  5159,
    1199, -1607, -1607, -1607,  6764,  3953,  8609, -1607, -1607, -1607,
     891,  8638, -1607, -1607, -1607, -1607,  6764,  3953,  8666, -1607,
    8695, -1607,  1745,  1003,  1012,  1188,  1093,  8181, -1607,  6336,
   -1607,   364,   546,   192, -1607, -1607, -1607,  1091, -1607, -1607,
    1217, -1607,   727, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607,   149,  1057,  1018, -1607, -1607, -1607,   788,   788,
    4195, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
     373, -1607,  1072,  1004,   -68,   111, -1607,   846,   871, -1607,
   -1607,  1185, -1607,  1018,  1018, -1607, -1607,  1196, -1607, -1607,
    1198, -1607, -1607, -1607, -1607, -1607,  3953, -1607,   891, -1607,
   -1607, -1607,   891, -1607, -1607,  1012, -1607,  1018,  1012,   812,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607,  1210,  3953,  3953,
   -1607,   730,   749,  1057,  1028,   751, -1607, -1607,   625,   625,
     788, -1607,   763,  6764,  1003,  4919, -1607, -1607,  1072,    46,
      16, -1607,  1083, -1607,   239,   631, -1607, -1607,  1012, -1607,
     871,    47,   120,   293,   270, -1607, -1607, -1607,  1127, -1607,
   -1607,    58, -1607,  1057, -1607,    73,    73, -1607, -1607, -1607,
   -1607,   111,  1003,  3953, -1607, -1607, -1607, -1607, -1607,  1185,
    1201, -1607, -1607, -1607, -1607,  1003, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,  1030,
   -1607, -1607, -1607, -1607,  1072, -1607, -1607, -1607,  1012, -1607,
    1003, -1607, -1607
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1607, -1607,   925, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607,   302, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607,    78, -1607, -1607, -1607, -1607,  1249, -1607,  -350,
    -887, -1607, -1607, -1607, -1607,   297, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607,    66, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607,    79, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1494,  -305,
   -1607, -1607, -1607, -1607, -1607, -1322, -1607, -1607, -1607,   974,
   -1607,   510, -1607, -1607, -1607,   506, -1607, -1607,  -741, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1334, -1607, -1607, -1607,     2, -1607, -1607, -1607,
   -1607, -1607,  -313, -1429, -1607,   865, -1607,  -375,   422,  -660,
     514,    90,   323, -1607, -1607,  1065, -1607, -1607, -1607,   626,
   -1607, -1607, -1607, -1607,   622, -1607, -1607, -1607,   410,   203,
   -1607, -1607, -1607, -1607,  1176,   628, -1607, -1607, -1607,   230,
   -1607, -1607, -1607, -1607,   784,   785, -1607,  -378,     1,  -515,
     408,  -514,   405,   406, -1607, -1607, -1607,   923, -1607, -1607,
   -1607,  -692,  -223, -1607, -1607, -1607,    14,   403, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607,    44, -1607, -1607,
   -1607, -1607,  -693, -1607, -1508,  -430, -1607, -1607, -1607, -1607,
   -1607,   735,   400, -1607,    45, -1607,  -175, -1607,  -599, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607,   206, -1607, -1607, -1607, -1607, -1607,
   -1607,  1167, -1607,   572, -1607,  -615,  -646, -1607,  -377,  -512,
      23, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607,   874, -1607,   875, -1607,   866,   830,   463, -1024,  -833,
   -1607, -1607, -1607,   218,   217,    13,   437, -1607, -1607, -1607,
      39, -1607, -1268, -1607,  -192,    29,   207,     3, -1607, -1607,
   -1607, -1607,  -302, -1480, -1607,  -310,  -789, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607,   674, -1607, -1607, -1607, -1275,  -892,    10, -1607,
   -1606, -1552,  -216, -1607,  -320, -1607, -1607, -1607, -1032,  -163,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607,   300, -1607, -1607, -1607,   472, -1607, -1607,   469,
   -1607, -1607, -1607, -1607, -1607,   558,   309,    18, -1607,   753,
     754,   245,   367,  -321, -1607, -1607,   739, -1607, -1607,   298,
      -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -319
static const yytype_int16 yytable[] =
{
     361,   381,   361,   567,   361,   595,   361,   803,   316,   539,
     716,   908,   717,   718,   719,   720,   852,  1104,   361,   396,
     876,   875,   645,  1504,  1555,  1394,   372,   650,  1593,   850,
     652,   414,   395,  1524,   655,   830,  1621,   832,  1273,  1080,
     835,   572,   573,   646,  1415,   460,   563,    18,  1640,  1565,
      18,  1645,   530,   563,  1658,   872,   851,   407,   872,  1743,
    1149,  1540,  1153,   873,  1280,  1556,   873,   851,   858,  1481,
     479,    26,    27,    28,    26,    27,    28,   905,  1516,   886,
     887,   563,   563,   563,  1395,   623,   483,   800,   486,   523,
     524,   656,    11,  1708,  1187,  1756,  1356,  1358,   851,   523,
     524,  1262,  1742,  1221,  1194,  1329,   523,   524,   404,  1203,
     624,  1205,   656,  1208,   420,  1209,  1623,  1214,  1329,  1217,
     308,  1220,  1019,   526,  1230,  1226,  1564,  1228,  1188,   698,
     699,   700,   701,   702,   703,  1623,   705,   706,   707,   708,
     709,   710,   711,   712,    88,  1140,  1459,    88,  1218,  1222,
     412,   589,  1189,  1353,  1640,  1033,  1517,  1141,  1460,  1223,
     481,  1351,   851,  1354,   429,  1103,  1357,  1142,  1780,  1757,
    1759,   851,  1122,  1123,  1124,  1219,  1125,  1126,  1127,   876,
     875,   876,   875,  1029,  1319,   309,   527,  1128,  1129,  1774,
    1015,  1130,  1131,  1298,  1624,  1482,  1299,  1597,  1746,  1300,
    1301,  1302,  1303,  -318,   411,   482,  1752,   749,   531,   851,
     657,  1741,    88,  1624,   590,   889,   889,  1651,  1331,  1710,
    1107,  1108,  1109,   833,  1263,  1518,   604,  1352,  1744,   564,
     525,   658,  1059,   647,   461,   361,   564,  1630,   361,   625,
    1416,   847,  1417,  1760,  1662,  1663,  1664,  1665,  1768,   540,
    1281,    11,  1385,   484,  1348,   487,  1387,  1541,  1542,  1304,
    1517,  1557,  1558,   865,   874,   564,   564,   874,   786,   787,
     788,   789,  1614,  1615,  1616,  1319,  1320,  1321,   528,   529,
    1176,  -318,  1625,  1396,  1397,  1398,   545,  1659,  1660,   546,
    1526,  1755,   742,  1305,   432,   422,  1410,  1051,    26,    27,
      28,  1531,   433,   473,   415,   360,   591,   592,  1427,   406,
     758,  1306,  1307,  1534,   475,  1308,   423,  1172,   430,   759,
    1765,   851,   476,   421,   424,  1236,   871,    18,  1110,  1620,
    1259,  1551,   433,  1527,   805,   872,  1111,  1112,  1113,  1114,
    1115,  1762,    14,   873,   851,    15,    16,  -318,  1696,  1471,
    1173,    26,    27,    28,  1694,   381,   381,   381,   361,   806,
     863,  1693,   743,   744,   671,  1265,   851,  1320,  1321,  1336,
     745,    88,  1174,   408,   409,   361,  1337,   864,  1749,  1116,
    1206,  1195,   434,  1266,  1241,   671,  -318,  1344,  1345,  1117,
     876,   875,   396,  1766,   581,   582,   672,   876,   875,   876,
     875,  1118,   477,  1207,   425,   395,    26,    27,    28,   361,
    1560,  1681,   434,  1682,  1196,  1763,   361,  1701,  1731,  1197,
    1198,  1346,  1338,  1339,    88,   361,   600,  1037,  1210,   361,
     361,   423,    18,   617,  1594,   427,  1246,  1247,   601,  1472,
    1473,   552,   470,   428,  1038,   361,   617,   641,   538,   602,
     361,  1211,   553,   361,  1212,  1213,   431,   361,  1770,  1215,
    1612,  1549,   492,  1769,  1150,  1554,   471,   472,   361,   547,
     548,  1613,   583,   584,   585,   586,   587,   588,   810,    88,
    1584,   361,  1216,   361,  1200,   641,  1151,  1152,    18,   549,
    1585,  1377,   438,  1622,  1134,  1135,  1386,  1576,   436,  1144,
     439,  1388,  1586,  1587,  1083,  1391,  1201,  1202,  1632,  1145,
    1146,  1635,  1636,   437,   618,   492,  1136,  1137,   622,  1138,
    1581,  1147,  1148,   634,  1107,  1108,  1109,  1571,  1652,   643,
     440,   813,   749,   541,   492,   492,  1588,  1572,  1573,   542,
     361,   644,   612,   750,  1590,   648,   649,   492,  1592,  1574,
    1575,   818,   492,   492,   492,  1433,   361,   808,   659,   660,
     661,   764,   441,   823,   381,   809,   669,  1595,   824,   828,
     829,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,  1474,   772,
     492,   361,   361,  1684,  1286,  1685,   775,  1466,  1467,   492,
    1697,   856,   860,   892,   876,   875,   841,   492,   550,   396,
     551,   790,  1480,  1287,   492,   846,  1483,   857,   861,  1288,
     492,   492,  1347,   891,  1185,   442,  1348,  1186,   730,  1711,
    1712,   492,  1110,   733,   734,   492,  1042,  1043,   736,  1154,
    1111,  1112,  1113,  1114,  1115,   492,   361,  1056,   893,   492,
     492,  1057,   539,  1718,   492,   894,  1753,   451,   839,   492,
     452,  1267,   840,   577,   361,  1279,   492,   492,   361,   443,
    1155,   844,  1156,  1157,  1158,  1159,  1160,  1161,  1162,   845,
     664,   532,   533,  1116,   670,   396,   361,  1163,  1164,  1165,
    1166,  1167,  1168,  1117,   455,  1289,  1290,  1291,   395,   848,
    1292,  1293,  1169,  1170,  1171,  1118,  1340,   849,   895,   812,
    1420,   444,  1341,   934,   611,   935,   896,  1421,   361,   361,
     361,   361,   936,   937,   897,   820,   895,  1566,   938,   445,
     633,  1027,   898,  1567,   902,   396,   396,   396,   396,  1028,
    1424,   939,   940,   941,   607,   608,  1105,  1421,   395,   395,
     406,  1244,   842,   843,  1106,   406,  1462,  1489,   406,  1245,
    1489,   361,   406,  1489,  1463,  1490,  1728,   381,  1491,  1598,
    1498,  1690,   761,   762,  1729,  1503,   493,   494,   396,   495,
     496,   497,   446,   498,   499,  1728,   683,  1733,   688,   447,
    1631,   395,  1023,  1730,   361,  1734,  1735,  1403,  1736,   848,
     448,   361,   449,  1568,   677,  1528,  1529,  1738,   679,  1569,
     456,   396,   685,   457,   689,   690,   691,   450,  1041,   692,
     468,  1476,  1600,   464,   395,   523,   524,  1479,   780,   781,
     782,   783,   784,   785,   581,   582,  1413,   361,  1035,  1036,
    1488,  1510,  1511,  1512,  1513,   735,   469,  1429,  1430,   361,
    1378,  1379,  1380,  1676,  1041,   479,  1438,   361,  1076,  1077,
    1442,   767,  1444,  1445,   485,  1447,  1120,  1121,  1450,  1451,
    1601,  1602,   739,  1610,   488,   739,  1084,  1085,  1086,  1641,
       1,     2,     3,     4,     5,     6,     7,     8,     9,  1614,
    1615,  1616,   770,  1132,  1133,   489,   798,   976,   977,   490,
    1224,  1225,   361,  1326,  1327,   491,  1332,  1333,  1334,  1335,
    1180,  1407,  1493,  1494,  1500,  1501,  1457,  1514,  1515,  1505,
    1506,  1521,  1522,  1633,  1634,  1637,  1638,   492,  1667,   313,
     314,   714,   715,  1675,  1717,   721,   722,  1719,   723,   724,
    1671,  1061,   417,   418,   731,   732,  1771,  1772,   778,   779,
     505,   406,   522,   506,   537,   534,   543,   544,   535,   536,
     569,   554,   559,  1081,   571,   578,   580,   579,   593,   406,
     827,   507,   508,   509,   510,   511,   512,  1754,   594,   423,
     837,   838,   513,   427,   432,  1707,   438,   653,   596,   597,
     475,   406,   598,   599,   610,   514,   621,   628,   629,   619,
     642,   651,   635,   654,  1687,   675,   678,   693,  1229,   361,
     662,  1628,  1629,   694,   663,   695,   725,   866,   726,   727,
     361,  1751,   728,   361,   753,   748,   765,   713,   773,   774,
     768,   792,  1709,   793,   794,   801,   802,  1781,   814,   804,
     396,   815,   816,   817,  1740,   821,   822,  1604,   825,   853,
    1748,  1607,   854,   395,   851,   855,   859,  1739,   862,   870,
     903,  1758,  1761,  1764,  1767,   905,   899,   900,   901,   904,
     515,   516,   517,   518,   519,   520,  1018,   909,  1016,  1025,
    1020,  1773,  1775,  1024,  1026,  1030,  1048,  1049,  1051,  1046,
    1055,   671,  1075,  1066,  1069,  1778,  1045,  1039,  1070,  1090,
    1093,  1050,  1088,   361,  1092,  1094,  1096,  1098,   361,  1101,
    1102,   361,  1175,  1180,  1231,  1700,  1179,  1647,  1191,  1184,
    1782,  1193,  1242,  1204,  1227,  1239,  1249,  1251,  1243,   361,
     361,  1252,   521,  1257,  1270,   361,  1268,  1274,  1278,  1283,
     361,  1282,  1325,  1318,   361,  1276,  1297,   396,  1044,  1284,
    1329,  1359,   396,  1382,   683,  1400,  1360,   396,  1431,  1458,
     395,   396,  1074,  1404,  1406,   395,  1468,   361,  1465,  1646,
     395,  1469,  1470,  1477,   395,  1485,  1062,  1063,  1064,  1486,
    1376,  1478,  1067,   685,   396,  1492,  1495,  1499,  1497,    88,
    1520,  1532,  1530,   866,   361,  1535,  1533,   395,  1537,  1536,
    1538,  1546,  1547,  1561,  1552,  1579,  1550,   633,  1562,  1563,
    1564,   396,  1599,  1545,  1644,  1649,  1650,  1606,   739,  1627,
    1619,  1653,  1654,  1666,   395,  1678,  1582,  1591,  1677,  1688,
    1689,  1703,   381,  1461,  1714,  1648,   361,   361,  1389,  1725,
    1713,  1732,  1392,  1779,   361,  1777,  1705,  1143,  1517,  1402,
     361,   361,   312,   396,   396,   361,  1178,  1464,  1425,  1661,
    1408,   906,   910,   361,   605,  1702,   395,   395,   396,  1405,
    1060,   930,   396,   500,  1411,  1412,   834,   831,  1275,  1419,
    1079,   395,  1261,   467,   836,   395,  1428,   747,   562,   696,
    1502,   697,  1434,  1475,  1436,  1100,  1603,  1439,   361,   474,
     890,  1443,   638,   626,   627,   668,  1448,  1058,  1285,  1296,
    1509,  1082,  1618,  1453,   633,  1328,  1699,  1455,  1496,  1692,
     826,  1525,  1508,  1643,  1706,   798,  1611,  1240,  1065,  1068,
    1022,  1238,   776,   791,   777,     0,     0,     0,     0,     0,
     361,     0,     0,  1237,     0,  1548,   361,     0,     0,     0,
     361,     0,     0,     0,     0,   361,     0,     0,     0,     0,
       0,     0,     0,     0,   361,     0,  1720,     0,  1250,     0,
       0,  1254,  1255,  1256,     0,     0,  -233,     0,  1264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1269,
       0,     0,     0,     0,     0,     0,     0,     0,   866,     0,
       0,     0,     0,     0,  -233,     0,  1559,     0,   633,     0,
       0,     0,  -233,  1343,     0,  1376,  1350,     0,     0,     0,
       0,     0,     0,   957,  1323,  1324,   958,   959,   960,   961,
       0,   962,     0,     0,   963,     0,     0,   964,   965,   966,
     967,   968,   969,   970,   971,   972,     0,     0,   973,   974,
     975,     0,   361,   361,     0,     0,     0,     0,     0,     0,
       0,   361,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,   361,     0,     0,     0,   396,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   309,
       0,   395,   976,   977,     0,     0,  1580,     0,     0,     0,
       0,     0,     0,     0,  1390,     0,     0,   958,   959,   960,
     961,     0,   962,     0,     0,   963,     0,     0,   964,   965,
     966,   967,   968,   969,   970,   971,   972,     0,     0,   973,
     974,   975,     0,     0,     0,     0,     0,     0,   361,   361,
     361,     0,     0,     0,     0,     0,     0,     0,     0,   406,
       0,     0,     0,   361,   361,   406,   396,   361,     0,   361,
     361,   361,   361,     0,     0,     0,     0,   361,   406,   395,
     309,     0,     0,   976,   977,     0,     0,     0,     0,   361,
       0,     0,     0,     0,   396,     0,  1484,     0,     0,  1376,
    1679,  1487,   381,     0,     0,     0,   396,   395,     0,     0,
       0,     0,     0,  1523,  1655,  1656,     0,     0,  1376,   395,
    1376,  1376,  1376,  1376,     0,  -233,     0,  1680,  -233,  -233,
    -233,  -233,     0,  -233,  -233,     0,  -233,     0,     0,  -233,
    -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,     0,     0,
    -233,  -233,  -233,     0,     0,  1539,     0,  -233,  -233,     0,
       0,   633,     0,     0,     0,   633,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1668,     0,     0,     0,  -233,
    -233,     0,  -233,     0,     0,     0,     0,  1672,     0,     0,
       0,  -233,     0,     0,  -233,  -233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   361,     0,   361,     0,
       0,     0,     0,  1393,     0,     0,   958,   959,   960,   961,
       0,   962,     0,   396,   963,     0,     0,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   395,     0,   973,   974,
     975,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1376,
       0,     0,     0,     0,     0,     0,  1715,   633,  1596,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   309,
       0,     0,   976,   977,     0,   406,     0,     0,     0,   406,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1605,     0,     0,     0,  1608,     0,     0,  1609,     0,
     317,   318,   319,   320,   321,   322,   323,   324,   325,    38,
      39,    40,    41,    42,    43,    44,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,    57,    58,
      59,    60,    61,    62,    63,   406,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,   338,    77,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,   339,   340,    87,     0,     0,
       0,    89,     0,     0,     0,     0,    92,   341,    94,   342,
      96,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   343,   344,   108,   345,   110,     0,   111,   346,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   347,   127,   128,   129,   130,   131,   348,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,   145,   146,   147,     0,   349,   149,     0,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   350,   176,   177,   351,   179,   180,   181,
     182,   183,   352,   185,   353,   187,   188,   189,   190,   191,
     192,   354,   355,   195,   356,   357,   198,   199,   200,   201,
     202,   203,   958,   959,   960,   961,     0,   962,     0,     0,
     963,  1726,  1727,   964,   965,   966,   967,   968,   969,   970,
     971,   972,     0,     0,   973,   974,   975,     0,     0,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,   737,    14,     0,     0,    15,    16,     0,
      17,     0,    18,     0,    19,    20,    21,     0,    22,    23,
      24,   738,     0,     0,     0,   309,  1776,     0,   976,   977,
       0,     0,     0,  1071,    25,  1072,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    85,    86,    87,     0,     0,    88,
      89,    90,    91,     0,     0,    92,    93,    94,    95,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     0,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,   737,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
      22,    23,    24,   746,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    85,    86,    87,     0,
       0,    88,    89,    90,    91,     0,     0,    92,    93,    94,
      95,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    14,     0,
       0,    15,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,    23,    24,   419,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,    85,    86,
      87,     0,     0,    88,    89,    90,    91,     0,     0,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,   684,     0,     0,     0,     0,
      25,     0,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      85,    86,    87,     0,     0,    88,    89,    90,    91,     0,
       0,    92,    93,    94,    95,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
       0,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,   729,     0,     0,
       0,     0,    25,     0,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,    85,    86,    87,     0,     0,    88,    89,    90,
      91,     0,     0,    92,    93,    94,    95,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     0,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    15,    16,     0,
      17,     0,    18,     0,    19,    20,    21,     0,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,   811,
       0,     0,     0,     0,    25,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    85,    86,    87,     0,     0,    88,
      89,    90,    91,     0,     0,    92,    93,    94,    95,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     0,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,   819,     0,     0,     0,     0,    25,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    85,    86,    87,     0,
       0,    88,    89,    90,    91,     0,     0,    92,    93,    94,
      95,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,   737,    14,     0,
       0,    15,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,    85,    86,
      87,     0,     0,    88,    89,    90,    91,     0,     0,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      85,    86,    87,     0,     0,    88,    89,    90,    91,     0,
       0,    92,    93,    94,    95,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
       0,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   338,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,    85,    86,    87,     0,     0,    88,    89,    90,
      91,     0,     0,    92,   341,    94,   342,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   343,   344,
     108,   345,   110,     0,   111,   346,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     350,   176,   177,   351,   179,   180,   181,   182,   183,   352,
     185,   353,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   356,   357,   198,   199,   200,   201,   202,   203,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    15,    16,     0,
      17,     0,    18,     0,    19,    20,    21,     0,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    85,    86,    87,     0,     0,    88,
      89,    90,    91,     0,     0,    92,    93,    94,    95,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     0,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   911,   140,   141,   142,   143,   144,
       0,   145,   912,   147,     0,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,    14,     0,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   338,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    85,    86,    87,     0,
       0,    88,    89,    90,    91,     0,     0,    92,   341,    94,
     342,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   343,   344,   108,   345,   110,     0,   111,   346,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   347,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   350,   176,   177,   351,   179,   180,
     181,   182,   183,   352,   185,   353,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   356,   357,   198,   199,   200,
     201,   202,   203,    12,     0,     0,     0,     0,     0,     0,
       0,     0,  1362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1363,     0,     0,     0,     0,     0,  1364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1365,   384,    31,    32,    33,   385,    35,    36,   386,
      38,    39,    40,    41,    42,    43,    44,  1366,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   338,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,   339,   340,    87,     0,
       0,     0,    89,    90,    91,     0,     0,    92,   341,    94,
     342,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   343,   344,   108,   345,   110,     0,   111,   346,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   347,   127,   128,   129,   130,   131,   348,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   389,   149,     0,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   350,   176,   177,   351,   179,   180,
     181,   182,   183,   352,   185,   353,   187,   188,  1367,  1368,
     191,   192,   354,   355,   195,   356,   357,   198,   199,   200,
     201,   202,   203,    12,     0,     0,     0,     0,     0,     0,
       0,     0,  1362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1365,   384,    31,    32,    33,   385,    35,    36,   386,
      38,    39,    40,    41,    42,    43,    44,  1366,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   338,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,   339,   340,    87,     0,
       0,     0,    89,    90,    91,     0,     0,    92,   341,    94,
     342,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   343,   344,   108,   345,   110,     0,   111,   346,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   347,   127,   128,   129,   130,   131,   348,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   389,   149,     0,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   350,   176,   177,   351,   179,   180,
     181,   182,   183,   352,   185,   353,   187,   188,   189,   190,
     191,   192,   354,   355,   195,   356,   357,   198,   199,   200,
     201,   202,   203,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   383,   384,    31,    32,    33,   385,    35,    36,   386,
      38,    39,    40,    41,    42,    43,    44,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   338,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,   339,   340,    87,     0,
       0,     0,    89,    90,    91,     0,     0,    92,   341,    94,
     342,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   343,   344,   108,   345,   110,     0,   111,   346,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   347,   127,   128,   129,   130,   131,   348,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   389,   149,     0,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   350,   176,   177,   351,   179,   180,
     181,   182,   183,   352,   185,   353,   187,   188,   189,   190,
     191,   192,   354,   355,   195,   356,   357,   198,   199,   200,
     201,   202,   203,  1031,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   382,  1032,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   383,   384,    31,    32,    33,   385,    35,    36,   386,
     387,    39,    40,    41,    42,    43,    44,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   338,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,   339,   340,    87,     0,
       0,     0,    89,     0,     0,     0,     0,    92,   341,    94,
     342,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   343,   344,   108,   345,   110,     0,   111,   346,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   347,   127,   128,   129,   130,   131,   348,
     388,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   389,   149,     0,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   350,   176,   177,   351,   179,   180,
     181,   182,   183,   352,   185,   353,   187,   188,   189,   190,
     191,   192,   390,   391,   195,   356,   357,   198,   199,   200,
     201,   202,   203,   613,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   614,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   317,   318,   319,   320,   321,   322,   323,   324,   325,
      38,    39,    40,    41,    42,    43,    44,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   338,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,   339,   340,    87,     0,
       0,     0,    89,     0,     0,     0,     0,    92,   341,    94,
     342,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   343,   344,   108,   345,   110,     0,   111,   346,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   347,   127,   128,   129,   130,   131,   348,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   349,   149,     0,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   350,   176,   177,   351,   179,   180,
     181,   182,   183,   352,   185,   353,   187,   188,   189,   190,
     191,   192,   354,   355,   195,   356,   357,   198,   199,   200,
     201,   202,   203,   665,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   666,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   317,   318,   319,   320,   321,   322,   323,   324,   325,
      38,    39,    40,    41,    42,    43,    44,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   338,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,   339,   340,    87,     0,
       0,     0,    89,     0,     0,     0,     0,    92,   341,    94,
     342,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   343,   344,   108,   345,   110,     0,   111,   346,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   347,   127,   128,   129,   130,   131,   348,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   349,   149,     0,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   350,   176,   177,   351,   179,   180,
     181,   182,   183,   352,   185,   353,   187,   188,   189,   190,
     191,   192,   354,   355,   195,   356,   357,   198,   199,   200,
     201,   202,   203,   362,   363,     0,     0,     0,     0,   364,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   365,     0,   366,   367,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   338,    77,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,     0,     0,
       0,     0,     0,   339,   340,    87,     0,     0,   369,    89,
       0,     0,     0,     0,    92,   341,    94,   342,    96,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   343,
     344,   108,     0,   110,     0,   111,   370,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     347,   127,   128,   129,   130,   131,   348,     0,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
     145,   146,   147,     0,     0,   149,     0,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   350,   176,   177,   351,   179,   180,   181,   182,   183,
     352,   185,   353,   187,   188,   189,   190,   191,   192,   354,
     355,   195,   356,   357,   198,   199,   200,   201,   202,   203,
     362,   363,     0,     0,     0,     0,   364,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     365,     0,   366,   367,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   338,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
     339,   340,    87,     0,     0,   369,    89,     0,     0,     0,
       0,    92,   341,    94,   342,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   343,   344,   108,     0,
     110,     0,   111,     0,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   347,   127,   128,
     129,   130,   131,   348,     0,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
       0,     0,   149,     0,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   350,   176,
     177,   351,   179,   180,   181,   182,   183,   352,   185,   353,
     187,   188,   189,   190,   191,   192,   354,   355,   195,   356,
     357,   198,   199,   200,   201,   202,   203,   382,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   383,   384,    31,    32,
      33,   385,    35,    36,   386,   387,    39,    40,    41,    42,
      43,    44,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   338,    77,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
       0,   339,   340,    87,     0,     0,     0,    89,     0,     0,
       0,     0,    92,   341,    94,   342,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   343,   344,   108,
     345,   110,     0,   111,   346,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   347,   127,
     128,   129,   130,   131,   348,   388,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,   145,   146,
     147,     0,   389,   149,     0,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   350,
     176,   177,   351,   179,   180,   181,   182,   183,   352,   185,
     353,   187,   188,   189,   190,   191,   192,   390,   391,   195,
     356,   357,   198,   199,   200,   201,   202,   203,   382,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   383,   384,    31,
      32,    33,   385,    35,    36,   386,    38,    39,    40,    41,
      42,    43,    44,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   338,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   339,   340,    87,     0,     0,     0,    89,     0,
       0,     0,     0,    92,   341,    94,   342,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   343,   344,
     108,   345,   110,     0,   111,   346,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   347,
     127,   128,   129,   130,   131,   348,   388,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   389,   149,     0,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     350,   176,   177,   351,   179,   180,   181,   182,   183,   352,
     185,   353,   187,   188,   189,   190,   191,   192,   390,   391,
     195,   356,   357,   198,   199,   200,   201,   202,   203,   630,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   317,   318,   319,
     320,   321,   322,   323,   324,   325,    38,    39,    40,    41,
      42,    43,    44,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   338,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   339,   340,    87,     0,     0,   631,    89,     0,
       0,     0,     0,    92,   341,    94,   342,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   343,   344,
     108,   345,   110,     0,   111,   346,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   347,
     127,   128,   129,   130,   131,   348,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   349,   149,     0,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     350,   176,   177,   351,   179,   180,   181,   182,   183,   352,
     185,   353,   187,   188,   189,   190,   191,   192,   354,   355,
     195,   356,   357,   198,   199,   200,   201,   202,   203,   795,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   317,   318,   319,
     320,   321,   322,   323,   324,   325,    38,    39,    40,    41,
      42,    43,    44,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   338,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   339,   340,    87,     0,     0,     0,    89,     0,
       0,     0,     0,    92,   341,    94,   342,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   343,   344,
     108,   345,   110,     0,   111,   346,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   347,
     127,   128,   129,   130,   131,   348,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   349,   149,     0,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     350,   176,   177,   351,   179,   180,   181,   182,   183,   352,
     185,   353,   187,   188,   189,   190,   191,   192,   354,   355,
     195,   356,   357,   198,   199,   200,   201,   202,   203,   799,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   317,   318,   319,
     320,   321,   322,   323,   324,   325,    38,    39,    40,    41,
      42,    43,    44,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   338,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,   339,   340,    87,     0,     0,     0,    89,     0,
       0,     0,     0,    92,   341,    94,   342,    96,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   343,   344,
     108,   345,   110,     0,   111,   346,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   347,
     127,   128,   129,   130,   131,   348,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,     0,   349,   149,     0,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     350,   176,   177,   351,   179,   180,   181,   182,   183,   352,
     185,   353,   187,   188,   189,   190,   191,   192,   354,   355,
     195,   356,   357,   198,   199,   200,   201,   202,   203,   680,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   317,
     318,   319,   320,   321,   322,   323,   324,   325,    38,    39,
      40,    41,    42,    43,    44,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,   338,    77,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,   339,   340,    87,     0,     0,     0,
      89,     0,     0,     0,     0,    92,   341,    94,   342,    96,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     343,   344,   108,   345,   110,     0,   111,   346,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   347,   127,   128,   129,   130,   131,   348,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,     0,   349,   149,     0,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   350,   176,   177,   351,   179,   180,   181,   182,
     183,   352,   185,   353,   187,   188,   189,   190,   191,   192,
     354,   355,   195,   356,   357,   198,   199,   200,   201,   202,
     203,   317,   318,   319,   320,   321,   322,   323,   324,   325,
      38,    39,    40,    41,    42,    43,    44,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   338,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,   339,   340,    87,     0,
       0,     0,    89,     0,     0,     0,     0,    92,   341,    94,
     342,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   343,   344,   108,   345,   110,     0,   111,   346,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   347,   127,   128,   129,   130,   131,   348,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,     0,   349,   149,     0,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   350,   176,   177,   351,   179,   180,
     181,   182,   183,   352,   185,   353,   187,   188,   189,   190,
     191,   192,   354,   355,   195,   356,   357,   198,   199,   200,
     201,   202,   203,    39,    40,    41,    42,    43,    44,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   338,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,   339,   340,
      87,     0,     0,     0,    89,     0,     0,     0,     0,    92,
     341,    94,   342,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   343,   344,   108,     0,   110,     0,
     111,     0,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   347,   127,   128,   129,   130,
     131,   348,     0,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,     0,     0,
     149,     0,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   350,   176,   177,   351,
     179,   180,   181,   182,   183,   352,   185,   353,   187,   188,
     189,   190,   191,   192,   354,   355,   195,   356,   357,   198,
     199,   200,   201,   202,   203,     0,  1414,     0,     0,   958,
     959,   960,   961,     0,   962,     0,     0,   963,     0,     0,
     964,   965,   966,   967,   968,   969,   970,   971,   972,     0,
       0,   973,   974,   975,  1426,     0,     0,   958,   959,   960,
     961,     0,   962,     0,     0,   963,     0,     0,   964,   965,
     966,   967,   968,   969,   970,   971,   972,     0,     0,   973,
     974,   975,     0,  1435,     0,     0,   958,   959,   960,   961,
       0,   962,   309,     0,   963,   976,   977,   964,   965,   966,
     967,   968,   969,   970,   971,   972,     0,     0,   973,   974,
     975,  1437,     0,     0,   958,   959,   960,   961,     0,   962,
     309,     0,   963,   976,   977,   964,   965,   966,   967,   968,
     969,   970,   971,   972,     0,     0,   973,   974,   975,     0,
    1440,     0,     0,   958,   959,   960,   961,     0,   962,   309,
       0,   963,   976,   977,   964,   965,   966,   967,   968,   969,
     970,   971,   972,     0,     0,   973,   974,   975,  1441,     0,
       0,   958,   959,   960,   961,     0,   962,   309,     0,   963,
     976,   977,   964,   965,   966,   967,   968,   969,   970,   971,
     972,     0,     0,   973,   974,   975,     0,  1446,     0,     0,
     958,   959,   960,   961,     0,   962,   309,     0,   963,   976,
     977,   964,   965,   966,   967,   968,   969,   970,   971,   972,
       0,     0,   973,   974,   975,  1449,     0,     0,   958,   959,
     960,   961,     0,   962,   309,     0,   963,   976,   977,   964,
     965,   966,   967,   968,   969,   970,   971,   972,     0,     0,
     973,   974,   975,     0,  1452,     0,     0,   958,   959,   960,
     961,     0,   962,   309,     0,   963,   976,   977,   964,   965,
     966,   967,   968,   969,   970,   971,   972,     0,     0,   973,
     974,   975,  1454,     0,     0,   958,   959,   960,   961,     0,
     962,   309,     0,   963,   976,   977,   964,   965,   966,   967,
     968,   969,   970,   971,   972,     0,     0,   973,   974,   975,
       0,  1456,     0,     0,   958,   959,   960,   961,     0,   962,
     309,     0,   963,   976,   977,   964,   965,   966,   967,   968,
     969,   970,   971,   972,     0,     0,   973,   974,   975,  1577,
       0,     0,   958,   959,   960,   961,     0,   962,   309,     0,
     963,   976,   977,   964,   965,   966,   967,   968,   969,   970,
     971,   972,     0,     0,   973,   974,   975,     0,  1578,     0,
       0,   958,   959,   960,   961,     0,   962,   309,     0,   963,
     976,   977,   964,   965,   966,   967,   968,   969,   970,   971,
     972,     0,     0,   973,   974,   975,  1583,     0,     0,   958,
     959,   960,   961,     0,   962,   309,     0,   963,   976,   977,
     964,   965,   966,   967,   968,   969,   970,   971,   972,     0,
       0,   973,   974,   975,     0,  1589,     0,     0,   958,   959,
     960,   961,     0,   962,   309,     0,   963,   976,   977,   964,
     965,   966,   967,   968,   969,   970,   971,   972,     0,     0,
     973,   974,   975,  1669,     0,     0,   958,   959,   960,   961,
       0,   962,   309,     0,   963,   976,   977,   964,   965,   966,
     967,   968,   969,   970,   971,   972,     0,     0,   973,   974,
     975,     0,  1670,     0,     0,   958,   959,   960,   961,     0,
     962,   309,     0,   963,   976,   977,   964,   965,   966,   967,
     968,   969,   970,   971,   972,     0,     0,   973,   974,   975,
    1673,     0,     0,   958,   959,   960,   961,     0,   962,   309,
       0,   963,   976,   977,   964,   965,   966,   967,   968,   969,
     970,   971,   972,     0,     0,   973,   974,   975,     0,  1674,
       0,     0,   958,   959,   960,   961,     0,   962,   309,     0,
     963,   976,   977,   964,   965,   966,   967,   968,   969,   970,
     971,   972,     0,     0,   973,   974,   975,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   309,     0,     0,   976,
     977,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   309,     0,     0,   976,   977
};

static const yytype_int16 yycheck[] =
{
       7,     8,     9,   316,    11,   382,    13,   606,     6,   232,
     525,   752,   526,   527,   528,   529,   676,   909,    25,     9,
     713,   713,   452,  1291,  1358,    70,     8,   457,  1457,   675,
     460,    17,     9,  1308,   464,   650,  1516,   652,  1070,   872,
     655,   362,   363,    36,   129,    12,    55,    35,    43,  1371,
      35,  1545,    15,    55,  1562,    43,    51,    13,    43,    13,
     947,   129,   949,    51,    52,   129,    51,    51,   683,    12,
      43,    59,    60,    61,    59,    60,    61,    53,    43,   725,
     726,    55,    55,    55,   129,    44,    66,   599,    66,    37,
      38,    36,    12,  1645,   981,    48,  1120,  1121,    51,    37,
      38,    15,  1708,   254,   991,   132,    37,    38,     0,   996,
      69,   998,    36,  1000,    24,  1002,    43,  1004,   132,  1006,
     255,  1008,   768,    14,  1016,  1012,    15,  1014,   286,   507,
     508,   509,   510,   511,   512,    43,   514,   515,   516,   517,
     518,   519,   520,   521,   132,   287,   180,   132,   287,   300,
     114,    14,   310,   180,    43,   801,   121,   299,   192,   310,
      66,   133,    51,   190,    43,   906,   180,   309,  1774,   122,
      50,    51,   913,   914,   915,   314,   917,   918,   919,   872,
     872,   874,   874,   798,   126,   320,    77,   928,   929,  1741,
     199,   932,   933,    92,   121,   138,    95,   199,   182,    98,
      99,   100,   101,    55,   136,   111,  1714,   183,   171,    51,
     155,  1705,   132,   121,    77,   727,   728,  1551,  1110,  1648,
      72,    73,    74,   653,   138,   190,   200,   199,   182,   238,
     168,   155,   847,   226,   201,   242,   238,   168,   245,   198,
     325,   671,   327,   123,  1566,  1567,  1568,  1569,  1728,   235,
    1083,    12,  1139,   233,   249,   233,  1143,   325,   326,   158,
     121,   325,   326,   693,   252,   238,   238,   252,   589,   590,
     591,   592,   220,   221,   222,   126,   218,   219,   169,   170,
     122,   133,   190,   328,   329,   330,   242,  1562,  1563,   245,
     108,  1720,   159,   192,    43,    22,  1183,   157,    59,    60,
      61,  1325,    51,    22,   112,     7,   169,   170,  1195,    11,
     285,   210,   211,  1337,    43,   214,    43,   254,    43,   294,
      50,    51,    51,    25,    51,  1018,   704,    35,   180,   190,
     190,  1355,    51,   151,   112,    43,   188,   189,   190,   191,
     192,    48,    27,    51,    51,    30,    31,   199,  1623,    34,
     287,    59,    60,    61,  1622,   362,   363,   364,   365,   137,
     232,   212,   229,   230,    12,    26,    51,   218,   219,   145,
     237,   132,   309,   129,   130,   382,   152,   249,  1712,   231,
     287,   277,   131,    44,  1030,    12,   238,    75,    76,   241,
    1083,  1083,   382,   123,    37,    38,    44,  1090,  1090,  1092,
    1092,   253,   131,   310,   131,   382,    59,    60,    61,   416,
      22,    47,   131,    49,   310,   122,   423,    44,  1693,   315,
     316,   109,   198,   199,   132,   432,    14,    28,   287,   436,
     437,    43,    35,   423,  1458,    43,  1035,  1036,    26,   124,
     125,    43,    51,    51,    45,   452,   436,   437,    51,    37,
     457,   310,    54,   460,   313,   314,    43,   464,  1733,   287,
    1492,  1353,    36,  1731,   287,  1357,    75,    76,   475,    23,
      24,  1495,   115,   116,   117,   118,   119,   120,    52,   132,
     287,   488,   310,   490,   287,   475,   309,   310,    35,    43,
     297,  1137,    43,  1517,   286,   287,  1142,  1384,    43,   287,
      51,  1147,   309,   310,    51,  1151,   309,   310,  1532,   297,
     298,  1535,  1536,    43,   424,    36,   308,   309,   428,   311,
    1407,   309,   310,   433,    72,    73,    74,   287,  1552,   439,
      22,    52,   183,    33,    36,    36,  1423,   297,   298,    39,
     547,   451,    44,   194,  1431,   455,   456,    36,  1435,   309,
     310,    52,    36,    36,    36,  1201,   563,    36,   468,   469,
     470,   559,    22,    52,   571,    44,   476,  1459,    52,    52,
      52,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,  1248,   571,
      36,   598,   599,    47,   102,    49,   578,  1243,  1244,    36,
    1624,    36,    36,    25,  1297,  1297,    52,    36,   285,   599,
     287,   593,  1258,   121,    36,    52,  1262,    52,    52,   127,
      36,    36,   245,    52,   310,    22,   249,   313,   538,  1653,
    1654,    36,   180,   543,   544,    36,    52,    52,   548,   254,
     188,   189,   190,   191,   192,    36,   653,    52,    25,    36,
      36,    52,   875,  1677,    36,    25,    25,    51,    44,    36,
      12,    52,    44,   365,   671,    52,    36,    36,   675,    22,
     285,    36,   287,   288,   289,   290,   291,   292,   293,    44,
     474,   172,   173,   231,   478,   675,   693,   302,   303,   304,
     305,   306,   307,   241,    51,   203,   204,   205,   675,    36,
     208,   209,   317,   318,   319,   253,   178,    44,    36,   619,
     254,    22,   184,   254,   416,   256,    44,   261,   725,   726,
     727,   728,   263,   264,   227,   635,    36,    33,   269,    22,
     432,    36,   235,    39,    44,   725,   726,   727,   728,    44,
     254,   282,   283,   284,   112,   113,   187,   261,   725,   726,
     452,    36,   662,   663,   195,   457,    36,    36,   460,    44,
      36,   768,   464,    36,    44,    44,    36,   774,    44,  1462,
    1284,    44,   321,   322,    44,  1290,   138,   139,   768,   141,
     142,   143,    22,   145,   146,    36,   488,    36,   490,    22,
    1531,   768,   774,    44,   801,    44,   171,  1174,   173,    36,
      22,   808,    22,    33,   481,  1320,  1321,    44,   485,    39,
      51,   801,   489,    12,   491,   492,   493,    22,   808,   496,
      43,  1251,  1468,    12,   801,    37,    38,  1257,   583,   584,
     585,   586,   587,   588,    37,    38,  1186,   844,   129,   130,
    1270,    98,    99,   100,   101,   547,    43,  1197,  1198,   856,
      59,    60,    61,  1594,   844,    43,  1206,   864,   147,   148,
    1210,   563,  1212,  1213,    66,  1215,   196,   197,  1218,  1219,
    1469,  1470,   549,  1488,    51,   552,   215,   216,   217,  1539,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   220,
     221,   222,   569,   295,   296,    51,   598,   323,   324,   241,
     300,   301,   909,   178,   179,   248,   178,   179,   127,   128,
     266,   267,   150,   151,   106,   107,  1229,    93,    94,   223,
     224,    93,    94,   150,   151,   185,   186,    36,  1574,     4,
       5,   523,   524,  1593,  1675,   530,   531,  1678,   532,   533,
    1586,   851,    19,    20,   541,   542,  1735,  1736,   581,   582,
     163,   653,   202,   164,   175,   165,    24,    24,   176,   167,
      58,   193,   187,   873,    56,    43,   164,   163,    24,   671,
     647,    16,    17,    18,    19,    20,    21,  1718,    43,    43,
     657,   658,    27,    43,    43,  1645,    43,    12,    43,    43,
      43,   693,    43,    43,    32,    40,    44,    44,    44,    51,
      44,    36,    51,    36,  1603,   159,   166,    12,  1015,  1016,
      51,  1526,  1527,   144,    51,   145,   166,   694,   159,   159,
    1027,  1714,   159,  1030,   197,    59,   197,    70,    44,    36,
     159,    44,  1647,    44,    44,    43,   112,  1778,    44,   113,
    1030,    44,    44,    44,  1704,    44,    44,  1477,    13,   232,
    1710,  1481,    66,  1030,    51,   159,    13,  1703,   232,   144,
     132,  1721,  1722,  1723,  1724,    53,   743,   744,   745,   132,
     115,   116,   117,   118,   119,   120,    43,   180,   180,    25,
     142,  1741,  1742,    44,    44,    36,    13,    13,   157,   121,
     161,    12,    36,    13,    43,  1755,   138,   137,    43,   250,
      90,   140,    97,  1110,   251,    91,   206,    26,  1115,   237,
     237,  1118,   254,   266,   187,  1630,   310,  1547,   287,   312,
    1780,   254,    44,   310,   310,   161,    44,    12,   159,  1136,
    1137,   201,   177,    12,    12,  1142,   232,   232,    44,   220,
    1147,   104,    40,    91,  1151,   149,   140,  1137,   825,   103,
     132,   296,  1142,   263,   856,   129,   295,  1147,   278,    40,
    1137,  1151,   864,   254,   312,  1142,   159,  1174,    44,  1546,
    1147,    46,    46,    12,  1151,   162,   853,   854,   855,    44,
    1136,   140,   859,   860,  1174,    43,   152,   103,    52,   132,
     220,    40,   207,   870,  1201,   180,   149,  1174,    36,   180,
     132,   159,    12,    22,   121,   129,   198,   909,    43,    43,
      15,  1201,   162,   242,    36,    40,   180,   159,   895,   132,
     220,    36,    40,    24,  1201,   132,   254,   254,    40,   138,
      13,   159,  1239,  1231,    36,  1548,  1243,  1244,  1148,    29,
      44,   213,  1152,   213,  1251,    44,   242,   945,   121,  1171,
    1257,  1258,     3,  1243,  1244,  1262,   959,  1239,  1192,  1564,
    1181,   751,   756,  1270,   399,  1640,  1243,  1244,  1258,  1179,
     848,   757,  1262,   208,  1184,  1185,   654,   651,  1075,  1189,
     870,  1258,  1052,   107,   656,  1262,  1196,   552,   314,   505,
    1289,   506,  1202,  1248,  1204,   895,  1471,  1207,  1305,   132,
     728,  1211,   436,   429,   429,   475,  1216,   844,  1090,  1092,
    1297,   874,  1504,  1223,  1016,  1108,  1626,  1227,  1279,  1621,
     646,  1318,  1293,  1539,  1644,  1027,  1489,  1027,   856,   860,
     772,  1022,   579,   594,   580,    -1,    -1,    -1,    -1,    -1,
    1347,    -1,    -1,  1020,    -1,  1352,  1353,    -1,    -1,    -1,
    1357,    -1,    -1,    -1,    -1,  1362,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1371,    -1,  1679,    -1,  1045,    -1,
      -1,  1048,  1049,  1050,    -1,    -1,    15,    -1,  1055,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1066,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1075,    -1,
      -1,    -1,    -1,    -1,    43,    -1,  1362,    -1,  1110,    -1,
      -1,    -1,    51,  1115,    -1,  1371,  1118,    -1,    -1,    -1,
      -1,    -1,    -1,   254,  1101,  1102,   257,   258,   259,   260,
      -1,   262,    -1,    -1,   265,    -1,    -1,   268,   269,   270,
     271,   272,   273,   274,   275,   276,    -1,    -1,   279,   280,
     281,    -1,  1459,  1460,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1468,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1477,    -1,    -1,    -1,  1481,    -1,    -1,    -1,  1468,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
      -1,  1468,   323,   324,    -1,    -1,  1406,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,   258,   259,
     260,    -1,   262,    -1,    -1,   265,    -1,    -1,   268,   269,
     270,   271,   272,   273,   274,   275,   276,    -1,    -1,   279,
     280,   281,    -1,    -1,    -1,    -1,    -1,    -1,  1545,  1546,
    1547,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1251,
      -1,    -1,    -1,  1560,  1561,  1257,  1546,  1564,    -1,  1566,
    1567,  1568,  1569,    -1,    -1,    -1,    -1,  1574,  1270,  1546,
     320,    -1,    -1,   323,   324,    -1,    -1,    -1,    -1,  1586,
      -1,    -1,    -1,    -1,  1574,    -1,  1263,    -1,    -1,  1545,
    1597,  1268,  1599,    -1,    -1,    -1,  1586,  1574,    -1,    -1,
      -1,    -1,    -1,  1305,  1560,  1561,    -1,    -1,  1564,  1586,
    1566,  1567,  1568,  1569,    -1,   254,    -1,  1599,   257,   258,
     259,   260,    -1,   262,   263,    -1,   265,    -1,    -1,   268,
     269,   270,   271,   272,   273,   274,   275,   276,    -1,    -1,
     279,   280,   281,    -1,    -1,  1347,    -1,   286,   287,    -1,
      -1,  1353,    -1,    -1,    -1,  1357,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1575,    -1,    -1,    -1,   308,
     309,    -1,   311,    -1,    -1,    -1,    -1,  1587,    -1,    -1,
      -1,   320,    -1,    -1,   323,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1703,    -1,  1705,    -1,
      -1,    -1,    -1,   254,    -1,    -1,   257,   258,   259,   260,
      -1,   262,    -1,  1703,   265,    -1,    -1,   268,   269,   270,
     271,   272,   273,   274,   275,   276,  1703,    -1,   279,   280,
     281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1705,
      -1,    -1,    -1,    -1,    -1,    -1,  1666,  1459,  1460,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
      -1,    -1,   323,   324,    -1,  1477,    -1,    -1,    -1,  1481,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1478,    -1,    -1,    -1,  1482,    -1,    -1,  1485,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,  1547,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
      -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,    -1,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,    -1,   194,   195,   196,    -1,   198,   199,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   257,   258,   259,   260,    -1,   262,    -1,    -1,
     265,  1688,  1689,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    -1,    -1,   279,   280,   281,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    44,    -1,    -1,    -1,   320,  1743,    -1,   323,   324,
      -1,    -1,    -1,   325,    57,   327,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,    -1,    -1,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,   194,   195,   196,    -1,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    -1,    -1,    -1,   127,   128,
     129,    -1,    -1,   132,   133,   134,   135,    -1,    -1,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,    -1,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,   194,   195,   196,    -1,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,    -1,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,    -1,
      -1,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,   194,   195,   196,
      -1,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,    -1,    -1,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,   194,   195,   196,    -1,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    -1,    -1,    -1,   127,   128,
     129,    -1,    -1,   132,   133,   134,   135,    -1,    -1,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,    -1,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,   194,   195,   196,    -1,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,    -1,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,    -1,
      -1,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,   194,   195,   196,
      -1,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,    -1,    -1,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,   194,   195,   196,    -1,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
      -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,    -1,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
     194,   195,   196,    -1,    -1,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,    -1,
     127,   128,   129,    -1,    -1,   132,   133,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,    -1,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,   194,   195,   196,
      -1,    -1,   199,    -1,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,
      -1,   127,   128,   129,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,    -1,   194,   195,
     196,    -1,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,   194,   195,   196,    -1,   198,   199,    -1,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    -1,    -1,    -1,   127,   128,
     129,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,    -1,
     159,    -1,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,    -1,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,   194,   195,   196,    -1,    -1,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    -1,   254,    -1,    -1,   257,
     258,   259,   260,    -1,   262,    -1,    -1,   265,    -1,    -1,
     268,   269,   270,   271,   272,   273,   274,   275,   276,    -1,
      -1,   279,   280,   281,   254,    -1,    -1,   257,   258,   259,
     260,    -1,   262,    -1,    -1,   265,    -1,    -1,   268,   269,
     270,   271,   272,   273,   274,   275,   276,    -1,    -1,   279,
     280,   281,    -1,   254,    -1,    -1,   257,   258,   259,   260,
      -1,   262,   320,    -1,   265,   323,   324,   268,   269,   270,
     271,   272,   273,   274,   275,   276,    -1,    -1,   279,   280,
     281,   254,    -1,    -1,   257,   258,   259,   260,    -1,   262,
     320,    -1,   265,   323,   324,   268,   269,   270,   271,   272,
     273,   274,   275,   276,    -1,    -1,   279,   280,   281,    -1,
     254,    -1,    -1,   257,   258,   259,   260,    -1,   262,   320,
      -1,   265,   323,   324,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,    -1,   279,   280,   281,   254,    -1,
      -1,   257,   258,   259,   260,    -1,   262,   320,    -1,   265,
     323,   324,   268,   269,   270,   271,   272,   273,   274,   275,
     276,    -1,    -1,   279,   280,   281,    -1,   254,    -1,    -1,
     257,   258,   259,   260,    -1,   262,   320,    -1,   265,   323,
     324,   268,   269,   270,   271,   272,   273,   274,   275,   276,
      -1,    -1,   279,   280,   281,   254,    -1,    -1,   257,   258,
     259,   260,    -1,   262,   320,    -1,   265,   323,   324,   268,
     269,   270,   271,   272,   273,   274,   275,   276,    -1,    -1,
     279,   280,   281,    -1,   254,    -1,    -1,   257,   258,   259,
     260,    -1,   262,   320,    -1,   265,   323,   324,   268,   269,
     270,   271,   272,   273,   274,   275,   276,    -1,    -1,   279,
     280,   281,   254,    -1,    -1,   257,   258,   259,   260,    -1,
     262,   320,    -1,   265,   323,   324,   268,   269,   270,   271,
     272,   273,   274,   275,   276,    -1,    -1,   279,   280,   281,
      -1,   254,    -1,    -1,   257,   258,   259,   260,    -1,   262,
     320,    -1,   265,   323,   324,   268,   269,   270,   271,   272,
     273,   274,   275,   276,    -1,    -1,   279,   280,   281,   254,
      -1,    -1,   257,   258,   259,   260,    -1,   262,   320,    -1,
     265,   323,   324,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    -1,    -1,   279,   280,   281,    -1,   254,    -1,
      -1,   257,   258,   259,   260,    -1,   262,   320,    -1,   265,
     323,   324,   268,   269,   270,   271,   272,   273,   274,   275,
     276,    -1,    -1,   279,   280,   281,   254,    -1,    -1,   257,
     258,   259,   260,    -1,   262,   320,    -1,   265,   323,   324,
     268,   269,   270,   271,   272,   273,   274,   275,   276,    -1,
      -1,   279,   280,   281,    -1,   254,    -1,    -1,   257,   258,
     259,   260,    -1,   262,   320,    -1,   265,   323,   324,   268,
     269,   270,   271,   272,   273,   274,   275,   276,    -1,    -1,
     279,   280,   281,   254,    -1,    -1,   257,   258,   259,   260,
      -1,   262,   320,    -1,   265,   323,   324,   268,   269,   270,
     271,   272,   273,   274,   275,   276,    -1,    -1,   279,   280,
     281,    -1,   254,    -1,    -1,   257,   258,   259,   260,    -1,
     262,   320,    -1,   265,   323,   324,   268,   269,   270,   271,
     272,   273,   274,   275,   276,    -1,    -1,   279,   280,   281,
     254,    -1,    -1,   257,   258,   259,   260,    -1,   262,   320,
      -1,   265,   323,   324,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,    -1,   279,   280,   281,    -1,   254,
      -1,    -1,   257,   258,   259,   260,    -1,   262,   320,    -1,
     265,   323,   324,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    -1,    -1,   279,   280,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,   323,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,   323,   324
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     332,    12,    14,    23,    27,    30,    31,    33,    35,    37,
      38,    39,    41,    42,    43,    57,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   115,   116,
     117,   118,   119,   120,   121,   127,   128,   129,   132,   133,
     134,   135,   138,   139,   140,   141,   142,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   194,   195,   196,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   471,   472,   473,   474,   475,   476,
     478,   483,   494,   497,   503,   504,   505,   506,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   547,   548,   549,   550,   551,
     554,   555,   556,   567,   569,   571,   572,   573,   576,   578,
     579,   580,   581,   591,   592,   593,   594,   595,   596,   597,
     598,   600,   602,   604,   645,   646,   647,   648,   649,   650,
     651,   654,   655,   656,   657,   659,   666,   667,   671,   672,
     673,   674,   685,   688,   691,   710,   711,   333,   255,   320,
     343,   344,   368,   333,   333,   336,   457,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,   110,   127,
     128,   139,   141,   153,   154,   156,   160,   174,   180,   198,
     225,   228,   234,   236,   243,   244,   246,   247,   693,   695,
     710,   711,    37,    38,    43,    57,    59,    60,    61,   132,
     160,   694,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   711,    43,    62,    63,    67,    70,    71,   181,   198,
     243,   244,   587,   589,   590,   591,   659,   675,   676,   677,
     678,   680,   681,   684,     0,   546,   710,   538,   129,   130,
     557,   136,   114,   568,   527,   112,   559,   518,   518,    44,
     472,   710,    22,    43,    51,   131,   577,    43,    51,    43,
      43,    43,    43,    51,   131,   582,    43,    43,    43,    51,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    51,    12,   652,   653,    51,    51,    12,   479,   480,
      12,   201,   484,   485,    12,   495,   496,   495,    43,    43,
      51,    75,    76,    22,   582,    43,    51,   131,   574,    43,
     463,    66,   111,    66,   233,    66,    66,   233,    51,    51,
     241,   248,    36,   138,   139,   141,   142,   143,   145,   146,
     476,   477,   486,   487,   488,   163,   164,    16,    17,    18,
      19,    20,    21,    27,    40,   115,   116,   117,   118,   119,
     120,   177,   202,    37,    38,   168,    14,    77,   169,   170,
      15,   171,   172,   173,   165,   176,   167,   175,    51,   523,
     527,    33,    39,    24,    24,   538,   538,    23,    24,    43,
     473,   473,    43,    54,   193,   429,   430,   345,   369,   187,
     334,   337,   430,    55,   238,   458,   459,   463,   466,    58,
     697,    56,   704,   704,   698,   707,   708,   710,    43,   163,
     164,    37,    38,   115,   116,   117,   118,   119,   120,    14,
      77,   169,   170,    24,    43,   589,    43,    43,    43,    43,
      14,    26,    37,   588,   200,   466,   558,   112,   113,   570,
      32,   710,    44,    14,    44,   599,   606,   659,   472,    51,
     575,    44,   472,    44,    69,   198,   602,   604,    44,    44,
      44,   132,   658,   710,   472,    51,   583,   601,   606,   605,
     607,   659,    44,   472,   472,   546,    36,   226,   472,   472,
     546,    36,   546,    12,    36,   546,    36,   155,   155,   472,
     472,   472,    51,    51,   575,    14,    44,   603,   607,   472,
     575,    12,    44,   468,   469,   159,   586,   473,   166,   473,
      52,   686,   687,   710,    52,   473,   689,   690,   710,   473,
     473,   473,   473,    12,   144,   145,   505,   506,   508,   508,
     508,   508,   508,   508,   507,   508,   508,   508,   508,   508,
     508,   508,   508,    70,   511,   511,   510,   512,   512,   512,
     512,   513,   513,   514,   514,   166,   159,   159,   159,    52,
     472,   528,   528,   472,   472,   710,   472,    26,    44,   473,
     552,   553,   159,   229,   230,   237,    44,   552,    59,   183,
     194,   431,   432,   197,   433,   434,   435,   436,   285,   294,
     346,   321,   322,   371,   457,   197,   338,   710,   159,   464,
     473,   709,   698,    44,    36,   698,   700,   701,   703,   703,
     702,   702,   702,   702,   702,   702,   704,   704,   704,   704,
     698,   707,    44,    44,    44,    44,   682,   683,   710,    44,
     590,    43,   112,   559,   113,   112,   137,   524,    36,    44,
      52,    52,   472,    52,    44,    44,    44,    44,    52,    52,
     472,    44,    44,    52,    52,    13,   653,   473,    52,    52,
     586,   480,   586,   546,   485,   586,   496,   473,   473,    44,
      44,    52,   472,   472,    36,    44,    52,   546,    36,    44,
     587,    51,   470,   232,    66,   159,    36,    52,   586,    13,
      36,    52,   232,   232,   249,   546,   473,   489,   490,   491,
     144,   508,    43,    51,   252,   522,   543,   610,   613,   614,
     615,   616,   617,   618,   619,   620,   587,   587,   584,   590,
     584,    52,    25,    25,    25,    36,    44,   227,   235,   473,
     473,   473,    44,   132,   132,    53,   432,   439,   439,   180,
     436,   187,   195,   437,   438,   440,   441,   442,   443,   444,
     445,   446,   447,   450,   451,   452,   455,   456,   460,   462,
     471,   644,   660,   692,   254,   256,   263,   264,   269,   282,
     283,   284,   347,   348,   351,   352,   356,   357,   358,   359,
     360,   361,   364,   365,   366,   367,   370,   254,   257,   258,
     259,   260,   262,   265,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   279,   280,   281,   323,   324,   368,   372,
     373,   374,   375,   376,   377,   378,   381,   382,   386,   387,
     388,   389,   390,   395,   396,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   199,   180,   339,    43,   587,
     142,   696,   696,   698,    44,    25,    44,    36,    44,   586,
      36,    14,    44,   587,   679,   129,   130,    28,    45,   137,
     608,   659,    52,    52,   473,   138,   121,   481,    13,    13,
     140,   157,   498,   500,   501,   161,    52,    52,   608,   586,
     469,   472,   473,   473,   473,   687,    13,   473,   690,    43,
      43,   325,   327,   668,   710,    36,   147,   148,   492,   489,
     610,   472,   617,    51,   215,   216,   217,   621,    97,   643,
     250,   612,   251,    90,    91,   627,   206,   622,    26,   585,
     553,   237,   237,   439,   658,   187,   195,    72,    73,    74,
     180,   188,   189,   190,   191,   192,   231,   241,   253,   457,
     196,   197,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   295,   296,   286,   287,   308,   309,   311,   353,
     287,   299,   309,   353,   287,   297,   298,   309,   310,   371,
     287,   309,   310,   371,   254,   285,   287,   288,   289,   290,
     291,   292,   293,   302,   303,   304,   305,   306,   307,   317,
     318,   319,   254,   287,   309,   254,   122,   470,   376,   310,
     266,   391,   392,   393,   312,   310,   313,   371,   286,   310,
     380,   287,   383,   254,   371,   277,   310,   315,   316,   397,
     287,   309,   310,   371,   310,   371,   287,   310,   371,   371,
     287,   310,   313,   314,   371,   287,   310,   371,   287,   314,
     371,   254,   300,   310,   300,   301,   371,   310,   371,   711,
     658,   187,   340,   341,   342,   467,   543,   473,   697,   161,
     683,   587,    44,   159,    36,    44,   559,   559,   566,    44,
     473,    12,   201,   482,   473,   473,   473,    12,   502,   190,
     499,   500,    15,   138,   473,    26,    44,    52,   232,   473,
      12,   669,   670,   669,   232,   490,   149,   493,    44,    52,
      52,   610,   104,   220,   103,   614,   102,   121,   127,   203,
     204,   205,   208,   209,   611,   624,   615,   140,    92,    95,
      98,    99,   100,   101,   158,   192,   210,   211,   214,   628,
     629,   630,   631,   632,   635,   640,   641,   642,    91,   126,
     218,   219,   623,   473,   473,    40,   178,   179,   627,   132,
     609,   658,   178,   179,   127,   128,   145,   152,   198,   199,
     178,   184,   448,   710,    75,    76,   109,   245,   249,   663,
     710,   133,   199,   180,   190,   454,   609,   180,   609,   296,
     295,   349,    23,    33,    39,    62,    78,   239,   240,   419,
     420,   421,   422,   425,   426,   427,   538,   587,    59,    60,
      61,   350,   263,   354,   355,   371,   587,   371,   587,   472,
     254,   587,   472,   254,    70,   129,   328,   329,   330,   362,
     129,   363,   363,   589,   254,   472,   312,   267,   392,   394,
     371,   472,   472,   370,   254,   129,   325,   327,   379,   472,
     254,   261,   384,   385,   254,   384,   254,   371,   472,   370,
     370,   278,   398,   587,   472,   254,   472,   254,   370,   472,
     254,   254,   370,   472,   370,   370,   254,   370,   472,   254,
     370,   370,   254,   472,   254,   472,   254,   463,    40,   180,
     192,   457,    36,    44,   698,    44,   587,   587,   159,    46,
      46,    34,   124,   125,   470,   555,   546,    12,   140,   546,
     587,    12,   138,   587,   473,   162,    44,   473,   546,    36,
      44,    44,    43,   150,   151,   152,   621,    52,   512,   103,
     106,   107,   509,   510,   623,   223,   224,   626,   626,   616,
      98,    99,   100,   101,    93,    94,    43,   121,   190,   634,
     220,    93,    94,   710,   657,   628,   108,   151,   510,   510,
     207,   609,    40,   149,   609,   180,   180,    36,   132,   710,
     129,   325,   326,   664,   665,   242,   159,    12,   711,   658,
     198,   609,   121,   453,   658,   453,   129,   325,   326,   538,
      22,    22,    43,    43,    15,   426,    33,    39,    33,    39,
     428,   287,   297,   298,   309,   310,   371,   254,   254,   129,
     472,   371,   254,   254,   287,   297,   309,   310,   371,   254,
     371,   254,   371,   464,   609,   658,   710,   199,   543,   162,
     587,   559,   559,   557,   546,   473,   159,   546,   473,   473,
     586,   670,   669,   609,   220,   221,   222,   625,   625,   220,
     190,   634,   609,    43,   121,   190,   637,   132,   510,   510,
     168,   439,   609,   150,   151,   609,   609,   185,   186,   449,
      43,   470,   662,   663,    36,   419,   589,   546,   463,    40,
     180,   453,   609,    36,    40,   538,   538,   423,   545,   657,
     657,   420,   426,   426,   426,   426,    24,   587,   472,   254,
     254,   587,   472,   254,   254,   470,   439,    40,   132,   711,
     698,    47,    49,   560,    47,    49,   561,   559,   138,    13,
      44,   633,   633,   212,   623,   638,   657,   609,   636,   636,
     510,    44,   468,   159,   661,   242,   665,   470,   662,   586,
     464,   609,   609,    44,    36,   472,   335,   439,   609,   439,
     463,   562,   564,   563,   565,    29,   473,   473,    36,    44,
      44,   657,   213,    36,    44,   171,   173,   639,    44,   587,
     470,   419,   661,    13,   182,   461,   182,   465,   470,   453,
     424,   543,   545,    25,   439,   464,    48,   122,   470,    50,
     123,   470,    48,   122,   470,    50,   123,   470,   634,   623,
     657,   637,   637,   470,   662,   470,   473,    44,   470,   213,
     661,   439,   470
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
#line 812 "../src/parser/XQParser.y"
    {
    QP->_seqType = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 819 "../src/parser/XQParser.y"
    {
    BuiltInModules::addNamespaces(CONTEXT);
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 825 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 836 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 845 "../src/parser/XQParser.y"
    {
    printf("  { DelayedModule::Decl::NONE, 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_declarations };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 856 "../src/parser/XQParser.y"
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

  case 18:

/* Line 1455 of yacc.c  */
#line 895 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::Decl %s_declarations[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 905 "../src/parser/XQParser.y"
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

  case 23:

/* Line 1455 of yacc.c  */
#line 921 "../src/parser/XQParser.y"
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

  case 24:

/* Line 1455 of yacc.c  */
#line 948 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
    DM_outputDecl("NAMESPACE", UTF8((yyvsp[(3) - (6)].str)), 0, false, (yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column,
                  (yyvsp[(5) - (6)].str), XPath2Utils::intStrlen((yyvsp[(5) - (6)].str)));
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 961 "../src/parser/XQParser.y"
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

  case 26:

/* Line 1455 of yacc.c  */
#line 990 "../src/parser/XQParser.y"
    {
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 993 "../src/parser/XQParser.y"
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

  case 29:

/* Line 1455 of yacc.c  */
#line 1017 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 1021 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1040 "../src/parser/XQParser.y"
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

  case 40:

/* Line 1455 of yacc.c  */
#line 1059 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1064 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1069 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1076 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1081 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1086 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1094 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1098 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1104 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1109 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1119 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->getSignature()->argSpecs = (yyvsp[(2) - (4)].argSpecs);
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1132 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1137 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1144 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1149 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1157 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1161 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1169 "../src/parser/XQParser.y"
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

  case 61:

/* Line 1455 of yacc.c  */
#line 1196 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1200 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1207 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1213 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1218 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1223 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1232 "../src/parser/XQParser.y"
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

  case 68:

/* Line 1455 of yacc.c  */
#line 1256 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1260 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1267 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1272 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1277 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1282 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1293 "../src/parser/XQParser.y"
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

  case 75:

/* Line 1455 of yacc.c  */
#line 1311 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1315 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1322 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1327 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1335 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1360 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1363 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1366 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1369 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1372 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1375 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1378 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1381 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1384 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1387 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1390 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1393 "../src/parser/XQParser.y"
    {
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1396 "../src/parser/XQParser.y"
    {
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1399 "../src/parser/XQParser.y"
    {
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1402 "../src/parser/XQParser.y"
    {
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1405 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1408 "../src/parser/XQParser.y"
    {
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1411 "../src/parser/XQParser.y"
    {
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1421 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1433 "../src/parser/XQParser.y"
    {
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1436 "../src/parser/XQParser.y"
    {
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1442 "../src/parser/XQParser.y"
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

  case 106:

/* Line 1455 of yacc.c  */
#line 1456 "../src/parser/XQParser.y"
    {
    (yyval.alias) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTypeAlias(0, 0, MEMMGR));
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1460 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].alias)->setURI(uri);
    (yyvsp[(1) - (2)].alias)->setName(name);
    (yyval.alias) = (yyvsp[(1) - (2)].alias);
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1467 "../src/parser/XQParser.y"
    {
    (yyval.alias) = (yyvsp[(1) - (3)].alias);
    (yyval.alias)->setType((yyvsp[(3) - (3)].itemType));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1477 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1482 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1487 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1495 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1503 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1514 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1524 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1528 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1535 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1544 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1548 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1553 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1561 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1565 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1570 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1575 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1604 "../src/parser/XQParser.y"
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

  case 145:

/* Line 1455 of yacc.c  */
#line 1622 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1626 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1640 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1649 "../src/parser/XQParser.y"
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

  case 152:

/* Line 1455 of yacc.c  */
#line 1669 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1673 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1678 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1686 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1691 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1695 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1702 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1706 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1714 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1727 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1731 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1741 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1745 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1753 "../src/parser/XQParser.y"
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

  case 166:

/* Line 1455 of yacc.c  */
#line 1771 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1775 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1782 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1787 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1792 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1800 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1806 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1814 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1822 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1829 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1843 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1847 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1861 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1870 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1877 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1881 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1888 "../src/parser/XQParser.y"
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

  case 183:

/* Line 1455 of yacc.c  */
#line 1923 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1927 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1932 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1938 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1947 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1951 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1958 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1962 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1969 "../src/parser/XQParser.y"
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

  case 192:

/* Line 1455 of yacc.c  */
#line 1987 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), (XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1991 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1998 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2003 "../src/parser/XQParser.y"
    {
    const_cast<ArgumentSpec*>((yyvsp[(1) - (3)].letTuple)->getVar())->setType((yyvsp[(3) - (3)].sequenceType));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2011 "../src/parser/XQParser.y"
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

  case 197:

/* Line 1455 of yacc.c  */
#line 2029 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2033 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2041 "../src/parser/XQParser.y"
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

  case 200:

/* Line 1455 of yacc.c  */
#line 2063 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2067 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2074 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2082 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2091 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2099 "../src/parser/XQParser.y"
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

  case 206:

/* Line 1455 of yacc.c  */
#line 2137 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2141 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2148 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2155 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2164 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2173 "../src/parser/XQParser.y"
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

  case 212:

/* Line 1455 of yacc.c  */
#line 2200 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2204 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2211 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2223 "../src/parser/XQParser.y"
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

  case 216:

/* Line 1455 of yacc.c  */
#line 2250 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2254 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2261 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2271 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2283 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2287 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2292 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2301 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2314 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2318 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2323 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2332 "../src/parser/XQParser.y"
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

  case 228:

/* Line 1455 of yacc.c  */
#line 2346 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2350 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2363 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2368 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2380 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2384 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::SELF, nt, MEMMGR));
  }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2392 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2405 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, nt, MEMMGR));
  }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 2413 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 2426 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2433 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2472 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2476 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2480 "../src/parser/XQParser.y"
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

  case 246:

/* Line 1455 of yacc.c  */
#line 2498 "../src/parser/XQParser.y"
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

  case 247:

/* Line 1455 of yacc.c  */
#line 2516 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2526 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2540 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 2548 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2554 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 2560 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2566 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2577 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2581 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 2609 "../src/parser/XQParser.y"
    {
    // TBD Set the language correctly on the context - jpcs
    if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_0)) {
      QP->_lexer->setVersion11(false);
      QP->_query->setVersion11(false);
    }
    else if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_1) || XPath2Utils::equals((yyvsp[(2) - (2)].str),sz3_0)) {
      if(!QP->_lexer->isVersion11()) {
        yyerror((yylsp[(1) - (2)]), "This XQuery processor is not configured to support XQuery 1.1 [err:XQST0031]");
      }
      QP->_lexer->setVersion11(true);
      QP->_query->setVersion11(true);
    }
    else
      yyerror((yylsp[(1) - (2)]), "This XQuery processor only supports version 1.0 and 1.1 [err:XQST0031]");
  }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 2629 "../src/parser/XQParser.y"
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

  case 266:

/* Line 1455 of yacc.c  */
#line 2653 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2667 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2671 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2675 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2679 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2683 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2687 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2693 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2699 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2703 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2707 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2739 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2747 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2752 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2761 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2766 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2775 "../src/parser/XQParser.y"
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

  case 295:

/* Line 1455 of yacc.c  */
#line 2856 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2864 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2869 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2878 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2883 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2892 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2902 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2906 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2914 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2918 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2926 "../src/parser/XQParser.y"
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

  case 306:

/* Line 1455 of yacc.c  */
#line 2942 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2951 "../src/parser/XQParser.y"
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

  case 308:

/* Line 1455 of yacc.c  */
#line 2963 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2971 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2975 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2980 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2989 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2993 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 3001 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), &loc);
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 3011 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 3023 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 3028 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 3037 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 3041 "../src/parser/XQParser.y"
    {
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
    (yyval.signature)->annotations.push_back((yyvsp[(2) - (2)].annotation));
  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3052 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Annotation(0, XQFunction::XMLChFunctionURI, (yyvsp[(1) - (1)].str), trueExpr, MEMMGR));
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3064 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQGlobalVariable((yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode), MEMMGR)));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 3071 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 3075 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3083 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3092 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 3096 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 3103 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 3107 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 3116 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 3124 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) Annotation((yyvsp[(2) - (2)].str), trueExpr));
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 3131 "../src/parser/XQParser.y"
    {
    (yyval.annotation) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) Annotation((yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].parenExpr)));
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 3138 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.parenExpr)->addItem((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 3143 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (3)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(3) - (3)].astNode));
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 3152 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 3157 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 3167 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 3175 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 3183 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 3196 "../src/parser/XQParser.y"
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

  case 356:

/* Line 1455 of yacc.c  */
#line 3234 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tuples = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Check the correct clause order for XQuery 1.0
      // FLWORExpr ::= (ForClause |  LetClause)+ WhereClause? OrderByClause? "return" ExprSingle
      if(!QP->_lexer->isVersion11()) {
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

  case 358:

/* Line 1455 of yacc.c  */
#line 3279 "../src/parser/XQParser.y"
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

  case 359:

/* Line 1455 of yacc.c  */
#line 3292 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3307 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3314 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3322 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3333 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 3337 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3347 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3351 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3361 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3368 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3376 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3380 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, X("0"), MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3389 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3397 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3405 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3410 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3418 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3428 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3435 "../src/parser/XQParser.y"
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

  case 386:

/* Line 1455 of yacc.c  */
#line 3450 "../src/parser/XQParser.y"
    {
    SequenceType *zero_or_one = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType((ItemType*)&ItemType::ITEM, SequenceType::QUESTION_MARK));

    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAtomize((yyval.astNode), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPromoteUntyped((yyval.astNode), (ItemType*)&ItemType::STRING, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs((yyval.astNode), zero_or_one, MEMMGR));
  }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3464 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3468 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 3472 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 3479 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 3488 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3492 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 3501 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3509 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3520 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3528 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3539 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3546 "../src/parser/XQParser.y"
    {
    XQTypeswitch::Cases::iterator it = (yyvsp[(2) - (2)].caseClauses)->begin();
    for(; it != (yyvsp[(2) - (2)].caseClauses)->end(); ++it) {
      (yyvsp[(1) - (2)].caseClauses)->push_back(*it);
    }

    (yyval.caseClauses) = (yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 3559 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3563 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3571 "../src/parser/XQParser.y"
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

  case 404:

/* Line 1455 of yacc.c  */
#line 3589 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3594 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3603 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3607 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3615 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3623 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OR) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3637 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::AND) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3656 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3660 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3663 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3664 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3668 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3672 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3676 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3680 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3684 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3688 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3692 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3696 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3700 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3704 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3708 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3712 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3721 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3725 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3734 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3746 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3750 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3759 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3763 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3767 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3771 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3780 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3784 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3793 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3797 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3806 "../src/parser/XQParser.y"
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

  case 451:

/* Line 1455 of yacc.c  */
#line 3828 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3838 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3847 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3856 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3862 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3883 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3887 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3891 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3899 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3906 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3919 "../src/parser/XQParser.y"
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

  case 472:

/* Line 1455 of yacc.c  */
#line 3940 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3949 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3955 "../src/parser/XQParser.y"
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

  case 477:

/* Line 1455 of yacc.c  */
#line 3980 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT))));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 3994 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 4000 "../src/parser/XQParser.y"
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

  case 484:

/* Line 1455 of yacc.c  */
#line 4022 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 4032 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 4039 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 4048 "../src/parser/XQParser.y"
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

  case 491:

/* Line 1455 of yacc.c  */
#line 4071 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::CHILD;
  }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 4075 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT;
  }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 4079 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ATTRIBUTE;
  }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 4083 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::SELF;
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 4087 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT_OR_SELF;
  }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 4091 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING_SIBLING;
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 4095 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING;
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 4099 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::NAMESPACE;
  }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 4107 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 4115 "../src/parser/XQParser.y"
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

  case 501:

/* Line 1455 of yacc.c  */
#line 4132 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 4149 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PARENT;
  }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 4153 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR;
  }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 4157 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING_SIBLING;
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 4161 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING;
  }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 4165 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR_OR_SELF;
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 4173 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, step, MEMMGR));
  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 4185 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 4195 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 4207 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 4214 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 4221 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 4234 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4263 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4274 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4278 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4286 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4294 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4304 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4314 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4318 "../src/parser/XQParser.y"
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

  case 542:

/* Line 1455 of yacc.c  */
#line 4341 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4346 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 4357 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 4366 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 4370 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 4383 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4389 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4402 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 4406 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4415 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4431 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4435 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4442 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4446 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4456 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4460 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4465 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4473 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4477 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4481 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4492 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4496 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4501 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4509 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4513 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4517 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4532 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4536 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4541 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4546 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4551 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
    }
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4562 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4571 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4580 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(WRAP((yylsp[(2) - (3)]), new (MEMMGR)
          XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR)), value, MEMMGR));
  }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 4591 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4616 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4624 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4632 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4636 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4644 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4648 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4657 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4664 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4668 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4678 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4686 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4694 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4702 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4709 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4717 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4724 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4728 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4736 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4743 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4747 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4755 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(WRAP((yyloc), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR));
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4759 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4769 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4773 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4782 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4784 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4786 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4788 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4794 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING));
  }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4806 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName)));
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4836 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NODE));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4844 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4848 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4855 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_SCHEMA_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4866 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TEXT));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4874 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_COMMENT));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4882 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NAMESPACE));
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4891 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_PI));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4895 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4899 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4907 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4911 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4915 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4924 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4932 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4945 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT));
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4949 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4953 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4957 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName)));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4967 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4975 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4995 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 5007 "../src/parser/XQParser.y"
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

  case 668:

/* Line 1455 of yacc.c  */
#line 5022 "../src/parser/XQParser.y"
    {
}
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 5025 "../src/parser/XQParser.y"
    {
}
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 5031 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 5035 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 5045 "../src/parser/XQParser.y"
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

  case 674:

/* Line 1455 of yacc.c  */
#line 5062 "../src/parser/XQParser.y"
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

  case 676:

/* Line 1455 of yacc.c  */
#line 5078 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 5088 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 5098 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 5107 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 5112 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 5122 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 5126 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 5134 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 5139 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 5148 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 5152 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 5156 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5160 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5164 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5168 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5178 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5189 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5195 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5201 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5207 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5222 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5226 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5230 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5234 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5238 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5242 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5246 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 5250 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 5258 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 5262 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 5266 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 5274 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 5278 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5314 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5318 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5322 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5326 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5335 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5339 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5347 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5351 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5361 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5365 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5369 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5373 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5377 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5384 "../src/parser/XQParser.y"
    {
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5387 "../src/parser/XQParser.y"
    {
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5394 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5398 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5402 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5406 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5416 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5420 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5424 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5431 "../src/parser/XQParser.y"
    {
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5434 "../src/parser/XQParser.y"
    {
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5442 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5446 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5453 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5457 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5465 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5469 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5477 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5485 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5489 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5497 "../src/parser/XQParser.y"
    {
}
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5504 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5512 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5517 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5522 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5534 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5538 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5542 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5546 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5550 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5561 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5572 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5576 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5586 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5594 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5601 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5606 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5614 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5623 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5639 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5648 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5655 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5664 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5676 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5681 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5686 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5692 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5698 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5704 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5713 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5717 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5725 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5729 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5736 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5741 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5749 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5754 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5763 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5767 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5771 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5779 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5783 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5791 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5795 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5799 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5803 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5811 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5815 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5819 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5827 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5832 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5842 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5859 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5867 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5878 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5883 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (4)]));

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

  case 822:

/* Line 1455 of yacc.c  */
#line 5911 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ItemType(ItemType::TEST_FUNCTION));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5923 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature(0, (yyvsp[(6) - (6)].sequenceType), MEMMGR), 0));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5927 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature((yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].sequenceType), MEMMGR), 0));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5934 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(1) - (1)].sequenceType), MEMMGR)));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5939 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(3) - (3)].sequenceType), MEMMGR)));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5948 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5961 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType((yyvsp[(3) - (4)].tupleMembers), 0));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5965 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TUPLE));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5972 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = new (MEMMGR) TupleMembers(true, MEMMGR);
    (yyvsp[(1) - (1)].argSpec)->setIndex(0);
    (yyval.tupleMembers)->add(0, (yyvsp[(1) - (1)].argSpec));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5978 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = (yyvsp[(1) - (3)].tupleMembers);
    (yyvsp[(3) - (3)].argSpec)->setIndex((yyval.tupleMembers)->size());
    (yyval.tupleMembers)->add(0, (yyvsp[(3) - (3)].argSpec));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5988 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) ArgumentSpec((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].sequenceType), MEMMGR));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5996 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(WRAP((yylsp[(3) - (6)]), new (MEMMGR)
          SequenceType((yyvsp[(3) - (6)].itemType), SequenceType::EXACTLY_ONE)), (yyvsp[(5) - (6)].sequenceType), 0));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 6001 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_MAP));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 6011 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tuples = setLastAncestor((yyvsp[(3) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the tuple constructor expression
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTupleConstructor(tuples, MEMMGR));
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 6019 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleConstructor(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)), MEMMGR));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 6027 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 6035 "../src/parser/XQParser.y"
    {
    // TBD LetTuple doesn't give us the correct in-scope vars for the initializer - jpcs
    (yyval.tupleNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) LetTuple(0, (yyvsp[(1) - (4)].str), WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTreatAs((yyvsp[(4) - (4)].astNode), (yyvsp[(2) - (4)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 6044 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 6048 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
        MEMMGR->getPooledString("empty-map"), 0, MEMMGR));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 6056 "../src/parser/XQParser.y"
    {
    XQFunctionCall *func = (XQFunctionCall*)(yyvsp[(1) - (1)].astNode);
    const_cast<VectorOfASTNodes&>(*func->getArguments())[0] =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("empty-map"), 0, MEMMGR));
    (yyval.astNode) = func;
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 6064 "../src/parser/XQParser.y"
    {
    XQFunctionCall *func = (XQFunctionCall*)(yyvsp[(3) - (3)].astNode);
    const_cast<VectorOfASTNodes&>(*func->getArguments())[0] = (yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = func;
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 6074 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back(0);
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
        MEMMGR->getPooledString("map-put"), args, MEMMGR));
  }
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 6088 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleMember((yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyval.astNode), MEMMGR));
  }
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 6096 "../src/parser/XQParser.y"
    {
    QP->_query->addTypeAlias(WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeAlias((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].itemType), MEMMGR)));
  }
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 6106 "../src/parser/XQParser.y"
    {
    QP->_rwrule = (yyvsp[(1) - (1)].rwrule);
  }
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 6113 "../src/parser/XQParser.y"
    {
    QP->_rwpattern = (yyvsp[(1) - (1)].rwpattern);
  }
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 6120 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQRewriteRule((yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].rwpattern), (yyvsp[(4) - (5)].astNode), MEMMGR));
    (yyval.rwrule)->addCase((yyvsp[(5) - (5)].rwcase));
  }
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 6125 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = (yyvsp[(1) - (2)].rwrule);
    (yyval.rwrule)->addCase((yyvsp[(2) - (2)].rwcase));
  }
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 6133 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 6137 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 6144 "../src/parser/XQParser.y"
    {
    (yyval.rwcase) = new (MEMMGR) RewriteCase((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 6151 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) RewritePattern(ASTNode::IF, (yyvsp[(3) - (8)].rwpattern), (yyvsp[(6) - (8)].rwpattern), (yyvsp[(8) - (8)].rwpattern), MEMMGR));
  }
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 6159 "../src/parser/XQParser.y"
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

  case 865:

/* Line 1455 of yacc.c  */
#line 6173 "../src/parser/XQParser.y"
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

  case 867:

/* Line 1455 of yacc.c  */
#line 6187 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 868:

/* Line 1455 of yacc.c  */
#line 6191 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::NOT_EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 869:

/* Line 1455 of yacc.c  */
#line 6195 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 6199 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 871:

/* Line 1455 of yacc.c  */
#line 6203 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 872:

/* Line 1455 of yacc.c  */
#line 6207 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 874:

/* Line 1455 of yacc.c  */
#line 6215 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::PLUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 875:

/* Line 1455 of yacc.c  */
#line 6219 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MINUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 877:

/* Line 1455 of yacc.c  */
#line 6227 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MULTIPLY, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 878:

/* Line 1455 of yacc.c  */
#line 6231 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 879:

/* Line 1455 of yacc.c  */
#line 6235 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::INTEGER_DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 880:

/* Line 1455 of yacc.c  */
#line 6239 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MOD, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 882:

/* Line 1455 of yacc.c  */
#line 6247 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (2)].rwpattern);
  }
    break;

  case 883:

/* Line 1455 of yacc.c  */
#line 6251 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::UNARY_MINUS, (yyvsp[(2) - (2)].rwpattern), MEMMGR));
  }
    break;

  case 885:

/* Line 1455 of yacc.c  */
#line 6259 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) RewritePattern(ASTNode::PREDICATE, (yyvsp[(1) - (4)].rwpattern), (yyvsp[(3) - (4)].rwpattern), MEMMGR));
  }
    break;

  case 887:

/* Line 1455 of yacc.c  */
#line 6267 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(3) - (4)].rwpattern);
    (yyval.rwpattern)->type = ASTNode::FUNCTION;
    (yyval.rwpattern)->value = (yyvsp[(1) - (4)].str);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 888:

/* Line 1455 of yacc.c  */
#line 6275 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (3)].rwpattern);
    LOCATION((yylsp[(1) - (3)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 889:

/* Line 1455 of yacc.c  */
#line 6281 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::EXPR_SUBSTITUTION, (yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 890:

/* Line 1455 of yacc.c  */
#line 6285 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 891:

/* Line 1455 of yacc.c  */
#line 6289 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 892:

/* Line 1455 of yacc.c  */
#line 6293 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 893:

/* Line 1455 of yacc.c  */
#line 6297 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 894:

/* Line 1455 of yacc.c  */
#line 6304 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yyloc), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, MEMMGR));
  }
    break;

  case 896:

/* Line 1455 of yacc.c  */
#line 6312 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, (yyvsp[(1) - (1)].rwpattern), MEMMGR));
  }
    break;

  case 897:

/* Line 1455 of yacc.c  */
#line 6316 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
    (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
  }
    break;

  case 899:

/* Line 1455 of yacc.c  */
#line 6328 "../src/parser/XQParser.y"
    {
    if(!QP->_rewriteRule)
      yyerror((yylsp[(1) - (2)]), "Expression substitutions are only allowed in rewrite rules");
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQExprSubstitution((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;



/* Line 1455 of yacc.c  */
#line 12967 "../src/parser/XQParser.cpp"
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
#line 6365 "../src/parser/XQParser.y"


}  // namespace XQParser


