#include "0037_sudoku_solver.h"

namespace leetcode::sudoku_solver {

namespace {
bool is_valid(std::vector<std::vector<char>>& board, int row, int column, char num) {
    for (int i = 0; i < 9; ++i) {
        if (board[row][i] == num || board[i][column] == num ||
            board[row / 3 * 3 + i / 3][column / 3 * 3 + i % 3] == num) {
            return false;
        }
    }
    return true;
}

bool solve(std::vector<std::vector<char>>& board, int row, int column) {
    if (row == 9) {
        return true;
    }
    if (column == 9) {
        return solve(board, row + 1, 0);
    }
    for (int i = row; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] == '.') {
                for (char num = '1'; num <= '9'; ++num) {
                    if (is_valid(board, i, j, num)) {
                        board[i][j] = num;
                        if (solve(board, i, j + 1)) {
                            return true;
                        }
                    }
                }
                board[i][j] = '.';
                return false;
            }
        }
    }
    return true;
}
}  // namespace

void Solution::solve_sudoku(std::vector<std::vector<char>>& board) {
    // this problem is the same as N queue problem
    solve(board, 0, 0);
}

}  // namespace leetcode::sudoku_solver
