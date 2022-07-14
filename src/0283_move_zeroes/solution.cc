#include "0283_move_zeroes.h"

namespace leetcode::move_zeroes {

void Solution::move_zeroes(std::vector<int>& nums) {
    int zero_idx = 0, nums_size = static_cast<int>(nums.size());
    for (int i = 0; i < nums_size; ++i) {
        if (nums[i] != 0) {
            std::swap(nums[i], nums[zero_idx++]);
        }
    }
}

}  // namespace leetcode::move_zeroes
