#include "0190_reverse_bits.h"

namespace leetcode::reverse_bits {

uint32_t Solution::reverse_bits(uint32_t n) {
    uint32_t result = 0;
    for (uint32_t i = 0; i < 16; ++i) {
        result |= (n & (1 << i)) << (31 - 2 * i);
        result |= (n & (1 << (31 - i))) >> (31 - 2 * i);
    }
    return result;
}

}  // namespace leetcode::reverse_bits
