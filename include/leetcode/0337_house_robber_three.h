#ifndef LEETCODE_HOUSE_ROBBER_THREE_H_
#define LEETCODE_HOUSE_ROBBER_THREE_H_

#include "utils/tree_utils.h"

namespace leetcode::house_robber_three {

#define SOLUTION_CLASS_DECLARATION      \
    class Solution {                    \
    public:                             \
        static int rob(TreeNode* root); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace cleaner {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::house_robber_three

#endif