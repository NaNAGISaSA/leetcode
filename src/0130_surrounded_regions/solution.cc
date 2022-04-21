#include "0130_surrounded_regions.h"

namespace leetcode::surrounded_regions {

namespace {
void dfs_from_boarder(std::vector<std::vector<char>>& board, int row, int col, int m, int n) {
    if (row < 0 || row >= m || col < 0 || col >= n) {
        return;
    }
    if (board[row][col] == 'O') {
        board[row][col] = '#';
        dfs_from_boarder(board, row - 1, col, m, n);
        dfs_from_boarder(board, row + 1, col, m, n);
        dfs_from_boarder(board, row, col - 1, m, n);
        dfs_from_boarder(board, row, col + 1, m, n);
    }
}
}  // namespace

void Solution::solve(std::vector<std::vector<char>>& board) {
    int m = static_cast<int>(board.size()), n = static_cast<int>(board[0].size());
    // step 1: dfs from boarder
    for (int i = 0; i < n; ++i) {
        if (board[0][i] == 'O') {
            dfs_from_boarder(board, 0, i, m, n);
        }
        if (board[m - 1][i] == 'O') {
            dfs_from_boarder(board, m - 1, i, m, n);
        }
    }
    for (int i = 0; i < m; ++i) {
        if (board[i][0] == 'O') {
            dfs_from_boarder(board, i, 0, m, n);
        }
        if (board[i][n - 1] == 'O') {
            dfs_from_boarder(board, i, n - 1, m, n);
        }
    }
    // step 2: flip 'O' to 'X'
    // step 3: flip '#' to 'O'
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 'O') {
                board[i][j] = 'X';
            }
            if (board[i][j] == '#') {
                board[i][j] = 'O';
            }
        }
    }
}

}  // namespace leetcode::surrounded_regions
