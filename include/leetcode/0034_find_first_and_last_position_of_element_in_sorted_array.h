#ifndef _LEETCODE_FIND_FIRST_AND_LAST_POSITION_OF_ELEMENT_IN_SORTED_ARRAY_H_
#define _LEETCODE_FIND_FIRST_AND_LAST_POSITION_OF_ELEMENT_IN_SORTED_ARRAY_H_

#include <vector>

namespace leetcode::find_first_and_last_position_of_element_in_sorted_array {

class Solution {
public:
    static std::vector<int> search_range(const std::vector<int>& nums, int target);
};

}  // namespace leetcode::find_first_and_last_position_of_element_in_sorted_array

#endif