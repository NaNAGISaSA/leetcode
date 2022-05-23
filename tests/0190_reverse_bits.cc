#include "0190_reverse_bits.h"

#include <gtest/gtest.h>

using namespace leetcode::reverse_bits;

TEST(REVERSE_BITS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::reverse_bits(43261596u), 964176192u);
    // ASSERT_EQ(Solution::reverse_bits(4294967293u), 3221225471u);
}
