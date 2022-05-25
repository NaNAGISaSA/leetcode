#include "0191_number_of_one_bits.h"

namespace leetcode::number_of_one_bits::common {

int Solution::hamming_weight(uint32_t n) {
    int result = 0;
    while (n != 0) {
        if (n & 1) {
            ++result;
        }
        n >>= 1;
    }
    return result;
}

}  // namespace leetcode::number_of_one_bits::common
