#include "0209_minimum_size_subarray_sum.h"

#include <algorithm>
#include <limits>

namespace leetcode::minimum_size_subarray_sum {

int Solution::min_subarray_len(int target, const std::vector<int>& nums) {
    size_t left = 0, right = 0, num_size = nums.size();
    int sum = 0, result = std::numeric_limits<int>::max();
    while (right < num_size) {
        sum += nums[right++];
        while (sum >= target) {
            result = std::min(result, static_cast<int>(right - left));
            sum -= nums[left++];
        }
    }
    return result == std::numeric_limits<int>::max() ? 0 : result;
}

}  // namespace leetcode::minimum_size_subarray_sum
