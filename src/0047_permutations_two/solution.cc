#include <unordered_set>

#include "0047_permutations_two.h"

namespace leetcode::permutations_two {

namespace {
void backtrace(std::vector<int>& nums, std::vector<std::vector<int>>& result, size_t begin) {
    if (begin == nums.size()) {
        result.push_back(nums);
        return;
    }
    std::unordered_set<int> changed;
    for (size_t i = begin; i < nums.size(); ++i) {
        if (changed.find(nums[i]) != changed.end()) {
            continue;
        }
        changed.insert(nums[i]);
        std::swap(nums[begin], nums[i]);
        backtrace(nums, result, begin + 1);
        std::swap(nums[i], nums[begin]);
    }
}
}  // namespace

std::vector<std::vector<int>> Solution::permute_unique(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    backtrace(nums, result, 0);
    return result;
}

}  // namespace leetcode::permutations_two
