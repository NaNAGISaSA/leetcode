#include "0224_basic_calculator.h"

#include <gtest/gtest.h>

using namespace leetcode::basic_calculator;

TEST(BASIC_CALCULATOR, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::calculate(" 2-1 + 2 "), 3);
    ASSERT_EQ(Solution::calculate("(1+(4+5+2)-3)+(6+8)"), 23);
}
