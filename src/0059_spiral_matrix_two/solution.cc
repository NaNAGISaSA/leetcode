#include "0059_spiral_matrix_two.h"

namespace leetcode::spiral_matrix_two {

std::vector<std::vector<int>> Solution::generate_matrix(int n) {
    std::vector<std::vector<int>> result(n, std::vector<int>(n, 0));
    int left_top = 0, num = 1;
    while (n > 0) {
        for (int i = 0; i < n; ++i) {
            result[left_top][left_top + i] = num++;
        }
        for (int i = 0; i < n - 1; ++i) {
            result[left_top + 1 + i][left_top + n - 1] = num++;
        }
        for (int i = 0; i < n - 1; ++i) {
            result[left_top + n - 1][left_top + n - 2 - i] = num++;
        }
        for (int i = 0; i < n - 2; ++i) {
            result[left_top + n - 2 - i][left_top] = num++;
        }
        ++left_top;
        n -= 2;
    }
    return result;
}

}  // namespace leetcode::spiral_matrix_two
