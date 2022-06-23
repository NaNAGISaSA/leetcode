#include "0221_maximal_square.h"

#include <algorithm>

namespace leetcode::maximal_square::dp {

int Solution::maximal_square(std::vector<std::vector<char>>& matrix) {
    size_t m = matrix.size(), n = matrix[0].size();
    std::vector<std::vector<int>> dp_mat(m, std::vector<int>(n, 0));
    int result = 0;
    for (size_t i = m - 1; i < m; --i) {
        for (size_t j = n - 1; j < n; --j) {
            if (matrix[i][j] == '0') {
                continue;
            }
            if (i == m - 1 || j == n - 1) {
                dp_mat[i][j] = 1;
            } else if (dp_mat[i][j + 1] == dp_mat[i + 1][j]) {
                int len = dp_mat[i][j + 1];
                dp_mat[i][j] = len + (matrix[i + len][j + len] == '1' ? 1 : 0);
            } else {
                dp_mat[i][j] = 1 + std::min(dp_mat[i][j + 1], dp_mat[i + 1][j]);
            }
            result = std::max(result, dp_mat[i][j]);
        }
    }
    return result * result;
}

}  // namespace leetcode::maximal_square::dp
