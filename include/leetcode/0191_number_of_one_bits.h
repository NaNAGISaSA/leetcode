#ifndef _LEETCODE_NUMBER_OF_ONE_BITS_H_
#define _LEETCODE_NUMBER_OF_ONE_BITS_H_

#include <cstdint>

namespace leetcode::number_of_one_bits {

#define SOLUTION_CLASS_DECLARATION             \
    class Solution {                           \
    public:                                    \
        static int hamming_weight(uint32_t n); \
    }

namespace common {
SOLUTION_CLASS_DECLARATION;
}

namespace another {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::number_of_one_bits

#endif