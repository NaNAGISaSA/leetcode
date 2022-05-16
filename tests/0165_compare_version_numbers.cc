#include <gtest/gtest.h>

#include "0165_compare_version_numbers.h"

using namespace leetcode::compare_version_numbers;

TEST(COMPARE_VERSION_NUMBERS, EXAMPLE_TEST) {
    std::string str1("1.01"), str2("1.001"), str3("1.0"), str4("1.0.0"), str5("0.1"), str6("1.1");
    ASSERT_EQ(Solution::compare_version(str1, str2), 0);
    ASSERT_EQ(Solution::compare_version(str3, str4), 0);
    ASSERT_EQ(Solution::compare_version(str5, str6), -1);
}
