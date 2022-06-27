#include "0232_implement_queue_using_stacks.h"

#include <gtest/gtest.h>

using namespace leetcode::implement_queue_using_stacks;

TEST(IMPLEMENT_QUEUE_USING_STACKS, EXAMPLE_TEST) {
    MyQueue queue;
    queue.push(1);
    queue.push(2);
    ASSERT_EQ(queue.peek(), 1);
    ASSERT_EQ(queue.pop(), 1);
    ASSERT_FALSE(queue.empty());
    ASSERT_EQ(queue.pop(), 2);
    ASSERT_TRUE(queue.empty());
}
