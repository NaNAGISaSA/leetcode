#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0054_spiral_matrix.h"

using namespace leetcode::spiral_matrix;

TEST(SPIRAL_MATRIX, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::spiral_order({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}),
                testing::ElementsAre(1, 2, 3, 6, 9, 8, 7, 4, 5));
    ASSERT_THAT(Solution::spiral_order({{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}),
                testing::ElementsAre(1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7));
    ASSERT_THAT(Solution::spiral_order({{1}, {2}, {3}, {4}, {5}, {6}, {7}, {8}}),
                testing::ElementsAre(1, 2, 3, 4, 5, 6, 7, 8));
}
