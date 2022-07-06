#include "0258_add_digits.h"

#include <gtest/gtest.h>

using namespace leetcode::add_digits;

TEST(ADD_DIGITS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::add_digits(38), 2);
    ASSERT_EQ(Solution::add_digits(0), 0);
}
