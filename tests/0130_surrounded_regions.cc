#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0130_surrounded_regions.h"

using namespace leetcode::surrounded_regions;

TEST(SURROUNDED_REGIONS, EXAMPLE_TEST) {
    std::vector<std::vector<char>> board(
        {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}});
    Solution::solve(board);
    ASSERT_THAT(board[0], testing::ElementsAre('X', 'X', 'X', 'X'));
    ASSERT_THAT(board[1], testing::ElementsAre('X', 'X', 'X', 'X'));
    ASSERT_THAT(board[2], testing::ElementsAre('X', 'X', 'X', 'X'));
    ASSERT_THAT(board[3], testing::ElementsAre('X', 'O', 'X', 'X'));
}
