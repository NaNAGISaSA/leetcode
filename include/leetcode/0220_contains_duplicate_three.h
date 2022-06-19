#ifndef _LEETCODE_CONTAINS_DUPLICATE_THREE_H_
#define _LEETCODE_CONTAINS_DUPLICATE_THREE_H_

#include <vector>

namespace leetcode::contains_duplicate_three {

#define SOLUTION_CLASS_DECLARATION                                                                \
    class Solution {                                                                              \
    public:                                                                                       \
        static bool contains_nearby_almost_duplicate(const std::vector<int>& nums, int k, int t); \
    }

namespace set {
SOLUTION_CLASS_DECLARATION;
}

namespace bucket_sort {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::contains_duplicate_three

#endif
