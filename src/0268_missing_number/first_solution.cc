#include "0268_missing_number.h"

namespace leetcode::missing_number::first {

int Solution::missing_number(std::vector<int>& nums) {
    int nums_size = static_cast<int>(nums.size());
    for (int i = 0; i < nums_size; ++i) {
        while (nums[i] != nums_size && nums[i] != i) {
            std::swap(nums[nums[i]], nums[i]);
        }
    }
    for (int i = 0; i < nums_size; ++i) {
        if (nums[i] != i) {
            return i;
        }
    }
    return nums_size;
}

}  // namespace leetcode::missing_number::first
