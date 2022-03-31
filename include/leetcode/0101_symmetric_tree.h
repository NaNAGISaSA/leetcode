#ifndef _LEETCODE_SYMMETRIC_TREE_H_
#define _LEETCODE_SYMMETRIC_TREE_H_

#include "utils/tree_utils.h"

namespace leetcode::symmetric_tree {

#define SOLUTION_CLASS_DECLARATION                \
    class Solution {                              \
    public:                                       \
        static bool is_symmetric(TreeNode* root); \
    }

namespace recurse {
SOLUTION_CLASS_DECLARATION;
}

namespace stack {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::symmetric_tree

#endif