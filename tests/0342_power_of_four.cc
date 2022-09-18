#include "0342_power_of_four.h"

#include <gtest/gtest.h>

using namespace leetcode::power_of_four;

TEST(POWER_OF_FOUR, COMMON_SOLUTION_TEST) {
    ASSERT_TRUE(common::Solution::is_power_of_four(16));
    ASSERT_TRUE(common::Solution::is_power_of_four(1));
    ASSERT_FALSE(common::Solution::is_power_of_four(5));
}

TEST(POWER_OF_FOUR, TRICK_SOLUTION_TEST) {
    ASSERT_TRUE(trick::Solution::is_power_of_four(16));
    ASSERT_TRUE(trick::Solution::is_power_of_four(1));
    ASSERT_FALSE(trick::Solution::is_power_of_four(5));
}
