#include "0041_first_missing_positive.h"

namespace leetcode::first_missing_positive::one_path {

int Solution::first_missing_positive(std::vector<int>& nums) {
    int left = 0, right = static_cast<int>(nums.size());
    while (left < right) {
        if (nums[left] == left + 1) {
            ++left;
        } else if (nums[left] <= left || nums[left] > right || nums[nums[left] - 1] == nums[left]) {
            nums[left] = nums[--right];
        } else {
            std::swap(nums[left], nums[nums[left] - 1]);
        }
    }
    return left + 1;
}

}  // namespace leetcode::first_missing_positive::one_path
