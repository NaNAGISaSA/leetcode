#ifndef _LEETCODE_BINARY_TREE_LEVEL_ORDER_TRAVESAL_TWO_H_
#define _LEETCODE_BINARY_TREE_LEVEL_ORDER_TRAVESAL_TWO_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::binary_tree_level_order_traversal_two {

class Solution {
public:
    static std::vector<std::vector<int>> level_order_bottom(TreeNode* root);
};

}  // namespace leetcode::binary_tree_level_order_traversal_two

#endif