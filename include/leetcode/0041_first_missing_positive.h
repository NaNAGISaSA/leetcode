#ifndef _LEETCODE_FIRST_MISSING_POSITIVE_H_
#define _LEETCODE_FIRST_MISSING_POSITIVE_H_

#include <vector>

namespace leetcode::first_missing_positive {

#define SOLUTION_CLASS_DECLARATION                                 \
    class Solution {                                               \
    public:                                                        \
        static int first_missing_positive(std::vector<int>& nums); \
    }

namespace one_path {
SOLUTION_CLASS_DECLARATION;
}

namespace two_path {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::first_missing_positive

#endif
