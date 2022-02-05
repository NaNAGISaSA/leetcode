#include <gtest/gtest.h>

#include "0042_trapping_rain_water.h"

using namespace leetcode::trapping_rain_water;

TEST(TRAPPING_RAIN_WATER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::trap({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}), 6);
    ASSERT_EQ(Solution::trap({4, 2, 0, 3, 2, 5}), 9);
}
