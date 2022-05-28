#include "0202_happy_number.h"

#include <gtest/gtest.h>

using namespace leetcode::happy_number;

TEST(HAPPY_NUMBER, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_happy(19));
    ASSERT_FALSE(Solution::is_happy(2));
}
