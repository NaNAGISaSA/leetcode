#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0059_spiral_matrix_two.h"

using namespace leetcode::spiral_matrix_two;

TEST(SPIRAL_MATRIX_TWO, EXAMPLE_TEST) {
    auto res = Solution::generate_matrix(3);
    ASSERT_EQ(res.size(), 3);
    ASSERT_THAT(res[0], testing::ElementsAre(1, 2, 3));
    ASSERT_THAT(res[1], testing::ElementsAre(8, 9, 4));
    ASSERT_THAT(res[2], testing::ElementsAre(7, 6, 5));
    auto res2 = Solution::generate_matrix(4);
    ASSERT_EQ(res2.size(), 4);
    ASSERT_THAT(res2[0], testing::ElementsAre(1, 2, 3, 4));
    ASSERT_THAT(res2[1], testing::ElementsAre(12, 13, 14, 5));
    ASSERT_THAT(res2[2], testing::ElementsAre(11, 16, 15, 6));
    ASSERT_THAT(res2[3], testing::ElementsAre(10, 9, 8, 7));
}
