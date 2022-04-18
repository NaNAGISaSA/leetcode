#include <gtest/gtest.h>

#include "0123_best_time_to_buy_and_sell_stock_three.h"

using namespace leetcode::best_time_to_buy_and_sell_stock_three;

TEST(BEST_TIME_TO_BUY_AND_SELL_STOCK_THREE, FIRST_DP_SOLUTION) {
    ASSERT_EQ(first_dp::Solution::max_profit({3, 3, 5, 0, 0, 3, 1, 4}), 6);
    ASSERT_EQ(first_dp::Solution::max_profit({1, 2, 3, 4, 5}), 4);
    ASSERT_EQ(first_dp::Solution::max_profit({7, 6, 4, 3, 1}), 0);
    ASSERT_EQ(first_dp::Solution::max_profit({6, 1, 3, 2, 4, 7}), 7);
    ASSERT_EQ(first_dp::Solution::max_profit({1, 4, 2}), 3);
}

TEST(BEST_TIME_TO_BUY_AND_SELL_STOCK_THREE, FASTER_DP_SOLUTION) {
    ASSERT_EQ(faster_dp::Solution::max_profit({3, 3, 5, 0, 0, 3, 1, 4}), 6);
    ASSERT_EQ(faster_dp::Solution::max_profit({1, 2, 3, 4, 5}), 4);
    ASSERT_EQ(faster_dp::Solution::max_profit({7, 6, 4, 3, 1}), 0);
    ASSERT_EQ(faster_dp::Solution::max_profit({6, 1, 3, 2, 4, 7}), 7);
    ASSERT_EQ(faster_dp::Solution::max_profit({1, 4, 2}), 3);
}
