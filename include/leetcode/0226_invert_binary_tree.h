#ifndef _LEETCODE_INVERT_BINARY_TREE_H_
#define _LEETCODE_INVERT_BINARY_TREE_H_

#include "utils/tree_utils.h"

namespace leetcode::invert_binary_tree {

#define SOLUTION_CLASS_DECLARATION                    \
    class Solution {                                  \
    public:                                           \
        static TreeNode* invert_tree(TreeNode* root); \
    }

namespace recurse {
SOLUTION_CLASS_DECLARATION;
}

namespace stack {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::invert_binary_tree

#endif