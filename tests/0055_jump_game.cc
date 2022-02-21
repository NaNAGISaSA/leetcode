#include <gtest/gtest.h>

#include "0055_jump_game.h"

using namespace leetcode::jump_game;

TEST(JUMP_GAME, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::can_jump({2, 3, 1, 1, 4}));
    ASSERT_FALSE(Solution::can_jump({3, 2, 1, 0, 4}));
}
