#include "0329_longest_increasing_path_in_a_matrix.h"

#include <algorithm>

namespace leetcode::longest_increasing_path_in_a_matrix {

namespace {
int dfs(const std::vector<std::vector<int>>& matrix,
        size_t i,
        size_t j,
        std::vector<std::vector<int>>& record,
        const std::vector<std::vector<int>> direction) {
    if (record[i][j] != 0) {
        return record[i][j];
    }
    record[i][j] = 1;
    for (const auto& direct : direction) {
        size_t next_i = i + direct[0], next_j = j + direct[1];
        if (next_i >= matrix.size() || next_j >= matrix[0].size() || matrix[next_i][next_j] <= matrix[i][j]) {
            continue;
        }
        record[i][j] = std::max(record[i][j], 1 + dfs(matrix, next_i, next_j, record, direction));
    }
    return record[i][j];
}
}  // namespace

int Solution::longest_increasing_path(std::vector<std::vector<int>>& matrix) {
    size_t m = matrix.size(), n = matrix[0].size();
    std::vector<std::vector<int>> record(m, std::vector<int>(n, 0));
    std::vector<std::vector<int>> direction({{1, 0}, {-1, 0}, {0, 1}, {0, -1}});
    int result = 1;
    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {
            result = std::max(result, dfs(matrix, i, j, record, direction));
        }
    }
    return result;
}

}  // namespace leetcode::longest_increasing_path_in_a_matrix
