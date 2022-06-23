#include "0224_basic_calculator.h"

#include <gtest/gtest.h>

using namespace leetcode::basic_calculator;

TEST(BASIC_CALCULATOR, DEQUE_SOLUTION_TEST) {
    ASSERT_EQ(deque::Solution::calculate(" -2-1 + 2 "), -1);
    ASSERT_EQ(deque::Solution::calculate("(1+(4+5+2)-3)+(6+8)"), 23);
}

TEST(BASIC_CALCULATOR, STACK_SOLUTION_TEST) {
    ASSERT_EQ(stack::Solution::calculate(" -2-1 + 2 "), -1);
    ASSERT_EQ(stack::Solution::calculate("(1+(4+5+2)-3)+(6+8)"), 23);
}
