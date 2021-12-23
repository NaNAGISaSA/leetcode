#ifndef _LEETCODE_INTEGER_TO_ROMAN_H_
#define _LEETCODE_INTEGER_TO_ROMAN_H_

#include <string>

namespace leetcode::integer_to_roman {

#define SOLUTION_CLASS_DECLARATION                \
    class Solution {                              \
    public:                                       \
        static std::string int_to_roman(int num); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace another {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::integer_to_roman

#endif
