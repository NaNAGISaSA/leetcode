#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0048_rotate_image.h"

using namespace leetcode::rotate;

TEST(ROTATE_IMAGE, EXAMPLE_TEST) {
    std::vector<std::vector<int>> mat1{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        mat2{{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    Solution::rotate(mat1);
    ASSERT_THAT(mat1[0], testing::ElementsAre(7, 4, 1));
    ASSERT_THAT(mat1[1], testing::ElementsAre(8, 5, 2));
    ASSERT_THAT(mat1[2], testing::ElementsAre(9, 6, 3));
    Solution::rotate(mat2);
    ASSERT_THAT(mat2[0], testing::ElementsAre(15, 13, 2, 5));
    ASSERT_THAT(mat2[1], testing::ElementsAre(14, 3, 4, 1));
    ASSERT_THAT(mat2[2], testing::ElementsAre(12, 6, 8, 9));
    ASSERT_THAT(mat2[3], testing::ElementsAre(16, 7, 10, 11));
}
