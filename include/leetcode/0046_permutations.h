#ifndef _LEETCODE_PERMUTATIONS_H_
#define _LEETCODE_PERMUTATIONS_H_

#include <vector>

namespace leetcode::permutations {

#define SOLUTION_CLASS_DECLARATION                                            \
    class Solution {                                                          \
    public:                                                                   \
        static std::vector<std::vector<int>> permute(std::vector<int>& nums); \
    }

namespace common_backtrace {
SOLUTION_CLASS_DECLARATION;
}

namespace swap_backtrace {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::permutations

#endif