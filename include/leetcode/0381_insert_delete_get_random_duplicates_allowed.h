#ifndef LEETCODE_INSERT_DELETE_GET_RANDOM_DUPLICATES_ALLOWED_H_
#define LEETCODE_INSERT_DELETE_GET_RANDOM_DUPLICATES_ALLOWED_H_

#include <memory>

namespace leetcode::insert_delete_get_random_duplicates_allowed {

class RandomizedCollection {
public:
    RandomizedCollection();
    ~RandomizedCollection();

    bool insert(int val);
    bool remove(int val);
    int get_random();

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::insert_delete_get_random_duplicates_allowed

#endif