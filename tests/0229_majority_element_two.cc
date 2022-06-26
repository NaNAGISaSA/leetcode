#include "0229_majority_element_two.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::majority_element_two;

TEST(MAJORITY_ELEMENT_TWO, COMMON_SOLUTION_TEST) {
    ASSERT_THAT(common::Solution::majority_element({3, 2, 3}), testing::ElementsAre(3));
    ASSERT_THAT(common::Solution::majority_element({2, 2, 1, 3}), testing::ElementsAre(2));
}

TEST(MAJORITY_ELEMENT_TWO, SP_SOLUTION_TEST) {
    ASSERT_THAT(sp::Solution::majority_element({3, 2, 3}), testing::ElementsAre(3));
    ASSERT_THAT(sp::Solution::majority_element({2, 2, 1, 3}), testing::ElementsAre(2));
    ASSERT_THAT(sp::Solution::majority_element({2, 1, 1, 3, 1, 4, 5, 6}), testing::ElementsAre(1));
}
