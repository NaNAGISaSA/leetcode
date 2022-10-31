#ifndef LEETCODE_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX_H_
#define LEETCODE_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX_H_

#include <vector>

namespace leetcode::kth_smallest_element_in_a_sorted_matrix {

class Solution {
public:
    static int kth_smallest(const std::vector<std::vector<int>>& matrix, int k);
};

}  // namespace leetcode::kth_smallest_element_in_a_sorted_matrix

#endif