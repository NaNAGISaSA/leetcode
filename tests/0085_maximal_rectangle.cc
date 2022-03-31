#include <gtest/gtest.h>

#include "0085_maximal_rectangle.h"

using namespace leetcode::maximal_rectangle;

TEST(MAXIMAL_RECTANGLE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::maximal_rectangle({{'1', '0', '1', '0', '0'},
                                           {'1', '0', '1', '1', '1'},
                                           {'1', '1', '1', '1', '1'},
                                           {'1', '0', '0', '1', '0'}}),
              6);
    ASSERT_EQ(Solution::maximal_rectangle({{'0', '1'}, {'1', '0'}}), 1);
}
