#include "0174_dungeon_game.h"

#include <gtest/gtest.h>

using namespace leetcode::dungeon_game;

TEST(DUNGEON_GAME, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::calculate_minimum_hp({{-2, -3, 3}, {-5, -10, 1}, {10, 30, -5}}), 7);
}
