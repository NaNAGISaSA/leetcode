#include "0304_range_sum_query_2d_immutable.h"

namespace leetcode::range_sum_query_2d_immutable {

NumMatrix::NumMatrix(const std::vector<std::vector<int>>& matrix)
    : acc(matrix.size() + 1, std::vector<int>(matrix.front().size() + 1, 0)) {
    size_t m = matrix.size(), n = matrix.front().size();
    for (size_t i = 1; i <= m; ++i) {
        for (size_t j = 1; j <= n; ++j) {
            acc[i][j] = acc[i - 1][j] + acc[i][j - 1] - acc[i - 1][j - 1] + matrix[i - 1][j - 1];
        }
    }
}

int NumMatrix::sum_region(int row1, int col1, int row2, int col2) {
    return acc[row2 + 1][col2 + 1] - acc[row1][col2 + 1] - acc[row2 + 1][col1] + acc[row1][col1];
}

}  // namespace leetcode::range_sum_query_2d_immutable
