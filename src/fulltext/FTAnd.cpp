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

#include "../config/xqilla_config.h"
#include <xqilla/fulltext/FTAnd.hpp>
#include <xqilla/context/DynamicContext.hpp>

using namespace std;

FTAnd::FTAnd(XPath2MemoryManager *memMgr)
  : FTSelection(AND, memMgr),
    args_(memMgr)
{
}

FTAnd::FTAnd(FTSelection *left, FTSelection *right, XPath2MemoryManager *memMgr)
    : FTSelection(AND, memMgr),
      args_(memMgr)
{
  args_.push_back(left);
  args_.push_back(right);
}

FTSelection *FTAnd::staticResolution(StaticContext *context)
{
  for(VectorOfFTSelections::iterator i = args_.begin();
      i != args_.end(); ++i) {
    *i = (*i)->staticResolution(context);
    src_.add((*i)->getStaticResolutionContext());
  }

  return this;
}

FTSelection *FTAnd::optimize(FTContext *ftcontext, bool execute) const
{
  XPath2MemoryManager *mm = ftcontext->context->getMemoryManager();

  FTAnd *ftand = new (mm) FTAnd(mm);
  ftand->setLocationInfo(this);

  for(VectorOfFTSelections::const_iterator i = args_.begin();
      i != args_.end(); ++i) {
    FTSelection *arg = (*i)->optimize(ftcontext, execute);
    if(arg == 0) return 0;
    ftand->addArg(arg);
  }

  if(ftand->args_.empty()) {
    return 0;
  }
  if(ftand->args_.size() == 1) {
    return ftand->args_.back();
  }

  return ftand;
}

AllMatches::Ptr FTAnd::execute(FTContext *ftcontext) const
{
  FTConjunctionMatches *conjunction = new FTConjunctionMatches(this);
  AllMatches::Ptr result(conjunction);

  for(VectorOfFTSelections::const_iterator i = args_.begin();
      i != args_.end(); ++i) {
    conjunction->addMatches((*i)->execute(ftcontext));
  }

  return result;
}

BufferedMatches::BufferedMatches(const LocationInfo *info, const AllMatches::Ptr matches)
  : AllMatches(info),
    matches_(matches),
    buffer_(),
    it_(buffer_.begin())
{
}

Match::Ptr BufferedMatches::current()
{
  if(it_ == buffer_.begin()) return 0;
  Match::Ptr match = *--it_;
  ++it_;
  return match;
}

Match::Ptr BufferedMatches::next(DynamicContext *context)
{
  if(it_ != buffer_.end()) return *it_++;

  if(matches_.notNull()) {
    Match::Ptr match = matches_->next(context);
    if(match.isNull()) {
      matches_ = 0;
    }
    else {
      buffer_.push_back(match);
      return match;
    }
  }

  return 0;
}

void BufferedMatches::reset()
{
  it_ = buffer_.begin();
}

FTConjunctionMatches::FTConjunctionMatches(const LocationInfo *info)
  : AllMatches(info),
    toDo_(true)
{
}

void FTConjunctionMatches::addMatches(const AllMatches::Ptr &m)
{
  args_.push_back(m.notNull() ? new BufferedMatches(this, m) : 0);
}

Match::Ptr FTConjunctionMatches::next(DynamicContext *context)
{
  // TBD need to check for StringInclude / StringExclude contradictions

  vector<BufferedMatches::Ptr>::reverse_iterator rend = args_.rend();
  vector<BufferedMatches::Ptr>::reverse_iterator rbegin = args_.rbegin();
  vector<BufferedMatches::Ptr>::reverse_iterator it;

  bool initialisationState = false;
  if(toDo_) {
    toDo_ = false;
    initialisationState = true;
  }

  if(initialisationState) {
    it = rend;
  }
  else {
    it = rbegin;
  }

  while(true) {
    if(initialisationState) {
      if(it == rbegin) {
        break;
      }
      else {
        --it;
        (*it)->reset();
        if((*it)->next(context).isNull()) {
          initialisationState = false;
          ++it;
        }
      }
    }
    else {
      if(it == rend) {
        args_.clear();
        return 0;
      }
      else {
        if((*it)->next(context).notNull()) {
          initialisationState = true;
        }
        else {
          ++it;
        }
      }
    }
  }

  Match::Ptr result = new Match();
  for(vector<BufferedMatches::Ptr>::iterator i = args_.begin();
      i != args_.end(); ++i) {
    result->add((*i)->current());
  }

  return result;
}
