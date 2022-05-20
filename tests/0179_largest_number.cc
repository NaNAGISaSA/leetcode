#include "0179_largest_number.h"

#include <gtest/gtest.h>

using namespace leetcode::largest_number;

TEST(LARGEST_NUMBER, EXAMPLE_TEST) {
    std::vector<int> vec1{0, 0}, vec2{3, 30, 34, 5, 9};
    ASSERT_EQ(Solution::largest_number(vec1), "0");
    ASSERT_EQ(Solution::largest_number(vec2), "9534330");
}
