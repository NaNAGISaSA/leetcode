#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0073_set_matrix_zeroes.h"

using namespace leetcode::set_matrix_zeroes;

TEST(SET_MATRIX_ZEROES, EXAMPLE_TEST) {
    std::vector<std::vector<int>> mat1{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    Solution::set_zeroes(mat1);
    ASSERT_THAT(mat1[0], testing::ElementsAre(1, 0, 1));
    ASSERT_THAT(mat1[1], testing::ElementsAre(0, 0, 0));
    ASSERT_THAT(mat1[2], testing::ElementsAre(1, 0, 1));
    std::vector<std::vector<int>> mat2{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    Solution::set_zeroes(mat2);
    ASSERT_THAT(mat2[0], testing::ElementsAre(0, 0, 0, 0));
    ASSERT_THAT(mat2[1], testing::ElementsAre(0, 4, 5, 0));
    ASSERT_THAT(mat2[2], testing::ElementsAre(0, 3, 1, 0));
}
