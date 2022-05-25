#include "0191_number_of_one_bits.h"

namespace leetcode::number_of_one_bits::another {

int Solution::hamming_weight(uint32_t n) {
    int result = 0;
    while (n != 0) {
        n &= n - 1;
        ++result;
    }
    return result;
}

}  // namespace leetcode::number_of_one_bits::another
