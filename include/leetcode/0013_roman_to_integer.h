#ifndef _LEETCODE_ROMAN_TO_INTEGER_H_
#define _LEETCODE_ROMAN_TO_INTEGER_H_

#include <string>

namespace leetcode::roman_to_integer {

#define SOLUTION_CLASS_DECLARATION                     \
    class Solution {                                   \
    public:                                            \
        static int roman_to_int(const std::string& s); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace another {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::roman_to_integer

#endif
