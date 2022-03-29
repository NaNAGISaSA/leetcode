#include <gtest/gtest.h>

#include "0091_decode_ways.h"

using namespace leetcode::decode_ways;

TEST(DECODE_WAYS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::num_decodings("226"), 3);
    ASSERT_EQ(Solution::num_decodings("06"), 0);
    ASSERT_EQ(Solution::num_decodings("30"), 0);
}
