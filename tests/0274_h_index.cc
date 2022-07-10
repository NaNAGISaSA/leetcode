#include "0274_h_index.h"

#include <gtest/gtest.h>

using namespace leetcode::h_index;

TEST(H_INDEX, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::h_index({3, 0, 6, 1, 5}), 3);
    ASSERT_EQ(Solution::h_index({3, 1, 1}), 1);
    ASSERT_EQ(Solution::h_index({0, 0, 1}), 1);
}
