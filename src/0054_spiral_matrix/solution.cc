#include "0054_spiral_matrix.h"

namespace leetcode::spiral_matrix {

std::vector<int> Solution::spiral_order(const std::vector<std::vector<int>>& matrix) {
    std::vector<int> result;
    result.reserve(matrix.size() * matrix[0].size());
    auto circle = [&result, &matrix](int row0, int row1, int col0, int col1) {
        if (row0 == row1) {
            while (col0 <= col1) {
                result.push_back(matrix[row0][col0++]);
            }
        } else if (col0 == col1) {
            while (row0 <= row1) {
                result.push_back(matrix[row0++][col0]);
            }
        } else {
            for (int i = col0; i <= col1; ++i) {
                result.push_back(matrix[row0][i]);
            }
            for (int i = row0 + 1; i <= row1; ++i) {
                result.push_back(matrix[i][col1]);
            }
            for (int i = col1 - 1; i >= col0; --i) {
                result.push_back(matrix[row1][i]);
            }
            for (int i = row1 - 1; i >= row0 + 1; --i) {
                result.push_back(matrix[i][col0]);
            }
        }
    };

    int row0 = 0, row1 = static_cast<int>(matrix.size() - 1);
    int col0 = 0, col1 = static_cast<int>(matrix[0].size() - 1);
    while (row0 <= row1 && col0 <= col1) {
        circle(row0, row1, col0, col1);
        ++row0;
        --row1;
        ++col0;
        --col1;
    }
    return result;
}

}  // namespace leetcode::spiral_matrix
