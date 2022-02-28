#include <gtest/gtest.h>

#include "0060_permutation_sequence.h"

using namespace leetcode::permutation_sequence;

TEST(PERMUTATION_SEQUENCE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::get_permutation(2, 2), "21");
    ASSERT_EQ(Solution::get_permutation(3, 3), "213");
    ASSERT_EQ(Solution::get_permutation(3, 1), "123");
    ASSERT_EQ(Solution::get_permutation(4, 9), "2314");
}
