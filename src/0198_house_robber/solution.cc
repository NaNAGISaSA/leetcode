#include "0198_house_robber.h"

#include <algorithm>

namespace leetcode::house_robber {

int Solution::rob(const std::vector<int>& nums) {
    int rob = nums[0], not_rob = 0, tmp = 0;
    for (size_t i = 1; i < nums.size(); ++i) {
        tmp = nums[i] + not_rob;
        not_rob = std::max(rob, not_rob);
        rob = tmp;
    }
    return std::max(rob, not_rob);
}

}  // namespace leetcode::house_robber
