#include "0343_integer_break.h"

#include <gtest/gtest.h>

using namespace leetcode::integer_break;

TEST(INTEGER_BREAK, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::integer_break(2), 1);
    ASSERT_EQ(Solution::integer_break(10), 36);
}
