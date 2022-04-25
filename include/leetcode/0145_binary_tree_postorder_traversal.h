#ifndef _LEETCODE_BINARY_TREE_POSTORDER_TRAVESAL_H_
#define _LEETCODE_BINARY_TREE_POSTORDER_TRAVESAL_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::binary_tree_postorder_traversal {

class Solution {
public:
    static std::vector<int> postorder_traversal(TreeNode* root);
};

}  // namespace leetcode::binary_tree_postorder_traversal

#endif