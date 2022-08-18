#include "0318_maximum_product_of_word_lengths.h"

#include <gtest/gtest.h>

using namespace leetcode::maximum_product_of_word_lengths;

TEST(MAXIMUM_PRODUCT_OF_WORD_LENGTHS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_product({"abcw", "baz", "foo", "bar", "xtfn", "abcdef"}), 16);
    ASSERT_EQ(Solution::max_product({"a", "ab", "abc", "d", "cd", "bcd", "abcd"}), 4);
    ASSERT_EQ(Solution::max_product({"a", "aa", "aaa", "aaaa"}), 0);
}
