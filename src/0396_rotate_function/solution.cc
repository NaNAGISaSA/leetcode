#include "0396_rotate_function.h"

#include <algorithm>

namespace leetcode::rotate_function {

int Solution::max_rotate_function(const std::vector<int>& nums) {
    int acc = 0, result = 0, multi = 0;
    for (auto num : nums) {
        acc += num;
        result += multi * num;
        ++multi;
    }
    --multi;
    int rotate_res = result;
    for (size_t i = 1, e = nums.size(); i < e; ++i) {
        rotate_res += multi * nums[i - 1] - acc + nums[i - 1];
        result = std::max(rotate_res, result);
    }
    return result;
}

}  // namespace leetcode::rotate_function
