#ifndef _LEETCODE_SEARCH_IN_ROTATED_SORTED_ARRAY_H_
#define _LEETCODE_SEARCH_IN_ROTATED_SORTED_ARRAY_H_

#include <vector>

namespace leetcode::search_in_rotated_sorted_array {

#define SOLUTION_CLASS_DECLARATION                                   \
    class Solution {                                                 \
    public:                                                          \
        static int search(const std::vector<int>& nums, int target); \
    }

namespace one_path {
SOLUTION_CLASS_DECLARATION;
}

namespace two_path {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::search_in_rotated_sorted_array

#endif
