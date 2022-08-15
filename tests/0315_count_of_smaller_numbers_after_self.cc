#include "0315_count_of_smaller_numbers_after_self.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::count_of_smaller_numbers_after_self;

TEST(COUNT_OF_SMALLER_NUMBERS_AFTER_SELF, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::count_smaller({5, 2, 6, 1}), testing::ElementsAre(2, 1, 1, 0));
    ASSERT_THAT(Solution::count_smaller({-1, -1}), testing::ElementsAre(0, 0));
    ASSERT_THAT(Solution::count_smaller({-1}), testing::ElementsAre(0));
}
