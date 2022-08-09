#include "0310_minimum_height_trees.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::minimum_height_trees;

TEST(MINIMUM_HEIGHT_TREES, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::find_min_height_trees(4, {{1, 0}, {1, 2}, {1, 3}}), testing::ElementsAre(1));
    ASSERT_THAT(Solution::find_min_height_trees(6, {{3, 0}, {3, 1}, {3, 2}, {3, 4}, {5, 4}}),
                testing::ElementsAre(3, 4));
}
