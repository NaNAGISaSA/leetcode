#include "0227_basic_calculator_two.h"

#include <gtest/gtest.h>

using namespace leetcode::basic_calculator_two;

TEST(BASIC_CALCULATOR_TWO, DEQUE_SOLUTION_TEST) {
    ASSERT_EQ(deque::Solution::calculate("3+2*2"), 7);
    ASSERT_EQ(deque::Solution::calculate(" 3+5 / 2 "), 5);
}

TEST(BASIC_CALCULATOR_TWO, STACK_SOLUTION_TEST) {
    ASSERT_EQ(stack::Solution::calculate("3+2*2"), 7);
    ASSERT_EQ(stack::Solution::calculate("0-2"), -2);
    ASSERT_EQ(stack::Solution::calculate(" 3+5 / 2 "), 5);
}
