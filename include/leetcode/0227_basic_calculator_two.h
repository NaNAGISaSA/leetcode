#ifndef _LEETCODE_BASIC_CALCULATOR_TWO_H_
#define _LEETCODE_BASIC_CALCULATOR_TWO_H_

#include <string>

namespace leetcode::basic_calculator_two {

#define SOLUTION_CLASS_DECLARATION                  \
    class Solution {                                \
    public:                                         \
        static int calculate(const std::string& s); \
    }

namespace deque {
SOLUTION_CLASS_DECLARATION;
}

namespace stack {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::basic_calculator_two

#endif