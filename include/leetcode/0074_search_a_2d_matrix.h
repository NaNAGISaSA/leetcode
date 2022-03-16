#ifndef _LEETCODE_SEARCH_A_2D_MATRIX_H_
#define _LEETCODE_SEARCH_A_2D_MATRIX_H_

#include <vector>

namespace leetcode::search_a_2d_matrix {

class Solution {
public:
    static bool search_matrix(const std::vector<std::vector<int>>& matrix, int target);
};

}  // namespace leetcode::search_a_2d_matrix

#endif