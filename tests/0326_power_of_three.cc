#include "0326_power_of_three.h"

#include <gtest/gtest.h>

using namespace leetcode::power_of_three;

TEST(POWER_OF_THREE, COMMON_SOLUTION_TEST) {
    ASSERT_FALSE(common::Solution::is_power_of_three(-1));
    ASSERT_FALSE(common::Solution::is_power_of_three(0));
    ASSERT_TRUE(common::Solution::is_power_of_three(1));
    ASSERT_TRUE(common::Solution::is_power_of_three(27));
}

TEST(POWER_OF_THREE, TRICK_SOLUTION_TEST) {
    ASSERT_FALSE(trick::Solution::is_power_of_three(-1));
    ASSERT_FALSE(trick::Solution::is_power_of_three(0));
    ASSERT_TRUE(trick::Solution::is_power_of_three(1));
    ASSERT_TRUE(trick::Solution::is_power_of_three(27));
}
