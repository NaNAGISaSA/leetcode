#include <gtest/gtest.h>

#include "0151_reverse_words_in_a_string.h"

using namespace leetcode::reverse_words_in_a_string;

TEST(REVERSE_WORDS_IN_A_STRING, DIRECT_SOLUTION_TEST) {
    std::string str1("the sky is blue"), str2("  hello world  "), str3("a good   example");
    ASSERT_EQ(direct::Solution::reverse_words(str1), "blue is sky the");
    ASSERT_EQ(direct::Solution::reverse_words(str2), "world hello");
    ASSERT_EQ(direct::Solution::reverse_words(str3), "example good a");
}

TEST(REVERSE_WORDS_IN_A_STRING, INPLACE_SOLUTION_TEST) {
    std::string str1("the sky is blue"), str2("  hello world  "), str3("a good   example");
    ASSERT_EQ(inplace::Solution::reverse_words(str1), "blue is sky the");
    ASSERT_EQ(inplace::Solution::reverse_words(str2), "world hello");
    ASSERT_EQ(inplace::Solution::reverse_words(str3), "example good a");
}
