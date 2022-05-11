#include <gtest/gtest.h>

#include "0155_min_stack.h"

using namespace leetcode::min_stack;

TEST(MIN_STACK, EXAMPLE_TEST) {
    MinStack min_stack;
    min_stack.push(-2);
    min_stack.push(0);
    min_stack.push(-3);
    ASSERT_EQ(min_stack.getMin(), -3);
    min_stack.pop();
    ASSERT_EQ(min_stack.top(), 0);
    ASSERT_EQ(min_stack.getMin(), -2);
}
