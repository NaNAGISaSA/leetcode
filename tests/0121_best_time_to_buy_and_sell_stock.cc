#include <gtest/gtest.h>

#include "0121_best_time_to_buy_and_sell_stock.h"

using namespace leetcode::best_time_to_buy_and_sell_stock;

TEST(BEST_TIME_TO_BUY_AND_SELL_STOCK, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_profit({7, 1, 5, 3, 6, 4}), 5);
    ASSERT_EQ(Solution::max_profit({7, 6, 4, 3, 1}), 0);
}
