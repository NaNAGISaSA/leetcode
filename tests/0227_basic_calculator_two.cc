#include "0227_basic_calculator_two.h"

#include <gtest/gtest.h>

using namespace leetcode::basic_calculator_two;

TEST(BASIC_CALCULATOR, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::calculate("3+2*2"), 7);
    ASSERT_EQ(Solution::calculate(" 3+5 / 2 "), 5);
}
