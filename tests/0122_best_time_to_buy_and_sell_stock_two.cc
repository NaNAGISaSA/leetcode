#include <gtest/gtest.h>

#include "0122_best_time_to_buy_and_sell_stock_two.h"

using namespace leetcode::best_time_to_buy_and_sell_stock_two;

TEST(BEST_TIME_TO_BUY_AND_SELL_STOCK_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_profit({7, 1, 5, 3, 6, 4}), 7);
    ASSERT_EQ(Solution::max_profit({1, 2, 3, 4, 5}), 4);
    ASSERT_EQ(Solution::max_profit({7, 6, 4, 3, 1}), 0);
}
