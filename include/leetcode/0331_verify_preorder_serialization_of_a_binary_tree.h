#ifndef LEETCODE_VERIFY_PREORDER_SERIALIZATION_OF_A_BINARY_TREE_H_
#define LEETCODE_VERIFY_PREORDER_SERIALIZATION_OF_A_BINARY_TREE_H_

#include <string>

namespace leetcode::verify_preorder_serialization_of_a_binary_tree {

class Solution {
public:
    static bool is_valid_serialization(const std::string& preorder);
};

}  // namespace leetcode::verify_preorder_serialization_of_a_binary_tree

#endif