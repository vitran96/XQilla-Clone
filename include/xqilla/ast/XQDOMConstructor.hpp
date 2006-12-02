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

#if !defined(AFXQ_XQDOMCONSTRUCTOR_H__56E97972_3896_49D3_B055_36CC3E9E550A__INCLUDED_)
#define AFXQ_XQDOMCONSTRUCTOR_H__56E97972_3896_49D3_B055_36CC3E9E550A__INCLUDED_

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/runtime/SingleResult.hpp>

#include <xercesc/framework/XMLBuffer.hpp>

class XQILLA_API XQDOMConstructor : public ASTNodeImpl
{
public:
  XQDOMConstructor(XPath2MemoryManager* mm);

  virtual const XMLCh* getNodeType() const = 0;
  virtual const ASTNode *getName() const { return 0; }
  virtual const VectorOfASTNodes *getAttributes() const { return 0; }
  virtual const VectorOfASTNodes *getChildren() const { return 0; }
  virtual const ASTNode *getValue() const { return 0; }

  virtual void setName(ASTNode *name) {}
  virtual void setValue(ASTNode *value) {}

  static bool getStringValue(const VectorOfASTNodes* m_children, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &value,
                             DynamicContext *context);
  static bool getStringValue(const ASTNode *child, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &value,
                             DynamicContext *context);

protected:
  void unescapeEntities(XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer& buff) const;
};

class XQILLA_API XQContentSequence : public ASTNodeImpl
{
public:
  XQContentSequence(ASTNode *expr, bool copy, XPath2MemoryManager* mm);

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

  const ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

  bool getCopy() const { return copy_; }

private:
  ASTNode *expr_;
  bool copy_;
};

class XQILLA_API XQDirectName : public ASTNodeImpl
{
public:
  XQDirectName(const XMLCh *qname, bool isAttr, XPath2MemoryManager* mm);

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  const XMLCh *getQName() const { return qname_; }

private:
  const XMLCh *qname_;
  bool isAttr_;
};

class XQILLA_API XQNameExpression : public ASTNodeImpl
{
public:
  XQNameExpression(ASTNode *expr, XPath2MemoryManager* mm);

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual Result createResult(DynamicContext* context, int flags=0) const;

  const ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

private:
  class NameExpressionResult : public SingleResult
  {
  public:
    NameExpressionResult(const XQNameExpression *ast)
      : SingleResult(ast), ast_(ast) {}

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const
    { return ""; }

  private:
    const XQNameExpression *ast_;
  };

  ASTNode *expr_;
};

#endif
