#include <gtest/gtest.h>

#include "0137_single_number_two.h"

using namespace leetcode::single_number_two;

TEST(SINGLE_NUMBER_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::single_number({0, 1, 0, 1, 0, 1, 9}), 9);
    ASSERT_EQ(Solution::single_number({0, -1, 0, -7, -1, 0, -1}), -7);
}
