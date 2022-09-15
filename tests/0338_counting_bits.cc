#include "0338_counting_bits.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::counting_bits;

TEST(HOUSE_ROBBER_THREE, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::count_bits(2), testing::ElementsAre(0, 1, 1));
    ASSERT_THAT(Solution::count_bits(5), testing::ElementsAre(0, 1, 1, 2, 1, 2));
}
