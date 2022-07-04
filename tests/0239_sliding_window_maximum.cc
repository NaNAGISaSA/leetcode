#include "0239_sliding_window_maximum.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::sliding_window_maximum;

TEST(SLIDING_WINDOW_MAXIMUM, EXAMPLE_TEST) {
    std::vector<int> input{1, 3, -1, -3, 5, 3, 6, 7};
    ASSERT_THAT(Solution::max_sliding_window(input, 3), testing::ElementsAre(3, 3, 5, 5, 6, 7));
}
