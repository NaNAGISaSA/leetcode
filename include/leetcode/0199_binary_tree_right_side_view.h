#ifndef _LEETCODE_BINARY_TREE_RIGHT_SIDE_VIEW_H_
#define _LEETCODE_BINARY_TREE_RIGHT_SIDE_VIEW_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::binary_tree_right_side_view {

#define SOLUTION_CLASS_DECLARATION                               \
    class Solution {                                             \
    public:                                                      \
        static std::vector<int> right_side_view(TreeNode* root); \
    }

namespace level_order {
SOLUTION_CLASS_DECLARATION;
}

namespace recurse {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::binary_tree_right_side_view

#endif