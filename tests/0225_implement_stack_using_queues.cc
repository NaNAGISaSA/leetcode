#include "0225_implement_stack_using_queues.h"

#include <gtest/gtest.h>

using namespace leetcode::implement_stack_using_queues;

TEST(IMPLEMENT_STACK_USING_QUEUES, EXAMPLE_TEST) {
    MyStack stack;
    stack.push(1);
    stack.push(2);
    ASSERT_EQ(stack.top(), 2);
    ASSERT_EQ(stack.pop(), 2);
    ASSERT_EQ(stack.top(), 1);
    ASSERT_FALSE(stack.empty());
    ASSERT_EQ(stack.pop(), 1);
    ASSERT_TRUE(stack.empty());
}
