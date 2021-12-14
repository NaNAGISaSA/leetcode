#include <gtest/gtest.h>
#include <limits>

#include "0008_string_to_integer.h"

using namespace leetcode::string_to_integer;

TEST(STRING_TO_INTEGER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::my_atoi("42"), 42);
    ASSERT_EQ(Solution::my_atoi("-42"), -42);
    ASSERT_EQ(Solution::my_atoi("00142"), 142);
    ASSERT_EQ(Solution::my_atoi("-11.42"), -11);
    ASSERT_EQ(Solution::my_atoi("-+11.42"), 0);
    ASSERT_EQ(Solution::my_atoi("4193 with words"), 4193);
    ASSERT_EQ(Solution::my_atoi("words and 987"), 0);
    ASSERT_EQ(Solution::my_atoi("-2147483648"), -2147483648);
    ASSERT_EQ(Solution::my_atoi("-91283472332"), std::numeric_limits<int>::min());
}
