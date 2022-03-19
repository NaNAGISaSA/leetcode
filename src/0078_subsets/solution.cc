#include "0078_subsets.h"

namespace {
void backtrace(const std::vector<int>& nums, int start, std::vector<int>& acc, std::vector<std::vector<int>>& result) {
    if (start == static_cast<int>(nums.size())) {
        result.push_back(acc);
        return;
    }
    backtrace(nums, start + 1, acc, result);
    acc.push_back(nums[start]);
    backtrace(nums, start + 1, acc, result);
    acc.pop_back();
}
}  // namespace

namespace leetcode::subsets {

std::vector<std::vector<int>> Solution::subsets(const std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    std::vector<int> acc;
    backtrace(nums, 0, acc, result);
    return result;
}

}  // namespace leetcode::subsets