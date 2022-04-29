#include "0137_single_number_two.h"

namespace leetcode::single_number_two {

int Solution::single_number(const std::vector<int>& nums) {
    int result = 0;
    for (int i = 0; i < 32; ++i) {
        int bit1_num = 0;
        for (auto& num : nums) {
            if ((num >> i) & 0x1) {
                ++bit1_num;
            }
        }
        if (bit1_num % 3 != 0) {
            result |= (0x1 << i);
        }
    }
    return result;
}

}  // namespace leetcode::single_number_two
