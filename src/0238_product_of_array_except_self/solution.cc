#include "0238_product_of_array_except_self.h"

namespace leetcode::product_of_array_except_self {

std::vector<int> Solution::product_except_self(std::vector<int>& nums) {
    size_t nums_size = nums.size();  // nums_size >= 2
    std::vector<int> result(nums_size, nums.back());
    for (size_t i = nums_size - 2; i > 0; --i) {
        result[i] = result[i + 1] * nums[i];
    }
    int acc_mul = 1;
    for (size_t i = 0; i < nums_size - 1; ++i) {
        result[i] = acc_mul * result[i + 1];
        acc_mul *= nums[i];
    }
    result.back() = acc_mul;
    return result;
}

}  // namespace leetcode::product_of_array_except_self
