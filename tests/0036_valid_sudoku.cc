#include <gtest/gtest.h>

#include "0036_valid_sudoku.h"

using namespace leetcode::valid_sudoku;

TEST(VALID_SUDOKU, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_valid_sudoku({{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                           {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                           {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                           {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                           {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                           {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                           {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                           {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                           {'.', '.', '.', '.', '8', '.', '.', '7', '9'}}));
    ASSERT_FALSE(Solution::is_valid_sudoku({{'8', '3', '.', '.', '7', '.', '.', '.', '.'},
                                            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}}));
}