#include <gtest/gtest.h>

#include "0120_triangle.h"

using namespace leetcode::triangle;

TEST(TRIANGLE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::minimum_total({{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}}), 11);
}
