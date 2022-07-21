#include "0290_word_pattern.h"

#include <gtest/gtest.h>

using namespace leetcode::word_pattern;

TEST(WORD_PATTERN, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::word_pattern("abba", "dog cat cat dog"));
    ASSERT_FALSE(Solution::word_pattern("abba", "dog cat cat fish"));
    ASSERT_FALSE(Solution::word_pattern("aaaa", "dog cat cat dog"));
    ASSERT_FALSE(Solution::word_pattern("abba", "dog dog dog dog"));
}
