#include "0137_single_number_two.h"

namespace leetcode::single_number_two::xor_method {

int Solution::single_number(const std::vector<int>& nums) {
    int x1 = 0, x2 = 0, mask = 0;
    for (auto& num : nums) {
        x2 ^= (x1 & num);
        x1 ^= num;
        mask = ~(x2 & x1);
        x2 &= mask;
        x1 &= mask;
    }
    return x1;
}

}  // namespace leetcode::single_number_two::xor_method
