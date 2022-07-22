#include "0292_nim_game.h"

#include <gtest/gtest.h>

using namespace leetcode::nim_game;

TEST(NIM_GAME, DP_SOLUTION_TEST) {
    ASSERT_TRUE(dp::Solution::can_win(1));
    ASSERT_TRUE(dp::Solution::can_win(2));
    ASSERT_FALSE(dp::Solution::can_win(4));
}

TEST(NIM_GAME, SUMMARY_FROM_DP_SOLUTION_TEST) {
    ASSERT_TRUE(summary_from_dp::Solution::can_win(1));
    ASSERT_TRUE(summary_from_dp::Solution::can_win(2));
    ASSERT_FALSE(summary_from_dp::Solution::can_win(4));
}
