#include "0273_integer_to_english_words.h"

#include <gtest/gtest.h>

using namespace leetcode::integer_to_english_words;

TEST(INTEGER_TO_ENGLISH_WORDS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::number_to_words(123), "One Hundred Twenty Three");
    ASSERT_EQ(Solution::number_to_words(12'345), "Twelve Thousand Three Hundred Forty Five");
    ASSERT_EQ(Solution::number_to_words(1'234'567),
              "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven");
}
