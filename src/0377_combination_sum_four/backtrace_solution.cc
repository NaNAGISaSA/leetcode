#include "0377_combination_sum_four.h"

namespace leetcode::combination_sum_four::backtrace {

namespace {
int backtrace(const std::vector<int>& nums, std::vector<int>& dp_vec, int target) {
    if (target < 0) {
        return 0;
    } else if (dp_vec[target] > 0) {
        return dp_vec[target];
    }
    int result = 0;
    for (size_t i = 0, size = nums.size(); i < size; ++i) {
        result += backtrace(nums, dp_vec, target - nums[i]);
    }
    dp_vec[target] = result;
    return result;
}
}  // namespace

int Solution::combination_sum(const std::vector<int>& nums, int target) {
    std::vector<int> dp_vec(target + 1, 0);
    dp_vec[0] = 1;
    return backtrace(nums, dp_vec, target);
}

}  // namespace leetcode::combination_sum_four::backtrace
