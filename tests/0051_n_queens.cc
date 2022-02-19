#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0051_n_queens.h"

using namespace leetcode::n_queens;

TEST(N_QUEEN, EXAMPLE_TEST) {
    auto result1 = Solution::solve_n_queens(1);
    ASSERT_EQ(result1.size(), 1);
    ASSERT_THAT(result1[0], testing::ElementsAre("Q"));
    auto result2 = Solution::solve_n_queens(4);
    ASSERT_EQ(result2.size(), 2);
    ASSERT_THAT(result2[0], testing::ElementsAre(".Q..", "...Q", "Q...", "..Q."));
    ASSERT_THAT(result2[1], testing::ElementsAre("..Q.", "Q...", "...Q", ".Q.."));
}
