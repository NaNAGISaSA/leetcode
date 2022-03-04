#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0066_plus_one.h"

using namespace leetcode::plus_one;

TEST(PLUS_ONE, EXAMPLE_TEST) {
    std::vector<int> vec1{4, 3, 2, 1}, vec2{9, 9};
    ASSERT_THAT(Solution::plus_one(vec1), testing::ElementsAre(4, 3, 2, 2));
    ASSERT_THAT(Solution::plus_one(vec2), testing::ElementsAre(1, 0, 0));
}
