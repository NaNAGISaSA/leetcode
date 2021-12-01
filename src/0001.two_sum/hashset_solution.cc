#include <unordered_set>

#include "0001_two_sum.h"

namespace leetcode::two_sum::hashset {

std::vector<int> Solution::two_sum(std::vector<int>& nums, int target) {
    std::unordered_set<int> set(nums.begin(), nums.end());
    std::vector<int> summand;
    for (auto& number : set) {
        if (set.find(target - number) != set.end()) {
            summand.push_back(number);
            summand.push_back(target - number);
        }
    }
    std::vector<int> index;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] == summand[0] || nums[i] == summand[1]) {
            index.push_back(static_cast<int>(i));
        }
        if (index.size() == 2) {
            break;
        }
    }
    return index;
}

}  // namespace leetcode::two_sum::hashset