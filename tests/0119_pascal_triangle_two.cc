#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0119_pascal_triangle_two.h"

using namespace leetcode::pascal_triangle_two;

TEST(PASCAL_TRIANGLE_TWO, EXAMPLE_TEST) {
    auto res = Solution::get_row(4);
    ASSERT_THAT(res, testing::ElementsAre(1, 4, 6, 4, 1));
}
