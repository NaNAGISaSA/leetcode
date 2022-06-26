#ifndef _LEETCODE_MAJORITY_ELEMENT_TWO_H_
#define _LEETCODE_MAJORITY_ELEMENT_TWO_H_

#include <vector>

namespace leetcode::majority_element_two {

#define SOLUTION_CLASS_DECLARATION                                              \
    class Solution {                                                            \
    public:                                                                     \
        static std::vector<int> majority_element(const std::vector<int>& nums); \
    }

namespace common {
SOLUTION_CLASS_DECLARATION;
}

namespace sp {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::majority_element_two

#endif