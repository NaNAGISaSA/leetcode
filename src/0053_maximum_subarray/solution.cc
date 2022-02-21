#include <algorithm>
#include <limits>

#include "0053_maximum_subarray.h"

namespace leetcode::maximum_subarray {

int Solution::max_subarray(const std::vector<int>& nums) {
    int prev = 0, max_sum = std::numeric_limits<int>::min();
    for (size_t i = 0; i < nums.size(); ++i) {
        prev += nums[i];
        max_sum = std::max(max_sum, prev);
        prev = std::max(prev, 0);
    }
    return max_sum;
}

}  // namespace leetcode::maximum_subarray
