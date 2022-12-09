#ifndef LEETCODE_CONVERT_A_NUMBER_TO_HEXADECIMAL_H_
#define LEETCODE_CONVERT_A_NUMBER_TO_HEXADECIMAL_H_

#include <string>

namespace leetcode::convert_a_number_to_hexadecimal {

#define SOLUTION_CLASS_DECLARATION          \
    class Solution {                        \
    public:                                 \
        static std::string to_hex(int num); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace clean {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::convert_a_number_to_hexadecimal

#endif
