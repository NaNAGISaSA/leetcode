#include "0041_first_missing_positive.h"

namespace leetcode::first_missing_positive::two_path {

int Solution::first_missing_positive(std::vector<int>& nums) {
    int nums_size = static_cast<int>(nums.size());
    for (int i = 0; i < nums_size; ++i) {
        while (nums[i] > 0 && nums[i] <= nums_size && nums[nums[i] - 1] != nums[i]) {
            std::swap(nums[i], nums[nums[i] - 1]);
        }
    }
    for (int i = 0; i < nums_size; ++i) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    return nums_size + 1;
}

}  // namespace leetcode::first_missing_positive::two_path