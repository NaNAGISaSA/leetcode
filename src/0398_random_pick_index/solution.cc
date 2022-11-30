#include "0398_random_pick_index.h"

#include <cstdlib>

namespace leetcode::random_pick_index {

Solution::Solution(const std::vector<int>& nums) : nums(nums) {
}

int Solution::pick(int target) {
    int idx = 0, count = 0;
    for (int start = 0, end = static_cast<int>(nums.size()); start < end; ++start) {
        if (nums[start] != target) {
            continue;
        }
        if (++count == 1 || rand() % count == 0) {
            idx = start;
        }
    }
    return idx;
}

}  // namespace leetcode::random_pick_index
