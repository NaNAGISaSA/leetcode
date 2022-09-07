#ifndef LEETCODE_INCREASING_TRIPLET_SUBSEQUENCE_H_
#define LEETCODE_INCREASING_TRIPLET_SUBSEQUENCE_H_

#include <vector>

namespace leetcode::increasing_triplet_subsequence {

#define SOLUTION_CLASS_DECLARATION                                    \
    class Solution {                                                  \
    public:                                                           \
        static bool increasing_triplet(const std::vector<int>& nums); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace cleaner {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::increasing_triplet_subsequence

#endif