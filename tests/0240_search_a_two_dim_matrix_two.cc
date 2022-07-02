#include "0240_search_a_two_dim_matrix_two.h"

#include <gtest/gtest.h>

using namespace leetcode::search_a_two_dim_matrix_two;

TEST(SEARCH_A_TWO_DIM_MATRIX_TWO, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::search_matrix(
        {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}}, 5));
    ASSERT_FALSE(Solution::search_matrix(
        {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}}, 20));
}
