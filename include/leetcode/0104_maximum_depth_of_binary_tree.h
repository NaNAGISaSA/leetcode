#ifndef _LEETCODE_MAXIMUM_DEPTH_OF_BINARY_TREE_H_
#define _LEETCODE_MAXIMUM_DEPTH_OF_BINARY_TREE_H_

#include "utils/tree_utils.h"

namespace leetcode::maximum_depth_of_binary_tree {

#define SOLUTION_CLASS_DECLARATION            \
    class Solution {                          \
    public:                                   \
        static int max_depth(TreeNode* root); \
    }

namespace recurse_dfs {
SOLUTION_CLASS_DECLARATION;
}

namespace stack_dfs {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::maximum_depth_of_binary_tree

#endif