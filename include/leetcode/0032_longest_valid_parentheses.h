#ifndef _LEETCODE_LONGEST_VALID_PARENTHESES_H_
#define _LEETCODE_LONGEST_VALID_PARENTHESES_H_

#include <string>

namespace leetcode::longest_valid_parentheses {

#define SOLUTION_CLASS_DECLARATION                                  \
    class Solution {                                                \
    public:                                                         \
        static int longest_valid_parentheses(const std::string& s); \
    }

namespace dp {
SOLUTION_CLASS_DECLARATION;
}

namespace stack {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::longest_valid_parentheses

#endif
