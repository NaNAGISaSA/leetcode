#include "0330_patching_array.h"

namespace leetcode::patching_array {

int Solution::min_patches(const std::vector<int>& nums, int n) {
    size_t idx = 0, nums_size = nums.size();
    long curr_range = 0;
    int result = 0;
    while (idx < nums_size && curr_range < n) {
        if (curr_range < nums[idx] - 1) {
            ++result;
            curr_range += curr_range + 1;
        } else {
            curr_range += nums[idx++];
        }
    }
    while (curr_range < n) {
        curr_range += curr_range + 1;
        ++result;
    }
    return result;
}

}  // namespace leetcode::patching_array
