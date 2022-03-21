#ifndef _LEETCODE_VALIDATE_BINARY_SEARCH_TREE_H_
#define _LEETCODE_VALIDATE_BINARY_SEARCH_TREE_H_

#include "utils/tree_utils.h"

namespace leetcode::validate_binary_search_tree {

class Solution {
public:
    static bool is_valid_bst(TreeNode* root);
};

}  // namespace leetcode::validate_binary_search_tree

#endif