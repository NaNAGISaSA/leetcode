#include <gtest/gtest.h>

#include "0139_word_break.h"

using namespace leetcode::word_break;

TEST(WORD_BREAK, EXAMPLE_TEST) {
    std::string word1("applepenapple"), word2("catsandog");
    std::vector<std::string> word_dict1{"apple", "pen"}, word_dict2{"cats", "dog", "sand", "and", "cat"};
    ASSERT_TRUE(Solution::word_break(word1, word_dict1));
    ASSERT_FALSE(Solution::word_break(word2, word_dict2));
}
