#include "0231_power_of_two.h"

#include <gtest/gtest.h>

using namespace leetcode::power_of_two;

TEST(POWER_OF_TWO, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_power_of_two(1));
    ASSERT_TRUE(Solution::is_power_of_two(16));
    ASSERT_FALSE(Solution::is_power_of_two(5));
}
