#ifndef LEETCODE_VERIFY_PREORDER_SERIALIZATION_OF_A_BINARY_TREE_H_
#define LEETCODE_VERIFY_PREORDER_SERIALIZATION_OF_A_BINARY_TREE_H_

#include <string>

namespace leetcode::verify_preorder_serialization_of_a_binary_tree {

#define SOLUTION_CLASS_DECLARATION                                       \
    class Solution {                                                     \
    public:                                                              \
        static bool is_valid_serialization(const std::string& preorder); \
    }

namespace recurse {
SOLUTION_CLASS_DECLARATION;
}

namespace count_node {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::verify_preorder_serialization_of_a_binary_tree

#endif