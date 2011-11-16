/*
 * Copyright (c) 2010,
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

#ifndef HASHTRIE_HPP
#define HASHTRIE_HPP

#include <string.h>

#include <xqilla/utils/IHashMap.hpp>
#include <xqilla/framework/ReferenceCounted.hpp>

template<class KEY, class VALUE, class HASH, class EQUALS, int BITS, int DEPTH>
class TrieNode : public ReferenceCounted
{
public:
  typedef TrieNode<KEY,VALUE,HASH,EQUALS,BITS,DEPTH> NODE;
  typedef TrieNode<KEY,VALUE,HASH,EQUALS,BITS,DEPTH-1> CHILD;  

  inline TrieNode(const NODE *o, size_t hashPart, const CHILD *s)
  {
    memcpy(ptrs, o->ptrs, sizeof(ptrs));
    ptrs[hashPart] = s;
    for(int i = 0; i < (1 << BITS); ++i)
      if(ptrs[i] != 0) ptrs[i]->incrementRefCount();
  }

  inline TrieNode(const KEY &key, size_t hash, const VALUE *value, const HASH &hashF, const EQUALS &equals, size_t &count)
  {
    memset(ptrs, 0, sizeof(ptrs));
    size_t hashPart = (hash >> ((sizeof(size_t) * 8) - (BITS * DEPTH))) & ((1 << BITS) - 1);
    ptrs[hashPart] = ((CHILD*)0)->put(key, hash, value, hashF, equals, count);
    if(ptrs[hashPart] != 0) ptrs[hashPart]->incrementRefCount();
  }

  inline ~TrieNode()
  {
    for(int i = 0; i < (1 << BITS); ++i)
      if(ptrs[i] != 0) ptrs[i]->decrementRefCount();
  }

  inline const NODE *put(const KEY &key, size_t hash, const VALUE *value,
    const HASH &hashF, const EQUALS &equals, size_t &count) const
  {
    if(this == 0) {
      if(value == 0) return 0;
      return new NODE(key, hash, value, hashF, equals, count);
    }
    size_t hashPart = (hash >> ((sizeof(size_t) * 8) - (BITS * DEPTH))) & ((1 << BITS) - 1);
    const CHILD *newStorage = ptrs[hashPart]->put(key, hash, value, hashF, equals, count);
    if(newStorage == ptrs[hashPart]) return this;
    return new NODE(this, hashPart, newStorage);
  }

  inline const VALUE *get(const KEY &key, size_t hash, const EQUALS &equals) const
  {
    if(this == 0) return 0;
    size_t hashPart = (hash >> ((sizeof(size_t) * 8) - (BITS * DEPTH))) & ((1 << BITS) - 1);
    return ptrs[hashPart]->get(key, hash, equals);
  }

public:
  class const_iterator
  {
  public:
    inline const_iterator() : node_(0), child_(0) {}

    inline const_iterator(const NODE *n)
      : node_(n), child_(0), it_(node_->ptrs[child_]->begin())
    {
      advance();
    }

    inline const_iterator &operator++()
    {
      if(node_ != 0) {
        ++it_;
        advance();
      }
      return *this;
    }

    inline const_iterator operator++(int)
    {
      const_iterator tmp = *this;
      ++*this;
      return tmp;
    }

    inline bool operator==(const const_iterator &o) const
    {
      return node_ == o.node_ && child_ == o.child_ &&
        it_ == o.it_;
    }

    inline bool operator!=(const const_iterator &o) const
    {
      return node_ != o.node_ || child_ != o.child_ ||
        it_ != o.it_;
    }

    inline const KEY &getKey() const
    {
      return it_.getKey();
    }

    inline const VALUE &getValue() const
    {
      return it_.getValue();
    }

  private:
    inline void advance()
    {
      while(it_ == node_->ptrs[child_]->end()) {
        ++child_;
        if(child_ >= (1 << BITS)) {
          node_ = 0; child_ = 0;
          it_ = typename CHILD::const_iterator();
          break;
        }
        it_ = node_->ptrs[child_]->begin();
      }
    }

    const NODE *node_;
    size_t child_;
    typename CHILD::const_iterator it_;
  };

  inline const_iterator begin() const
  {
    if(this == 0) return const_iterator();
    return const_iterator(this);
  }
  inline const_iterator end() const
  {
    return const_iterator();
  }

private:
  TrieNode(const TrieNode &o);
  TrieNode &operator=(const TrieNode &o);

  const CHILD *ptrs[1 << BITS];
};

template<class KEY, class VALUE, class HASH, class EQUALS, int BITS>
struct TrieNode<KEY,VALUE,HASH,EQUALS,BITS,0> : public ReferenceCounted
{
  typedef TrieNode<KEY,VALUE,HASH,EQUALS,BITS,0> NODE;
  typedef IHashMap<KEY,VALUE,HASH,EQUALS> MAP;
  typedef typename MAP::const_iterator const_iterator;

  inline TrieNode(const MAP &m) : map(m) {}

  inline const NODE *put(const KEY &k, size_t h, const VALUE *v,
    const HASH &hashF, const EQUALS &equals, size_t &count) const
  {
    if(this == 0) {
      if(v == 0) return 0;
      ++count;
      MAP m(8,hashF,equals);
      m.put(k, h, *v);
      return new NODE(m);
    }
    MAP m(map);
    if(v == 0) m.remove(k, h);
    else m.put(k, h, *v);
    count += m.size() - map.size();
    return new NODE(m);
  }

  inline const VALUE *get(const KEY &k, size_t h, const EQUALS &equals) const
  {
    if(this == 0) return 0;
    return map.get(k, h);
  }

  inline const_iterator begin() const
  {
    if(this == 0) return typename MAP::const_iterator();
    return map.begin();
  }
  inline const_iterator end() const
  {
    if(this == 0) return typename MAP::const_iterator();
    return map.end();
  }

  MAP map;
};

template<class KEY, class VALUE,
         class HASH = DefaultHashFunctor<KEY>,
         class EQUALS = DefaultEqualsFunctor<KEY>,
         int BITS = 4,
         int DEPTH = 2>
class HashTrie
{
public:
  typedef TrieNode<KEY,VALUE,HASH,EQUALS,BITS,DEPTH> CHILD;
  typedef typename CHILD::const_iterator const_iterator;

  inline HashTrie(const HASH &hash = HASH(), const EQUALS &equals = EQUALS())
    : hash_(hash),
      equals_(equals),
      storage_(0),
      size_(0)
  {
  }

  inline void put(const KEY &key, const VALUE &value)
  {
    put(key, hash_(key), value);
  }
  inline void put(const KEY &key, size_t hash, const VALUE &value)
  {
    storage_ = storage_->put(key, hash, &value, hash_, equals_, size_);
  }

  inline void remove(const KEY &key)
  {
    return remove(key, hash_(key));
  }
  inline void remove(const KEY &key, size_t hash)
  {
    storage_ = storage_->put(key, hash, 0, hash_, equals_, size_);
  }

  inline const VALUE *get(const KEY &key) const
  {
    return get(key, hash_(key));
  }
  inline const VALUE *get(const KEY &key, size_t hash) const
  {
    return storage_->get(key, hash, equals_);
  }

  inline bool contains(const KEY &key) const
  {
    return contains(key, hash_(key));
  }
  inline bool contains(const KEY &key, size_t hash) const
  {
    return storage_->get(key, hash, equals_) != 0;
  }

  inline const_iterator begin() const
  {
    return storage_->begin();
  }
  inline const_iterator end() const
  {
    return storage_->end();
  }

  inline size_t size() const { return size_; }
  inline size_t isEmpty() const { return size_ == 0; }

  inline size_t getHash(const KEY &key) const
  {
    return hash_(key);
  }

private:
  HASH hash_;
  EQUALS equals_;

  RefCountPointer<const CHILD> storage_;
  size_t size_;
};

#endif
