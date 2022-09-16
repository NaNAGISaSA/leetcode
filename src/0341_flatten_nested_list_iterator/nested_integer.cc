#include "0341_flatten_nested_list_iterator.h"

namespace leetcode::flatten_nested_list_iterator {

NestedInteger::NestedInteger(int val) : integer{val}, integer_vec{} {
}

NestedInteger::NestedInteger(const std::vector<NestedInteger>& vec) : integer{-1}, integer_vec{vec} {
}

bool NestedInteger::isInteger() const {
    return integer_vec.size() == 0;
}

int NestedInteger::getInteger() const {
    return integer;
}

const std::vector<NestedInteger>& NestedInteger::getList() const {
    return integer_vec;
}

}  // namespace leetcode::flatten_nested_list_iterator
