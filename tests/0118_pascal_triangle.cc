#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0118_pascal_triangle.h"

using namespace leetcode::pascal_triangle;

TEST(PASCAL_TRIANGLE, EXAMPLE_TEST) {
    auto res = Solution::generate(5);
    ASSERT_EQ(res.size(), 5);
    ASSERT_THAT(res[0], testing::ElementsAre(1));
    ASSERT_THAT(res[1], testing::ElementsAre(1, 1));
    ASSERT_THAT(res[2], testing::ElementsAre(1, 2, 1));
    ASSERT_THAT(res[3], testing::ElementsAre(1, 3, 3, 1));
    ASSERT_THAT(res[4], testing::ElementsAre(1, 4, 6, 4, 1));
}
