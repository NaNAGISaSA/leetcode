#include <gtest/gtest.h>

#include "0074_search_a_2d_matrix.h"

using namespace leetcode::search_a_2d_matrix;

TEST(SEARCH_A_2D_MATRIX, FIRST_SOLUTION_TEST) {
    ASSERT_TRUE(first::Solution::search_matrix({{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 3));
    ASSERT_FALSE(first::Solution::search_matrix({{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 13));
}

TEST(SEARCH_A_2D_MATRIX, BS_SOLUTION_TEST) {
    ASSERT_TRUE(bs::Solution::search_matrix({{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 3));
    ASSERT_FALSE(bs::Solution::search_matrix({{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 13));
}
