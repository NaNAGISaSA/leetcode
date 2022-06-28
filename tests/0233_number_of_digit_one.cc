#include "0233_number_of_digit_one.h"

#include <gtest/gtest.h>

using namespace leetcode::number_of_digit_one;

TEST(NUMBER_OF_DIGIT_ONE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::count_digit_one(0), 0);
    ASSERT_EQ(Solution::count_digit_one(13), 6);
}
