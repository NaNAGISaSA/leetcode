#include "0289_game_of_life.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::game_of_life;

TEST(GAME_OF_LIFE, FIRST_SOLUTION_TEST) {
    std::vector<std::vector<int>> board = {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}};
    first::Solution::game_of_life(board);
    ASSERT_THAT(board[0], testing::ElementsAre(0, 0, 0));
    ASSERT_THAT(board[1], testing::ElementsAre(1, 0, 1));
    ASSERT_THAT(board[2], testing::ElementsAre(0, 1, 1));
    ASSERT_THAT(board[3], testing::ElementsAre(0, 1, 0));
}

TEST(GAME_OF_LIFE, CLEANER_SOLUTION_TEST) {
    std::vector<std::vector<int>> board = {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}};
    cleaner::Solution::game_of_life(board);
    ASSERT_THAT(board[0], testing::ElementsAre(0, 0, 0));
    ASSERT_THAT(board[1], testing::ElementsAre(1, 0, 1));
    ASSERT_THAT(board[2], testing::ElementsAre(0, 1, 1));
    ASSERT_THAT(board[3], testing::ElementsAre(0, 1, 0));
}
