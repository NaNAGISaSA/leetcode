#include "0221_maximal_square.h"

#include <algorithm>

namespace leetcode::maximal_square {

int Solution::maximal_square(std::vector<std::vector<char>>& matrix) {
    size_t m = matrix.size(), n = matrix[0].size();
    std::vector<std::vector<int>> forward(m, std::vector<int>(n, 0)), down(m, std::vector<int>(n, 0));
    for (size_t i = 0; i < m; ++i) {
        forward[i][n - 1] = matrix[i][n - 1] == '1' ? 1 : 0;
        for (size_t j = n - 2; j < n; --j) {
            forward[i][j] = matrix[i][j] == '1' ? forward[i][j + 1] + 1 : 0;
        }
    }
    for (size_t j = 0; j < n; ++j) {
        down[m - 1][j] = matrix[m - 1][j] == '1' ? 1 : 0;
        for (size_t i = m - 2; i < m; --i) {
            down[i][j] = matrix[i][j] == '1' ? down[i + 1][j] + 1 : 0;
        }
    }
    int max_square = 0;
    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {
            int max_length = std::min(forward[i][j], down[i][j]);
            for (int k = 0; k < max_length; ++k) {
                if (forward[i + k][j] <= k || down[i][j + k] <= k) {
                    break;
                }
                max_square = std::max(max_square, k + 1);
            }
        }
    }
    return max_square * max_square;
}

}  // namespace leetcode::maximal_square
