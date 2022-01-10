#ifndef _LEETCODE_GENERATE_PARENTHESES_H_
#define _LEETCODE_GENERATE_PARENTHESES_H_

#include <string>
#include <vector>

#define SOLUTION_CLASS_DECLARATION                                   \
    class Solution {                                                 \
    public:                                                          \
        static std::vector<std::string> generate_parenthesis(int n); \
    }

namespace leetcode::generate_parentheses {

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace backtrack {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::generate_parentheses

#endif
