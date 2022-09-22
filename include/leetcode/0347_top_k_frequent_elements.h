#ifndef LEETCODE_TOP_K_FREQUENT_ELEMENTS_H_
#define LEETCODE_TOP_K_FREQUENT_ELEMENTS_H_

#include <vector>

namespace leetcode::top_k_frequent_elements {

#define SOLUTION_CLASS_DECLARATION                                                   \
    class Solution {                                                                 \
    public:                                                                          \
        static std::vector<int> top_k_frequent(const std::vector<int>& nums, int k); \
    }

namespace heap {
SOLUTION_CLASS_DECLARATION;
}

namespace bucket_sort {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::top_k_frequent_elements

#endif
