/*
 * Copyright (c) 2010, 2011,
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

#ifndef XQSWITCH_HPP
#define XQSWITCH_HPP

#include <xqilla/ast/ASTNodeImpl.hpp>

class XQILLA_API XQSwitch : public ASTNodeImpl
{
public:
  class Case : public LocationInfo
  {
  public:
    Case(XPath2MemoryManager *mm);

    void staticResolution(StaticContext* context);
    void staticTyping(StaticContext* context, StaticAnalysis &src);

    VectorOfASTNodes &getValues() { return values_; }

    ASTNode *getExpression() const { return expr_; }
    void setExpression(ASTNode *expr) { expr_ = expr; }

  private:
    VectorOfASTNodes values_;
    ASTNode *expr_;
  };

  typedef std::vector<Case*, XQillaAllocator<Case*> > Cases;

  XQSwitch(ASTNode *expr, XPath2MemoryManager *mm);

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTypingImpl(StaticContext *context);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual EventGenerator::Ptr generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;
  virtual PendingUpdateList createUpdateList(DynamicContext *context) const;

  const ASTNode *chooseCase(DynamicContext *context) const;

  ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

  Cases &getCases() { return cases_; }

  ASTNode *getDefault() const { return default_; }
  void setDefault(ASTNode *expr) { default_ = expr; }

private:
  ASTNode *expr_;
  Cases cases_;
  ASTNode *default_;
};

#endif
