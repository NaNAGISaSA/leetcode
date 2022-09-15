#ifndef LEETCODE_COUNTING_BITS_H_
#define LEETCODE_COUNTING_BITS_H_

#include <vector>

namespace leetcode::counting_bits {

#define SOLUTION_CLASS_DECLARATION                 \
    class Solution {                               \
    public:                                        \
        static std::vector<int> count_bits(int n); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace cleaner {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::counting_bits

#endif