#ifndef _LEETCODE_PATH_SUM_H_
#define _LEETCODE_PATH_SUM_H_

#include "utils/tree_utils.h"

namespace leetcode::path_sum {

class Solution {
public:
    static bool has_path_sum(TreeNode* root, int target_sum);
};

}  // namespace leetcode::path_sum

#endif