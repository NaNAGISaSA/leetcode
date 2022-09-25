#include "0349_intersection_of_two_arrays.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::intersection_of_two_arrays;

TEST(INTERSECTION_OF_TWO_ARRAYS, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::intersection({4, 9, 5}, {9, 4, 9, 8, 4}), testing::ElementsAre(4, 9));
}
