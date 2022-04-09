#include <gtest/gtest.h>

#include "0128_longest_consecutive_sequence.h"

using namespace leetcode::longest_consecutive_sequence;

TEST(LONGEST_CONSECUTIVE_SEQUENCE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::longest_consecutive({100, 4, 200, 1, 3, 2}), 4);
    ASSERT_EQ(Solution::longest_consecutive({0, 3, 7, 2, 5, 8, 4, 6, 0, 1}), 9);
}
