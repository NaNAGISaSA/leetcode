#include "0306_additive_number.h"

#include <gtest/gtest.h>

using namespace leetcode::additive_number;

TEST(ADDITIVE_NUMBER, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_additive_number("112358"));
    ASSERT_TRUE(Solution::is_additive_number("199100199"));
}
