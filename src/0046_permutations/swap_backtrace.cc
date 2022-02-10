#include "0046_permutations.h"

namespace leetcode::permutations::swap_backtrace {

namespace {
void backtrace(std::vector<int>& nums, std::vector<std::vector<int>>& result, size_t begin) {
    if (begin == nums.size()) {
        result.push_back(nums);
        return;
    }
    for (size_t i = begin; i < nums.size(); ++i) {
        std::swap(nums[begin], nums[i]);
        backtrace(nums, result, begin + 1);
        std::swap(nums[i], nums[begin]);
    }
}
}  // namespace

std::vector<std::vector<int>> Solution::permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    backtrace(nums, result, 0);
    return result;
}

}  // namespace leetcode::permutations::swap_backtrace