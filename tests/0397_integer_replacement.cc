#include "0397_integer_replacement.h"

#include <gtest/gtest.h>

using namespace leetcode::integer_replacement;

TEST(INTEGER_REPLACEMENT, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::integer_replacement(8), 3);
    ASSERT_EQ(Solution::integer_replacement(7), 4);
    ASSERT_EQ(Solution::integer_replacement(4), 2);
    ASSERT_EQ(Solution::integer_replacement(2147483647), 32);
}
