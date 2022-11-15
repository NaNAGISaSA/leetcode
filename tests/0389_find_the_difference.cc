#include "0389_find_the_difference.h"

#include <gtest/gtest.h>

using namespace leetcode::find_the_difference;

TEST(FIND_THE_DIFFERENCE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::find_the_difference("abcd", "abcde"), 'e');
    ASSERT_EQ(Solution::find_the_difference("", "y"), 'y');
}
