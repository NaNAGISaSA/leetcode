#include <gtest/gtest.h>

#include "0052_n_queens_two.h"

using namespace leetcode::n_queens_two;

TEST(N_QUEEN_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::total_n_queens(1), 1);
    ASSERT_EQ(Solution::total_n_queens(4), 2);
}
