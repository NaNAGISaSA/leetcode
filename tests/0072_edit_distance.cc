#include <gtest/gtest.h>

#include "0072_edit_distance.h"

using namespace leetcode::edit_distance;

TEST(EDIT_DISTANCE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::min_distance("horse", "ros"), 3);
    ASSERT_EQ(Solution::min_distance("intention", "execution"), 5);
}
