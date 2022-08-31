#ifndef LEETCODE_LONGEST_INCREASING_PATH_IN_A_MATRIX_H_
#define LEETCODE_LONGEST_INCREASING_PATH_IN_A_MATRIX_H_

#include <vector>

namespace leetcode::longest_increasing_path_in_a_matrix {

class Solution {
public:
    static int longest_increasing_path(std::vector<std::vector<int>>& matrix);
};

}  // namespace leetcode::longest_increasing_path_in_a_matrix

#endif