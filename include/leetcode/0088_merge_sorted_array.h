#ifndef _LEETCODE_MERGE_SORTED_ARRAY_H_
#define _LEETCODE_MERGE_SORTED_ARRAY_H_

#include <vector>

namespace leetcode::merge_sorted_array {

class Solution {
public:
    static void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);
};

}  // namespace leetcode::merge_sorted_array

#endif