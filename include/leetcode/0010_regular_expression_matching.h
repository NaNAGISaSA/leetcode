#ifndef _LEETCODE_REGULAR_EXPRESSION_MATCHING_H_
#define _LEETCODE_REGULAR_EXPRESSION_MATCHING_H_

#include <string>

namespace leetcode::regular_expression_matching {

#define SOLUTION_CLASS_DECLARATION                                     \
    class Solution {                                                   \
    public:                                                            \
        static bool match(const std::string& s, const std::string& p); \
    }

namespace recurse {
SOLUTION_CLASS_DECLARATION;
}

namespace dp {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::regular_expression_matching

#endif
