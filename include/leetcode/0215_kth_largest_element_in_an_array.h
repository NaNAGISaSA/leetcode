#ifndef _LEETCODE_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H_
#define _LEETCODE_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H_

#include <vector>

namespace leetcode::kth_largest_element_in_an_array {

class Solution {
public:
    static int find_kth_largest(const std::vector<int>& nums, int k);
};

}  // namespace leetcode::kth_largest_element_in_an_array

#endif
