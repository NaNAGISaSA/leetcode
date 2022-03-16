#include "0073_set_matrix_zeroes.h"

namespace leetcode::set_matrix_zeroes {

void Solution::set_zeroes(std::vector<std::vector<int>>& matrix) {
    // use the first cell of every row and column as a flag to achieve O(1) space
    int row = static_cast<int>(matrix.size()), column = static_cast<int>(matrix[0].size());
    bool first_row_zero = false, first_column_zero = false;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            if (matrix[i][j] == 0) {
                if (i == 0) {
                    first_row_zero = true;
                } else {
                    matrix[i][0] = 0;
                }
                if (j == 0) {
                    first_column_zero = true;
                } else {
                    matrix[0][j] = 0;
                }
            }
        }
    }
    for (int i = 1; i < row; ++i) {
        if (matrix[i][0] == 0) {
            for (int j = 0; j < column; ++j) {
                matrix[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < column; ++i) {
        if (matrix[0][i] == 0) {
            for (int j = 0; j < row; ++j) {
                matrix[j][i] = 0;
            }
        }
    }
    if (first_row_zero) {
        for (int i = 0; i < column; ++i) {
            matrix[0][i] = 0;
        }
    }
    if (first_column_zero) {
        for (int i = 0; i < row; ++i) {
            matrix[i][0] = 0;
        }
    }
}

}  // namespace leetcode::set_matrix_zeroes
