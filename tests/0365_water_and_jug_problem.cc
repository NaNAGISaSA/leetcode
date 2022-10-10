#include "0365_water_and_jug_problem.h"

#include <gtest/gtest.h>

using namespace leetcode::water_and_jug_problem;

TEST(WATER_AND_JUG_PROBLEM, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::can_measure_water(3, 5, 4));
    ASSERT_TRUE(Solution::can_measure_water(1, 2, 3));
    ASSERT_FALSE(Solution::can_measure_water(2, 6, 5));
}
