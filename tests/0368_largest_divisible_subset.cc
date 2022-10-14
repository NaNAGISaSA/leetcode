#include "0368_largest_divisible_subset.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::largest_divisible_subset;

TEST(LARGEST_DIVISIBLE_SUBSET, EXAMPLE_TEST) {
    std::vector<int> vec1{1, 2, 4, 8}, vec2{1, 2, 4, 6, 8};
    ASSERT_THAT(Solution::largest_divisible_subset(vec1), testing::ElementsAre(8, 4, 2, 1));
    ASSERT_THAT(Solution::largest_divisible_subset(vec2), testing::ElementsAre(8, 4, 2, 1));
}
