#include "0187_repeated_dna_sequences.h"

#include <gtest/gtest.h>

using namespace leetcode::repeated_dna_sequences;

TEST(REPEATED_DNA_SEQUENCES, EXAMPLE_TEST) {
    auto res1 = Solution::find_repeated_dna_sequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT");
    ASSERT_EQ(res1.size(), 2);
    ASSERT_EQ(res1[0], "AAAAACCCCC");
    ASSERT_EQ(res1[1], "CCCCCAAAAA");
    auto res2 = Solution::find_repeated_dna_sequences("AAAAAAAAAAAAA");
    ASSERT_EQ(res2.size(), 1);
    ASSERT_EQ(res2[0], "AAAAAAAAAA");
}
