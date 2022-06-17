#include "0219_contains_duplicate_two.h"

#include <gtest/gtest.h>

using namespace leetcode::contains_duplicate_two;

TEST(CONTAINS_DUPLICATE_TWO, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::contains_nearby_duplicate({1, 2, 3, 1}, 3));
    ASSERT_TRUE(Solution::contains_nearby_duplicate({1, 0, 1, 1}, 1));
    ASSERT_FALSE(Solution::contains_nearby_duplicate({1, 2, 3, 1, 2, 3}, 2));
}
