#include "0316_remove_duplicate_letters.h"

#include <gtest/gtest.h>

using namespace leetcode::remove_duplicate_letters;

TEST(REMOVE_DUPLICATE_LETTERS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::remove_duplicate_letters("bcabc"), "abc");
    ASSERT_EQ(Solution::remove_duplicate_letters("cbacdcbc"), "acdb");
}
