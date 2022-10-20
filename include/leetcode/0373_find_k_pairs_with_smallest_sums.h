#ifndef LEETCODE_FIND_K_PAIRS_WITH_SMALLEST_SUMS_H_
#define LEETCODE_FIND_K_PAIRS_WITH_SMALLEST_SUMS_H_

#include <vector>

namespace leetcode::find_k_pairs_with_smallest_sums {

#define SOLUTION_CLASS_DECLARATION                                                           \
    class Solution {                                                                         \
    public:                                                                                  \
        static std::vector<std::vector<int>> k_smallest_pairs(const std::vector<int>& nums1, \
                                                              const std::vector<int>& nums2, \
                                                              int k);                        \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace cleaner {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::find_k_pairs_with_smallest_sums

#endif
