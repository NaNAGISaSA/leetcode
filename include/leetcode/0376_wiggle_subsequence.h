#ifndef LEETCODE_WIGGLE_SUBSEQUENCE_H_
#define LEETCODE_WIGGLE_SUBSEQUENCE_H_

#include <vector>

namespace leetcode::wiggle_subsequence {

#define SOLUTION_CLASS_DECLARATION                                  \
    class Solution {                                                \
    public:                                                         \
        static int wiggle_max_length(const std::vector<int>& nums); \
    }

namespace dp {
SOLUTION_CLASS_DECLARATION;
}

namespace opt {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::wiggle_subsequence

#endif
