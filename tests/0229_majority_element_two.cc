#include "0229_majority_element_two.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::majority_element_two;

TEST(MAJORITY_ELEMENT_TWO, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::majority_element({3, 2, 3}), testing::ElementsAre(3));
    ASSERT_THAT(Solution::majority_element({2, 2, 1, 3}), testing::ElementsAre(2));
}
