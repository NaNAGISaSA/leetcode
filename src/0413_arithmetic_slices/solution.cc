#include "0413_arithmetic_slices.h"

namespace leetcode::arithmetic_slices {

int Solution::number_of_arithmetic_slices(const std::vector<int>& nums) {
    size_t start = 0, left = 1, nums_size = nums.size();
    int result = 0;
    while (left < nums_size) {
        int diff = nums[left] - nums[start];
        size_t right = left + 1;
        while (right < nums_size && nums[right] - nums[left] == diff) {
            ++left;
            ++right;
        }
        int len = static_cast<int>(right - start);
        result += (len - 1) * (len - 2) / 2;
        start = left;
        left = right;
    }
    return result;
}

}  // namespace leetcode::arithmetic_slices
