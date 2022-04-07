#ifndef _LEETCODE_BALANCED_BINARY_TREE_H_
#define _LEETCODE_BALANCED_BINARY_TREE_H_

#include "utils/tree_utils.h"

namespace leetcode::balanced_binary_tree {

class Solution {
public:
    static bool is_balanced(TreeNode* root);
};

}  // namespace leetcode::balanced_binary_tree

#endif