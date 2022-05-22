#include "0188_best_time_to_buy_and_sell_stock_four.h"

#include <gtest/gtest.h>

using namespace leetcode::best_time_to_buy_and_sell_stock_four;

TEST(BEST_TIME_TO_BUY_AND_SELL_STOCK_FOUR, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_profit({2, 4, 1}, 2), 2);
    ASSERT_EQ(Solution::max_profit({3, 2, 6, 5, 0, 3}, 2), 7);
}
