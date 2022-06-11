#include "0213_house_robber_two.h"

#include <algorithm>

namespace leetcode::house_robber_two {

namespace {
int rob_for_max(const std::vector<int>& nums, size_t start, size_t end) {
    int rob = 0, not_rob = 0, tmp = 0;
    for (size_t i = start; i <= end; ++i) {
        tmp = nums[i] + not_rob;
        not_rob = std::max(rob, not_rob);
        rob = tmp;
    }
    return std::max(rob, not_rob);
}
}  // namespace

int Solution::rob(const std::vector<int>& nums) {
    return nums.size() < 3 ? std::max(nums.front(), nums.back()) :
                             std::max(rob_for_max(nums, 0, nums.size() - 2), rob_for_max(nums, 1, nums.size() - 1));
}

}  // namespace leetcode::house_robber_two
