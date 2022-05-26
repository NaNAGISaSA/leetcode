#include "0200_number_of_islands.h"

#include <gtest/gtest.h>

using namespace leetcode::number_of_islands;

TEST(NUMBER_OF_ISLAND, EXAMPLE_TEST) {
    // clang-format off
    std::vector<std::vector<char>> grid1{{'1', '1', '1', '1', '0'},
                                         {'1', '1', '0', '1', '0'},
                                         {'1', '1', '0', '0', '0'},
                                         {'0', '0', '0', '0', '0'}};
    std::vector<std::vector<char>> grid2{{'1', '1', '1', '1', '0'},
                                         {'1', '1', '0', '1', '0'},
                                         {'0', '0', '1', '0', '0'},
                                         {'0', '0', '0', '1', '1'}};
    // clang-format on
    ASSERT_EQ(Solution::num_islands(grid1), 1);
    ASSERT_EQ(Solution::num_islands(grid2), 3);
}
