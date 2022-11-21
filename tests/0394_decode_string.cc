#include "0394_decode_string.h"

#include <gtest/gtest.h>

using namespace leetcode::decode_string;

TEST(DECODE_STRING, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::decode("abc"), "abc");
    ASSERT_EQ(Solution::decode("3[a]2[bc]"), "aaabcbc");
    ASSERT_EQ(Solution::decode("3[a2[c]1[b]]"), "accbaccbaccb");
    ASSERT_EQ(Solution::decode("2[abc]3[cd]ef"), "abcabccdcdcdef");
}
