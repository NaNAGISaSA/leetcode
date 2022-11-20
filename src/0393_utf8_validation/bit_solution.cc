#include "0393_utf8_validation.h"

namespace leetcode::utf8_validation::bit {

bool Solution::valid_utf8(const std::vector<int>& data) {
    int repeat_num = 0;
    for (auto num : data) {
        if (repeat_num != 0) {
            if (num >> 6 != 0b10) {
                return false;
            }
            --repeat_num;
        } else {
            if (num >> 3 == 0b11110) {
                repeat_num = 3;
            } else if (num >> 4 == 0b1110) {
                repeat_num = 2;
            } else if (num >> 5 == 0b110) {
                repeat_num = 1;
            } else if (num >> 7 != 0) {
                return false;
            }
        }
    }
    return repeat_num == 0;
}

}  // namespace leetcode::utf8_validation::bit
