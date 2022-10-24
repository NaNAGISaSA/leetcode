#include "0375_guess_number_higher_or_lower_two.h"

#include <gtest/gtest.h>

using namespace leetcode::guess_number_higher_or_lower_two;

TEST(GUESS_NUMBER_HIGHER_OR_LOWER_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::get_money_amount(1), 0);
    ASSERT_EQ(Solution::get_money_amount(2), 1);
    ASSERT_EQ(Solution::get_money_amount(6), 8);
    ASSERT_EQ(Solution::get_money_amount(10), 16);
}
