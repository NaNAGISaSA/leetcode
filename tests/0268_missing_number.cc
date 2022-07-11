#include "0268_missing_number.h"

#include <gtest/gtest.h>

using namespace leetcode::missing_number;

TEST(MISSING_NUMBER, FIRST_SOLUTION_TEST) {
    std::vector<int> vec1{1, 0}, vec2{9, 6, 4, 2, 3, 5, 7, 0, 1};
    ASSERT_EQ(first::Solution::missing_number(vec1), 2);
    ASSERT_EQ(first::Solution::missing_number(vec2), 8);
}

TEST(MISSING_NUMBER, XOR_SOLUTION_TEST) {
    std::vector<int> vec1{1, 0}, vec2{9, 6, 4, 2, 3, 5, 7, 0, 1};
    ASSERT_EQ(x_or::Solution::missing_number(vec1), 2);
    ASSERT_EQ(x_or::Solution::missing_number(vec2), 8);
}
