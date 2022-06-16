#ifndef _LEETCODE_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H_
#define _LEETCODE_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H_

#include <vector>

namespace leetcode::kth_largest_element_in_an_array {

#define SOLUTION_CLASS_DECLARATION                                  \
    class Solution {                                                \
    public:                                                         \
        static int find_kth_largest(std::vector<int>& nums, int k); \
    }

namespace heap {
SOLUTION_CLASS_DECLARATION;
}

namespace quick_select {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::kth_largest_element_in_an_array

#endif
