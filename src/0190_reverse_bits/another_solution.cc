#include "0190_reverse_bits.h"

namespace leetcode::reverse_bits::another {

uint32_t Solution::reverse_bits(uint32_t n) {
    uint32_t result = 0;
    for (int i = 0; i < 32; ++i) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    return result;
}

}  // namespace leetcode::reverse_bits::another
