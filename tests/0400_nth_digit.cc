#include "0400_nth_digit.h"

#include <gtest/gtest.h>

using namespace leetcode::nth_digit;

TEST(NTH_DIGIT, RECURSE_SOLUTION_TEST) {
    ASSERT_EQ(recurse::Solution::find_nth_digit(3), 3);
    ASSERT_EQ(recurse::Solution::find_nth_digit(11), 0);
    ASSERT_EQ(recurse::Solution::find_nth_digit(1234), 4);
    ASSERT_EQ(recurse::Solution::find_nth_digit(1000000000), 1);
}

TEST(NTH_DIGIT, CLEAN_SOLUTION_TEST) {
    ASSERT_EQ(clean::Solution::find_nth_digit(3), 3);
    ASSERT_EQ(clean::Solution::find_nth_digit(11), 0);
    ASSERT_EQ(clean::Solution::find_nth_digit(1234), 4);
    ASSERT_EQ(clean::Solution::find_nth_digit(1000000000), 1);
}
