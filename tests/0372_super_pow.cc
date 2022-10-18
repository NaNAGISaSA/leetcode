#include "0372_super_pow.h"

#include <gtest/gtest.h>

using namespace leetcode::super_pow;

TEST(SUPER_POW, EXAMPLE_TEST) {
    std::vector<int> vec1{3}, vec2{1, 0}, vec3{4, 3, 3, 8, 5, 2};
    ASSERT_EQ(Solution::super_pow(2, vec1), 8);
    ASSERT_EQ(Solution::super_pow(2, vec2), 1024);
    ASSERT_EQ(Solution::super_pow(1, vec3), 1);
}
