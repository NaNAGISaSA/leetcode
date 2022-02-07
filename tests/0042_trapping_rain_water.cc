#include <gtest/gtest.h>

#include "0042_trapping_rain_water.h"

using namespace leetcode::trapping_rain_water;

TEST(TRAPPING_RAIN_WATER, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first::Solution::trap({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}), 6);
    ASSERT_EQ(first::Solution::trap({4, 2, 0, 3, 2, 5}), 9);
}

TEST(TRAPPING_RAIN_WATER, TWO_POINTERS_TEST) {
    ASSERT_EQ(two_pointers::Solution::trap({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}), 6);
    ASSERT_EQ(two_pointers::Solution::trap({4, 2, 0, 3, 2, 5}), 9);
}
