#include "0201_bitwise_and_of_numbers_range.h"

#include <gtest/gtest.h>

using namespace leetcode::bitwise_and_of_numbers_range;

TEST(BITWISE_AND_OF_NUMBERS_RANGE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::range_bitwise_and(3, 4), 0);
    ASSERT_EQ(Solution::range_bitwise_and(5, 7), 4);
    ASSERT_EQ(Solution::range_bitwise_and(6, 7), 6);
    ASSERT_EQ(Solution::range_bitwise_and(6, 8), 0);
    ASSERT_EQ(Solution::range_bitwise_and(0, 0), 0);
    ASSERT_EQ(Solution::range_bitwise_and(1, 2147483647), 0);
}
