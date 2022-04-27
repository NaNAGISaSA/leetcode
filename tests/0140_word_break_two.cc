#include <gtest/gtest.h>

#include "0140_word_break_two.h"

using namespace leetcode::word_break_two;

TEST(WORD_BREAK_TWO, EXAMPLE_TEST) {
    std::string word1("catsanddog"), word2("pineapplepenapple");
    std::vector<std::string> word_dict1{"cat", "cats", "and", "sand", "dog"},
        word_dict2{"apple", "pen", "applepen", "pine", "pineapple"};
    auto res1 = Solution::word_break(word1, word_dict1);
    ASSERT_EQ(res1.size(), 2);
    ASSERT_EQ(res1[0], "cat sand dog");
    ASSERT_EQ(res1[1], "cats and dog");
    auto res2 = Solution::word_break(word2, word_dict2);
    ASSERT_EQ(res2.size(), 3);
    ASSERT_EQ(res2[0], "pine apple pen apple");
    ASSERT_EQ(res2[1], "pine applepen apple");
    ASSERT_EQ(res2[2], "pineapple pen apple");
}
