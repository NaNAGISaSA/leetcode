#include "0241_different_ways_to_add_parentheses.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <algorithm>

using namespace leetcode::different_ways_to_add_parentheses;

TEST(DIFFERENT_WAYS_TO_ADD_PARENTHESES, EXAMPLE_TEST) {
    auto res1 = Solution::diff_ways_to_compute("2-1-1");
    std::sort(res1.begin(), res1.end());
    ASSERT_THAT(res1, testing::ElementsAre(0, 2));
    auto res2 = Solution::diff_ways_to_compute("2*3-4*5");
    std::sort(res2.begin(), res2.end());
    ASSERT_THAT(res2, testing::ElementsAre(-34, -14, -10, -10, 10));
}
