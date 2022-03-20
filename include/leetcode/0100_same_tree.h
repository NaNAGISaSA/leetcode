#ifndef _LEETCODE_SAME_TREE_H_
#define _LEETCODE_SAME_TREE_H_

#include "utils/tree_utils.h"

namespace leetcode::same_tree {

class Solution {
public:
    static bool is_same_tree(TreeNode* p, TreeNode* q);
};

}  // namespace leetcode::same_tree

#endif