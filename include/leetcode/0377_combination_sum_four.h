#ifndef LEETCODE_COMBINATION_SUM_FOUR_H_
#define LEETCODE_COMBINATION_SUM_FOUR_H_

#include <vector>

namespace leetcode::combination_sum_four {

#define SOLUTION_CLASS_DECLARATION                                            \
    class Solution {                                                          \
    public:                                                                   \
        static int combination_sum(const std::vector<int>& nums, int target); \
    }

namespace backtrace {
SOLUTION_CLASS_DECLARATION;
}

namespace forward {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::combination_sum_four

#endif