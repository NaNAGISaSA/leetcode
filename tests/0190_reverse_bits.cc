#include "0190_reverse_bits.h"

#include <gtest/gtest.h>

using namespace leetcode::reverse_bits;

TEST(REVERSE_BITS, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first::Solution::reverse_bits(43261596u), 964176192u);
    ASSERT_EQ(first::Solution::reverse_bits(4294967293u), 3221225471u);
}

TEST(REVERSE_BITS, ANOTHER_SOLUTION_TEST) {
    ASSERT_EQ(another::Solution::reverse_bits(43261596u), 964176192u);
    ASSERT_EQ(another::Solution::reverse_bits(4294967293u), 3221225471u);
}

TEST(REVERSE_BITS, IN_PLACE_SOLUTION_TEST) {
    ASSERT_EQ(in_place::Solution::reverse_bits(43261596u), 964176192u);
    ASSERT_EQ(in_place::Solution::reverse_bits(4294967293u), 3221225471u);
}
