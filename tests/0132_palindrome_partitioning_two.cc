#include <gtest/gtest.h>

#include "0132_palindrome_partitioning_two.h"

using namespace leetcode::palindrome_partitioning_two;

TEST(PALINDROME_PARTITIONING_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::min_cut("aab"), 1);
    ASSERT_EQ(Solution::min_cut("a"), 0);
}
