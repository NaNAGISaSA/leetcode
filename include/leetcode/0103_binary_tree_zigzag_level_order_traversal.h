#ifndef _LEETCODE_BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVESAL_H_
#define _LEETCODE_BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVESAL_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::binary_tree_zigzag_level_order_traversal {

class Solution {
public:
    static std::vector<std::vector<int>> zigzag_level_order(TreeNode* root);
};

}  // namespace leetcode::binary_tree_zigzag_level_order_traversal

#endif