#include "0240_search_a_two_dim_matrix_two.h"

namespace leetcode::search_a_two_dim_matrix_two {

bool Solution::search_matrix(const std::vector<std::vector<int>>& matrix, int target) {
    size_t m = matrix.size(), n = matrix[0].size();
    size_t row = 0, column = n - 1;
    while (row < m && column < n) {
        int number = matrix[row][column];
        if (number == target) {
            return true;
        } else if (number > target) {
            --column;
        } else {
            ++row;
        }
    }
    return false;
}

}  // namespace leetcode::search_a_two_dim_matrix_two
