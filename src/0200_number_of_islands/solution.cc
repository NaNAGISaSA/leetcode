#include "0200_number_of_islands.h"

namespace leetcode::number_of_islands {

namespace {
void traverse_island(std::vector<std::vector<char>>& grid,
                     size_t row,
                     size_t column,
                     size_t max_row,
                     size_t max_column) {
    if (row >= max_row || column >= max_column || grid[row][column] != '1') {
        return;
    }
    grid[row][column] = '#';
    traverse_island(grid, row - 1, column, max_row, max_column);
    traverse_island(grid, row + 1, column, max_row, max_column);
    traverse_island(grid, row, column - 1, max_row, max_column);
    traverse_island(grid, row, column + 1, max_row, max_column);
}
}  // namespace

int Solution::num_islands(std::vector<std::vector<char>>& grid) {
    size_t m = grid.size(), n = grid[0].size();
    int num = 0;
    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {
            if (grid[i][j] == '1') {
                traverse_island(grid, i, j, m, n);
                ++num;
            }
        }
    }
    return num;
}

}  // namespace leetcode::number_of_islands
