#include <gtest/gtest.h>

#include "0058_length_of_last_word.h"

using namespace leetcode::length_of_last_word;

TEST(LENGTH_OF_LAST_WORD, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::length_of_last_word("Hello World"), 5);
    ASSERT_EQ(Solution::length_of_last_word("   fly me   to   the moon  "), 4);
}
