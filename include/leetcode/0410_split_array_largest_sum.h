#ifndef LEETCODE_SPLIT_ARRAY_LARGEST_SUM_H_
#define LEETCODE_SPLIT_ARRAY_LARGEST_SUM_H_

#include <vector>

namespace leetcode::split_array_largest_sum {

#define SOLUTION_CLASS_DECLARATION                                   \
    class Solution {                                                 \
    public:                                                          \
        static int split_array(const std::vector<int>& nums, int k); \
    }

namespace dp {
SOLUTION_CLASS_DECLARATION;
}

namespace bs {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::split_array_largest_sum

#endif
