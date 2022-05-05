#ifndef _LEETCODE_SINGLE_NUMBER_TWO_H_
#define _LEETCODE_SINGLE_NUMBER_TWO_H_

#include <vector>

namespace leetcode::single_number_two {

#define SOLUTION_CLASS_DECLARATION                              \
    class Solution {                                            \
    public:                                                     \
        static int single_number(const std::vector<int>& nums); \
    }

namespace bit_method {
SOLUTION_CLASS_DECLARATION;
}

namespace xor_method {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::single_number_two

#endif