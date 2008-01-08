/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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

#ifndef _XQTREATAS_HPP
#define _XQTREATAS_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/runtime/LazySequenceResult.hpp>

class SequenceType;

class XQILLA_API XQTreatAs : public ASTNodeImpl
{
public:
  XQTreatAs(ASTNode* expr, const SequenceType *exprType, XPath2MemoryManager* memMgr, const XMLCh *errorCode = 0);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  const ASTNode *getExpression() const;
  const SequenceType *getSequenceType() const;
  bool getDoTypeCheck() const { return _doTypeCheck; }

  void setExpression(ASTNode *item);

protected:
  ASTNode* _expr;
  const SequenceType* _exprType;
  const XMLCh *_errorCode;
  bool _doTypeCheck;
};

#endif
