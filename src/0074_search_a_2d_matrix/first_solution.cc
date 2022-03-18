#include "0074_search_a_2d_matrix.h"

namespace leetcode::search_a_2d_matrix::first {

bool Solution::search_matrix(const std::vector<std::vector<int>>& matrix, int target) {
    auto binary_search = [&matrix, &target](int row) {
        int left = 0, right = static_cast<int>(matrix[row].size() - 1);
        int middle = 0;
        while (left <= right) {
            middle = left + (right - left) / 2;
            if (matrix[row][middle] == target) {
                return true;
            } else if (matrix[row][middle] > target) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return false;
    };

    for (int i = static_cast<int>(matrix.size() - 1); i >= 0; --i) {
        if (target > matrix[i][matrix[i].size() - 1]) {
            return false;
        }
        if (target >= matrix[i][0]) {
            return binary_search(i);
        }
    }
    return false;
}

}  // namespace leetcode::search_a_2d_matrix::first
