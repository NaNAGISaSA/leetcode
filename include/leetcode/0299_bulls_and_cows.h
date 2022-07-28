#ifndef LEETCODE_BULLS_AND_COWS_H_
#define LEETCODE_BULLS_AND_COWS_H_

#include <string>

namespace leetcode::bulls_and_cows {

#define SOLUTION_CLASS_DECLARATION                                                        \
    class Solution {                                                                      \
    public:                                                                               \
        static std::string get_hint(const std::string& secret, const std::string& guess); \
    }

namespace two_pass {
SOLUTION_CLASS_DECLARATION;
}

namespace one_pass {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::bulls_and_cows

#endif
