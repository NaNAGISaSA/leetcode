#include "0275_h_index_two.h"

#include <gtest/gtest.h>

using namespace leetcode::h_index_two;

TEST(H_INDEX_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::h_index({0, 1}), 1);
    ASSERT_EQ(Solution::h_index({1, 1, 3}), 1);
    ASSERT_EQ(Solution::h_index({0, 1, 3, 5, 6}), 3);
    ASSERT_EQ(Solution::h_index({1, 1, 2, 3, 4, 5, 7}), 3);
}
