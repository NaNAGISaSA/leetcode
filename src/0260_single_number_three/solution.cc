#include "0260_single_number_three.h"

namespace leetcode::single_number_three {

std::vector<int> Solution::single_number(const std::vector<int>& nums) {
    int xor_result = 0;
    for (auto& num : nums) {
        xor_result ^= num;
    }
    int first_one_digit_idx = 0;
    for (; first_one_digit_idx < 32; ++first_one_digit_idx) {
        if ((xor_result >> first_one_digit_idx) & 1) {
            break;
        }
    }
    int result = 0;
    for (auto& num : nums) {
        if ((num >> first_one_digit_idx) & 1) {
            result ^= num;
        }
    }
    return {result, xor_result ^ result};
}

}  // namespace leetcode::single_number_three
