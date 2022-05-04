#ifndef _LEETCODE_LRU_CACHE_H_
#define _LEETCODE_LRU_CACHE_H_

#include <memory>

namespace leetcode::lru_cache {

class LRUCache {
public:
    LRUCache(int capacity);
    ~LRUCache();
    int get(int key);
    void put(int key, int value);

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::lru_cache

#endif