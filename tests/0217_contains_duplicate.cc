#include "0217_contains_duplicate.h"

#include <gtest/gtest.h>

using namespace leetcode::contains_duplicate;

TEST(CONTAINS_DUPLICATE, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::contains_duplicate({1, 2, 3, 1}));
    ASSERT_FALSE(Solution::contains_duplicate({1, 2, 3, 4}));
}
