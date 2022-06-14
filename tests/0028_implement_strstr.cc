#include <gtest/gtest.h>

#include "0028_implement_strstr.h"

using namespace leetcode::implement_strstr;

TEST(IMPLEMENT_STRSTR, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::find_str("hello", "ll"), 2);
    ASSERT_EQ(Solution::find_str("aaaaa", "bba"), -1);
}
