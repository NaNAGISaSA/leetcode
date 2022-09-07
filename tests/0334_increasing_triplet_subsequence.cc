#include "0334_increasing_triplet_subsequence.h"

#include <gtest/gtest.h>

using namespace leetcode::increasing_triplet_subsequence;

TEST(INCREASING_TRIPLET_SUBSEQUENCE, FIRST_SOLUTION_TEST) {
    ASSERT_TRUE(first::Solution::increasing_triplet({1, 2, 3, 4, 5}));
    ASSERT_TRUE(first::Solution::increasing_triplet({2, 1, 5, 0, 4, 6}));
    ASSERT_TRUE(first::Solution::increasing_triplet({2, 3, 1, 6}));
    ASSERT_FALSE(first::Solution::increasing_triplet({5, 4, 3, 2, 1}));
}

TEST(INCREASING_TRIPLET_SUBSEQUENCE, CLEANER_SOLUTION_TEST) {
    ASSERT_TRUE(cleaner::Solution::increasing_triplet({1, 2, 3, 4, 5}));
    ASSERT_TRUE(cleaner::Solution::increasing_triplet({2, 1, 5, 0, 4, 6}));
    ASSERT_TRUE(cleaner::Solution::increasing_triplet({2, 3, 1, 6}));
    ASSERT_FALSE(cleaner::Solution::increasing_triplet({5, 4, 3, 2, 1}));
}
