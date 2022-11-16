#include "0390_elimination_game.h"

#include <gtest/gtest.h>

using namespace leetcode::elimination_game;

TEST(ELIMINATION_GAME, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::last_remaining(9), 6);
    ASSERT_EQ(Solution::last_remaining(1), 1);
}
