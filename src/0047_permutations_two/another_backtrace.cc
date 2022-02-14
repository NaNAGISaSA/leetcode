#include <algorithm>

#include "0047_permutations_two.h"

namespace leetcode::permutations_two::another {

namespace {
void backtrace(const std::vector<int>& nums,
               std::vector<int>& vec,
               std::vector<bool>& used,
               std::vector<std::vector<int>>& result) {
    if (vec.size() == nums.size()) {
        result.push_back(vec);
        return;
    }
    for (size_t i = 0; i < nums.size(); ++i) {
        // 如果元素相同，消除重复的方式为保证其在结果中相对位置不变
        if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])) {
            continue;
        }
        used[i] = true;
        vec.push_back(nums[i]);
        backtrace(nums, vec, used, result);
        vec.pop_back();
        used[i] = false;
    }
}
}  // namespace

std::vector<std::vector<int>> Solution::permute_unique(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    std::vector<int> vec;
    std::vector<bool> used(nums.size(), false);
    std::sort(nums.begin(), nums.end());
    backtrace(nums, vec, used, result);
    return result;
}

}  // namespace leetcode::permutations_two::another