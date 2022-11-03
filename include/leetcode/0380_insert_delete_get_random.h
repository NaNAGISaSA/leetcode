#ifndef LEETCODE_INSERT_DELETE_GET_RANDOM_H_
#define LEETCODE_INSERT_DELETE_GET_RANDOM_H_

#include <memory>

namespace leetcode::insert_delete_get_random {

class RandomizedSet {
public:
    RandomizedSet();
    ~RandomizedSet();

    bool insert(int val);
    bool remove(int val);
    int get_random();

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::insert_delete_get_random

#endif