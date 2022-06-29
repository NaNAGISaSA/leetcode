#ifndef _LEETCODE_LOWEST_COMMON_ANCESTOR_OF_A_BST_H_
#define _LEETCODE_LOWEST_COMMON_ANCESTOR_OF_A_BST_H_

#include "utils/tree_utils.h"

namespace leetcode::lowest_common_ancestor_of_a_bst {

class Solution {
public:
    static TreeNode* lowest_common_ancestor(TreeNode* root, TreeNode* p, TreeNode* q);
};

}  // namespace leetcode::lowest_common_ancestor_of_a_bst

#endif