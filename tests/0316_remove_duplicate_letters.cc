#include "0316_remove_duplicate_letters.h"

#include <gtest/gtest.h>

using namespace leetcode::remove_duplicate_letters;

TEST(REMOVE_DUPLICATE_LETTERS, SELECT_SOLUTION_TEST) {
    ASSERT_EQ(select::Solution::remove_duplicate_letters("bcabc"), "abc");
    ASSERT_EQ(select::Solution::remove_duplicate_letters("cbacdcbc"), "acdb");
}

TEST(REMOVE_DUPLICATE_LETTERS, DEQUE_SOLUTION_TEST) {
    ASSERT_EQ(deque::Solution::remove_duplicate_letters("bcabc"), "abc");
    ASSERT_EQ(deque::Solution::remove_duplicate_letters("cbacdcbc"), "acdb");
}
