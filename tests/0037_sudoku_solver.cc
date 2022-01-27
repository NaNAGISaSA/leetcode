#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0037_sudoku_solver.h"

using namespace leetcode::sudoku_solver;

TEST(SUDOKU_SOLVER, EXAMPLE_TEST) {
    std::vector<std::vector<char>> board{{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                         {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                         {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                         {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                         {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                         {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                         {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                         {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                         {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    Solution::solve_sudoku(board);
    ASSERT_THAT(board[0], testing::ElementsAre('5', '3', '4', '6', '7', '8', '9', '1', '2'));
    ASSERT_THAT(board[1], testing::ElementsAre('6', '7', '2', '1', '9', '5', '3', '4', '8'));
    ASSERT_THAT(board[2], testing::ElementsAre('1', '9', '8', '3', '4', '2', '5', '6', '7'));
    ASSERT_THAT(board[3], testing::ElementsAre('8', '5', '9', '7', '6', '1', '4', '2', '3'));
    ASSERT_THAT(board[4], testing::ElementsAre('4', '2', '6', '8', '5', '3', '7', '9', '1'));
    ASSERT_THAT(board[5], testing::ElementsAre('7', '1', '3', '9', '2', '4', '8', '5', '6'));
    ASSERT_THAT(board[6], testing::ElementsAre('9', '6', '1', '5', '3', '7', '2', '8', '4'));
    ASSERT_THAT(board[7], testing::ElementsAre('2', '8', '7', '4', '1', '9', '6', '3', '5'));
    ASSERT_THAT(board[8], testing::ElementsAre('3', '4', '5', '2', '8', '6', '1', '7', '9'));
}
