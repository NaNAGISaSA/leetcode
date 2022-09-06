#include "0334_increasing_triplet_subsequence.h"

#include <gtest/gtest.h>

using namespace leetcode::increasing_triplet_subsequence;

TEST(INCREASING_TRIPLET_SUBSEQUENCE, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::increasing_triplet({1, 2, 3, 4, 5}));
    ASSERT_TRUE(Solution::increasing_triplet({2, 1, 5, 0, 4, 6}));
    ASSERT_TRUE(Solution::increasing_triplet({2, 3, 1, 6}));
    ASSERT_FALSE(Solution::increasing_triplet({5, 4, 3, 2, 1}));
}
