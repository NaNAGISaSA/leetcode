#include <unordered_set>

#include "0046_permutations.h"

namespace leetcode::permutations {

namespace {
void backtrace(const std::vector<int>& nums,
               std::vector<std::vector<int>>& result,
               std::vector<int>& curr_vec,
               std::unordered_set<int>& appear) {
    if (curr_vec.size() == nums.size()) {
        result.push_back(curr_vec);
        return;
    }
    for (size_t i = 0; i < nums.size(); ++i) {
        if (appear.find(nums[i]) != appear.end()) {
            continue;
        }
        appear.insert(nums[i]);
        curr_vec.push_back(nums[i]);
        backtrace(nums, result, curr_vec, appear);
        appear.erase(nums[i]);
        curr_vec.pop_back();
    }
}
}  // namespace

std::vector<std::vector<int>> Solution::permute(const std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    std::vector<int> curr_vec;
    std::unordered_set<int> appear;
    backtrace(nums, result, curr_vec, appear);
    return result;
}

}  // namespace leetcode::permutations
