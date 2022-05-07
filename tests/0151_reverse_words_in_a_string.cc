#include <gtest/gtest.h>

#include "0151_reverse_words_in_a_string.h"

using namespace leetcode::reverse_words_in_a_string;

TEST(REVERSE_WORDS_IN_A_STRING, EXAMPLE_TEST) {
    std::string str1("the sky is blue"), str2("  hello world  "), str3("a good   example");
    ASSERT_EQ(Solution::reverse_words(str1), "blue is sky the");
    ASSERT_EQ(Solution::reverse_words(str2), "world hello");
    ASSERT_EQ(Solution::reverse_words(str3), "example good a");
}
