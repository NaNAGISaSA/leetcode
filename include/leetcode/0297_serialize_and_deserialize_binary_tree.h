#ifndef _LEETCODE_SERIALIZE_AND_DESERIALIZE_BINARY_TREE_H_
#define _LEETCODE_SERIALIZE_AND_DESERIALIZE_BINARY_TREE_H_

#include <string>

#include "utils/tree_utils.h"

namespace leetcode::serialize_and_deserialize_binary_tree {

class Codec {
public:
    static std::string serialize(TreeNode* root);
    static TreeNode* deserialize(const std::string& data);
};

}  // namespace leetcode::serialize_and_deserialize_binary_tree

#endif
