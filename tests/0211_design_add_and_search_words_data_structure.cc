#include "0211_design_add_and_search_words_data_structure.h"

#include <gtest/gtest.h>

using namespace leetcode::design_add_and_search_words_data_structure;

TEST(DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE, EXAMPLE_TEST) {
    WordDictionary word_dict;
    word_dict.add("bad");
    word_dict.add("dad");
    word_dict.add("mad");
    ASSERT_FALSE(word_dict.search("pad"));
    ASSERT_TRUE(word_dict.search("bad"));
    ASSERT_TRUE(word_dict.search(".ad"));
    ASSERT_TRUE(word_dict.search("b.."));
}
