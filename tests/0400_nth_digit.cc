#include "0400_nth_digit.h"

#include <gtest/gtest.h>

using namespace leetcode::nth_digit;

TEST(NTH_DIGIT, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::find_nth_digit(3), 3);
    ASSERT_EQ(Solution::find_nth_digit(11), 0);
    ASSERT_EQ(Solution::find_nth_digit(1234), 4);
}
