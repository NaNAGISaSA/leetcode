#ifndef _LEETCODE_MEDIAN_OF_TWO_SORTED_ARRAYS_H_
#define _LEETCODE_MEDIAN_OF_TWO_SORTED_ARRAYS_H_

#include <vector>

namespace leetcode::median_of_two_sorted_arrays {

class Solution {
public:
    static double find_median_sorted_arrays(const std::vector<int>& nums1, const std::vector<int>& nums2);
};

}  // namespace leetcode::median_of_two_sorted_arrays

#endif