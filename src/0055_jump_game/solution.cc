#include <algorithm>

#include "0055_jump_game.h"

namespace leetcode::jump_game {

bool Solution::can_jump(const std::vector<int>& nums) {
    size_t curr_idx = 0, max_idx = 0, nums_size = nums.size();
    while (curr_idx < nums_size && curr_idx <= max_idx) {
        max_idx = std::max(max_idx, curr_idx + nums[curr_idx]);
        ++curr_idx;
    }
    return max_idx >= nums_size - 1;
}

}  // namespace leetcode::jump_game
