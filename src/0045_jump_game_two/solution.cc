#include <algorithm>

#include "0045_jump_game_two.h"

namespace leetcode::jump_game_two {

int Solution::jump(const std::vector<int>& nums) {
    int curr_idx = 0, curr_max_pos = 0;
    int step = 0, step_max_pos = 0;
    while (step_max_pos < static_cast<int>(nums.size()) - 1) {
        if (step_max_pos < curr_idx) {
            step_max_pos = curr_max_pos;
            ++step;
        }
        curr_max_pos = std::max(curr_max_pos, curr_idx + nums[curr_idx]);
        ++curr_idx;
    }
    return step;
}

}  // namespace leetcode::jump_game_two
