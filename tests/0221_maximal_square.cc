#include "0221_maximal_square.h"

#include <gtest/gtest.h>

using namespace leetcode::maximal_square;

TEST(MAXIMAL_SQUARE, PREPROCESS_SOLUTION_TEST) {
    std::vector<std::vector<char>> mat1{
        {'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}};
    std::vector<std::vector<char>> mat2{{'1', '0', '1', '1', '0', '1'},
                                        {'1', '1', '1', '1', '1', '1'},
                                        {'0', '1', '1', '0', '1', '1'},
                                        {'1', '1', '1', '0', '1', '0'},
                                        {'0', '1', '1', '1', '1', '1'},
                                        {'1', '1', '0', '1', '1', '1'}};
    ASSERT_EQ(preprocess::Solution::maximal_square(mat1), 4);
    ASSERT_EQ(preprocess::Solution::maximal_square(mat2), 4);
}

TEST(MAXIMAL_SQUARE, DP_SOLUTION_TEST) {
    std::vector<std::vector<char>> mat1{
        {'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}};
    std::vector<std::vector<char>> mat2{{'1', '0', '1', '1', '0', '1'},
                                        {'1', '1', '1', '1', '1', '1'},
                                        {'0', '1', '1', '0', '1', '1'},
                                        {'1', '1', '1', '0', '1', '0'},
                                        {'0', '1', '1', '1', '1', '1'},
                                        {'1', '1', '0', '1', '1', '1'}};
    ASSERT_EQ(dp::Solution::maximal_square(mat1), 4);
    ASSERT_EQ(dp::Solution::maximal_square(mat2), 4);
}
