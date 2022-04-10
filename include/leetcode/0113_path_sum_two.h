#ifndef _LEETCODE_PATH_SUM_TWO_H_
#define _LEETCODE_PATH_SUM_TWO_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::path_sum_two {

class Solution {
public:
    static std::vector<std::vector<int>> path_sum(TreeNode* root, int target_sum);
};

}  // namespace leetcode::path_sum_two

#endif