#ifndef _LEETCODE_REVERSE_BITS_H_
#define _LEETCODE_REVERSE_BITS_H_

#include <cstdint>

namespace leetcode::reverse_bits {

#define SOLUTION_CLASS_DECLARATION                \
    class Solution {                              \
    public:                                       \
        static uint32_t reverse_bits(uint32_t n); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace another {
SOLUTION_CLASS_DECLARATION;
}

namespace in_place {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::reverse_bits

#endif