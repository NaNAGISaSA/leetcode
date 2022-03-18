#ifndef _LEETCODE_SEARCH_A_2D_MATRIX_H_
#define _LEETCODE_SEARCH_A_2D_MATRIX_H_

#include <vector>

namespace leetcode::search_a_2d_matrix {

#define SOLUTION_CLASS_DECLARATION                                                          \
    class Solution {                                                                        \
    public:                                                                                 \
        static bool search_matrix(const std::vector<std::vector<int>>& matrix, int target); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace bs {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::search_a_2d_matrix

#endif