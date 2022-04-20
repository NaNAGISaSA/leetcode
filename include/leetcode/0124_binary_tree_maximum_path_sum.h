#ifndef _LEETCODE_BINARY_TREE_MAXIMUM_PATH_SUM_H_
#define _LEETCODE_BINARY_TREE_MAXIMUM_PATH_SUM_H_

#include "utils/tree_utils.h"

namespace leetcode::binary_tree_maximum_path_sum {

#define SOLUTION_CLASS_DECLARATION               \
    class Solution {                             \
    public:                                      \
        static int max_path_sum(TreeNode* root); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace cleaner {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::binary_tree_maximum_path_sum

#endif