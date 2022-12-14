#include "0410_split_array_largest_sum.h"

#include <limits>

namespace leetcode::split_array_largest_sum {

int Solution::split_array(const std::vector<int>& nums, int k) {
    size_t nums_size = nums.size();
    std::vector<std::vector<int>> dp_mat(k, std::vector<int>(nums_size, 0));
    dp_mat[0][0] = nums[0];
    for (size_t i = 1; i < nums_size; ++i) {
        dp_mat[0][i] = dp_mat[0][i - 1] + nums[i];
    }
    for (size_t i = 1, end = k; i < end; ++i) {
        for (size_t j = i; j < nums_size; ++j) {
            int acc = 0, res = std::numeric_limits<int>::max();
            for (size_t kk = j; kk >= i; --kk) {
                acc += nums[kk];
                res = std::min(res, std::max(acc, dp_mat[i - 1][kk - 1]));
                if (acc >= dp_mat[i - 1][kk - 1]) {
                    break;
                }
            }
            dp_mat[i][j] = res;
        }
    }
    return dp_mat[k - 1][nums_size - 1];
}

}  // namespace leetcode::split_array_largest_sum
