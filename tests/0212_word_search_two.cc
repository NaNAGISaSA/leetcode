#include "0212_word_search_two.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::word_search_two;

TEST(WORD_SEARCH_TWO, EXAMPLE_TEST) {
    std::vector<std::vector<char>> board{
        {'o', 'a', 'a', 'n'}, {'e', 't', 'a', 'e'}, {'i', 'h', 'k', 'r'}, {'i', 'f', 'l', 'v'}};
    std::vector<std::string> words{"oath", "pea", "eat", "rain"};
    ASSERT_THAT(Solution().find_words(board, words), testing::ElementsAre("oath", "eat"));
}
