#include "0152_maximum_product_subarray.h"

#include <algorithm>

namespace leetcode::maximum_product_subarray {

int Solution::max_product(const std::vector<int>& nums) {
    int max_val = nums[0], min_val = nums[0], tmp = nums[0];
    int result = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        tmp = max_val;
        max_val = std::max(std::max(nums[i] * min_val, nums[i] * max_val), nums[i]);
        min_val = std::min(std::min(nums[i] * min_val, nums[i] * tmp), nums[i]);
        result = std::max(result, max_val);
    }
    return result;
}

}  // namespace leetcode::maximum_product_subarray
