#ifndef _LEETCODE_SPIRAL_MATRIX_H_
#define _LEETCODE_SPIRAL_MATRIX_H_

#include <vector>

namespace leetcode::spiral_matrix {

class Solution {
public:
    static std::vector<int> spiral_order(const std::vector<std::vector<int>>& matrix);
};

}  // namespace leetcode::spiral_matrix

#endif