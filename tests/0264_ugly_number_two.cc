#include "0264_ugly_number_two.h"

#include <gtest/gtest.h>

using namespace leetcode::ugly_number_two;

TEST(UGLY_NUMBER_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::nth_ugly_number(1), 1);
    ASSERT_EQ(Solution::nth_ugly_number(10), 12);
}
