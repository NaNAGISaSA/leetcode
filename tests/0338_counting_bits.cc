#include "0338_counting_bits.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::counting_bits;

TEST(COUNTING_BITS, FIRST_SOLUTION_TEST) {
    ASSERT_THAT(first::Solution::count_bits(2), testing::ElementsAre(0, 1, 1));
    ASSERT_THAT(first::Solution::count_bits(5), testing::ElementsAre(0, 1, 1, 2, 1, 2));
}

TEST(COUNTING_BITS, CLEANER_SOLUTION_TEST) {
    ASSERT_THAT(cleaner::Solution::count_bits(2), testing::ElementsAre(0, 1, 1));
    ASSERT_THAT(cleaner::Solution::count_bits(5), testing::ElementsAre(0, 1, 1, 2, 1, 2));
}
