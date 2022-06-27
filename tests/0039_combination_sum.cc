#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0039_combination_sum.h"

using namespace leetcode::combination_sum;

TEST(COMBINATION_SUM, EXAMPLE_TEST) {
    std::vector<int> vec1{2, 3, 6, 7}, vec2{2, 3, 5};
    auto result1 = Solution::combination_sum(vec1, 7);
    ASSERT_THAT(result1[0], testing::ElementsAre(2, 2, 3));
    ASSERT_THAT(result1[1], testing::ElementsAre(7));
    auto result2 = Solution::combination_sum(vec2, 8);
    ASSERT_THAT(result2[0], testing::ElementsAre(2, 2, 2, 2));
    ASSERT_THAT(result2[1], testing::ElementsAre(2, 3, 3));
    ASSERT_THAT(result2[2], testing::ElementsAre(3, 5));
}
