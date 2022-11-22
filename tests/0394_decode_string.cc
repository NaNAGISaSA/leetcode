#include "0394_decode_string.h"

#include <gtest/gtest.h>

using namespace leetcode::decode_string;

TEST(DECODE_STRING, RECURSE_SOLUTION_TEST) {
    ASSERT_EQ(recurse::Solution::decode("abc"), "abc");
    ASSERT_EQ(recurse::Solution::decode("3[a]2[bc]"), "aaabcbc");
    ASSERT_EQ(recurse::Solution::decode("3[a2[c]1[b]]"), "accbaccbaccb");
    ASSERT_EQ(recurse::Solution::decode("2[abc]3[cd]ef"), "abcabccdcdcdef");
}

TEST(DECODE_STRING, STACK_SOLUTION_TEST) {
    ASSERT_EQ(stack::Solution::decode("abc"), "abc");
    ASSERT_EQ(stack::Solution::decode("3[a]2[bc]"), "aaabcbc");
    ASSERT_EQ(stack::Solution::decode("3[a2[c]1[b]]"), "accbaccbaccb");
    ASSERT_EQ(stack::Solution::decode("2[abc]3[cd]ef"), "abcabccdcdcdef");
}
