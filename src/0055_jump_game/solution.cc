#include <algorithm>

#include "0055_jump_game.h"

namespace leetcode::jump_game {

bool Solution::can_jump(const std::vector<int>& nums) {
    int max_index = 0;
    int last_index = static_cast<int>(nums.size()) - 1;
    for (int i = 0; i <= last_index; ++i) {
        if (max_index < i) {
            return false;
        } else if (max_index >= last_index) {
            return true;
        }
        max_index = std::max(max_index, i + nums[i]);
    }
    return max_index >= last_index;
}

}  // namespace leetcode::jump_game
