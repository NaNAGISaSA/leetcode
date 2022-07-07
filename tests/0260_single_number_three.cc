#include "0260_single_number_three.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::single_number_three;

TEST(SINGLE_NUMBER_THREE, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::single_number({1, 2, 1, 3, 2, -5}), testing::ElementsAre(-5, 3));
    ASSERT_THAT(Solution::single_number({-1, 0, 1, 1, -2, -2}), testing::ElementsAre(-1, 0));
}
