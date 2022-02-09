#include <gtest/gtest.h>

#include "0045_jump_game_two.h"

using namespace leetcode::jump_game_two;

TEST(JUMP_GAME_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::jump({2, 3, 1, 1, 4}), 2);
    ASSERT_EQ(Solution::jump({2, 3, 0, 1, 4}), 2);
}
