#include "0136_single_number.h"

namespace leetcode::single_number {

int Solution::single_number(const std::vector<int>& nums) {
    int result = 0;
    for (auto& num : nums) {
        result ^= num;
    }
    return result;
}

}  // namespace leetcode::single_number
