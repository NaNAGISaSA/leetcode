#include "0118_pascal_triangle.h"

namespace leetcode::pascal_triangle {

std::vector<std::vector<int>> Solution::generate(int num_rows) {
    std::vector<std::vector<int>> result;
    result.reserve(num_rows);
    for (int i = 0; i < num_rows; ++i) {
        result.push_back(std::vector<int>(i + 1, 1));
        for (int j = 1; j < i; ++j) {
            result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }
    }
    return result;
}

}  // namespace leetcode::pascal_triangle
