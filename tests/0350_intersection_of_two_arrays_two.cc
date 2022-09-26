#include "0350_intersection_of_two_arrays_two.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::intersection_of_two_arrays_two;

TEST(INTERSECTION_OF_TWO_ARRAYS_TWO, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::intersection({1, 2, 2, 1}, {2, 2}), testing::ElementsAre(2, 2));
    ASSERT_THAT(Solution::intersection({4, 9, 5}, {9, 4, 9, 8, 4}), testing::ElementsAre(9, 4));
}
