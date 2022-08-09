#include "0309_best_time_to_buy_and_sell_stock_with_cooldown.h"

#include <gtest/gtest.h>

using namespace leetcode::best_time_to_buy_and_sell_stock_with_cooldown;

TEST(BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_COOLDOWN, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_profit({1, 2, 3, 0, 2}), 3);
    ASSERT_EQ(Solution::max_profit({1}), 0);
}
