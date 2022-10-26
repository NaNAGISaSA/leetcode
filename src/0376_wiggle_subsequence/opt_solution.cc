#include "0376_wiggle_subsequence.h"

#include <algorithm>

namespace leetcode::wiggle_subsequence::opt {

int Solution::wiggle_max_length(const std::vector<int>& nums) {
    int up = 1, down = 1;
    for (size_t i = 1, size = nums.size(); i < size; ++i) {
        if (nums[i] > nums[i - 1]) {
            up = down + 1;
        } else if (nums[i] < nums[i - 1]) {
            down = up + 1;
        }
    }
    return std::max(up, down);
}

}  // namespace leetcode::wiggle_subsequence::opt
