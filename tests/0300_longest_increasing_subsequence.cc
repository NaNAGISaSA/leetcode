#include "0300_longest_increasing_subsequence.h"

#include <gtest/gtest.h>

using namespace leetcode::longest_increasing_subsequence;

TEST(LONGEST_INCREASING_SUBSEQUENCE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::length_of_lis({10, 9, 2, 5, 3, 7, 101, 18}), 4);
    ASSERT_EQ(Solution::length_of_lis({0, 1, 0, 3, 2, 3}), 4);
    ASSERT_EQ(Solution::length_of_lis({7, 7, 7, 7, 7, 7, 7}), 1);
}
