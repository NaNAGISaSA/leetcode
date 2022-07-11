#include "0268_missing_number.h"

namespace leetcode::missing_number::x_or {

int Solution::missing_number(std::vector<int>& nums) {
    int nums_size = static_cast<int>(nums.size());
    int result = nums_size;
    for (int i = 0; i < nums_size; ++i) {
        result ^= i ^ nums[i];
    }
    return result;
}

}  // namespace leetcode::missing_number::x_or
