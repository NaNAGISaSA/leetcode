#include "0074_search_a_2d_matrix.h"

namespace leetcode::search_a_2d_matrix::bs {

bool Solution::search_matrix(const std::vector<std::vector<int>>& matrix, int target) {
    int m = static_cast<int>(matrix.size()), n = static_cast<int>(matrix[0].size());
    int left = 0, middle = 0, right = m * n - 1;
    while (left <= right) {
        middle = left + (right - left) / 2;
        if (matrix[middle / n][middle % n] == target) {
            return true;
        } else if (matrix[middle / n][middle % n] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return false;
}

}  // namespace leetcode::search_a_2d_matrix::bs
