#ifndef _LEETCODE_MULTIPLY_STRINGS_H_
#define _LEETCODE_MULTIPLY_STRINGS_H_

#include <string>

namespace leetcode::multiply_strings {

#define SOLUTION_CLASS_DECLARATION                                                     \
    class Solution {                                                                   \
    public:                                                                            \
        static std::string multiply(const std::string& num1, const std::string& num2); \
    }

namespace smart {
SOLUTION_CLASS_DECLARATION;
}

namespace better_understand {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::multiply_strings

#endif