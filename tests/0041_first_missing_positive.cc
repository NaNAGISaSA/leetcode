#include <gtest/gtest.h>

#include "0041_first_missing_positive.h"

using namespace leetcode::first_missing_positive;

TEST(FIRST_MISSING_POSITIVE, EXAMPLE_TEST) {
    std::vector<int> vec1{1, 2, 0}, vec2{3, 4, -1, 1}, vec3{7, 8, 9, 10};
    ASSERT_EQ(Solution::first_missing_positive(vec1), 3);
    ASSERT_EQ(Solution::first_missing_positive(vec2), 2);
    ASSERT_EQ(Solution::first_missing_positive(vec3), 1);
}
