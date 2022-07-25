#ifndef LEETCODE_SERIALIZE_AND_DESERIALIZE_BINARY_TREE_H_
#define LEETCODE_SERIALIZE_AND_DESERIALIZE_BINARY_TREE_H_

#include <string>

#include "utils/tree_utils.h"

namespace leetcode::serialize_and_deserialize_binary_tree {

#define SOLUTION_CLASS_DECLARATION                             \
    class Codec {                                              \
    public:                                                    \
        static std::string serialize(TreeNode* root);          \
        static TreeNode* deserialize(const std::string& data); \
    }

namespace level_order {
SOLUTION_CLASS_DECLARATION;
}

namespace pre_order {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::serialize_and_deserialize_binary_tree

#endif
