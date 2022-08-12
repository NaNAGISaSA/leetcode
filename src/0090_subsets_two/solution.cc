#include <algorithm>

#include "0090_subsets_two.h"

namespace {
void backtrace(const std::vector<int>& nums,
               size_t start,
               std::vector<int>& acc,
               std::vector<std::vector<int>>& result) {
    result.push_back(acc);
    for (size_t i = start; i < nums.size(); ++i) {
        if (i != start && nums[i] == nums[i - 1]) {
            continue;
        }
        acc.push_back(nums[i]);
        backtrace(nums, i + 1, acc, result);
        acc.pop_back();
    }
}
}  // namespace

namespace leetcode::subsets_two {

std::vector<std::vector<int>> Solution::subsets_with_dup(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    std::vector<int> acc;
    std::sort(nums.begin(), nums.end());
    backtrace(nums, 0, acc, result);
    return result;
}

}  // namespace leetcode::subsets_two
