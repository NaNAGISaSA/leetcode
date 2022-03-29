#ifndef _LEETCODE_GRAY_CODE_H_
#define _LEETCODE_GRAY_CODE_H_

#include <vector>

namespace leetcode::gray_code {

#define SOLUTION_CLASS_DECLARATION                \
    class Solution {                              \
    public:                                       \
        static std::vector<int> gray_code(int n); \
    }

namespace direct {
SOLUTION_CLASS_DECLARATION;
}

namespace backtrace {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::gray_code

#endif