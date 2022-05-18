#include "0166_fraction_to_recurring_decimal.h"

#include <gtest/gtest.h>

using namespace leetcode::fraction_to_recurring_decimal;

TEST(FRACTION_TO_RECURRING_DECIMAL, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::fraction_to_decimal(1, 2), "0.5");
    ASSERT_EQ(Solution::fraction_to_decimal(2, -1), "-2");
    ASSERT_EQ(Solution::fraction_to_decimal(4, 333), "0.(012)");
}
