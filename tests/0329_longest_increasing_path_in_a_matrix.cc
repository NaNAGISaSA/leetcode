#include "0329_longest_increasing_path_in_a_matrix.h"

#include <gtest/gtest.h>

using namespace leetcode::longest_increasing_path_in_a_matrix;

TEST(LONGEST_INCREASING_PATH_IN_A_MATRIX, EXAMPLE_TEST) {
    std::vector<std::vector<int>> mat1{{9, 9, 4}, {6, 6, 8}, {2, 1, 1}}, mat2{{1}},
        mat3{{3, 4, 5}, {3, 2, 6}, {2, 2, 1}};
    ASSERT_EQ(Solution::longest_increasing_path(mat1), 4);
    ASSERT_EQ(Solution::longest_increasing_path(mat2), 1);
    ASSERT_EQ(Solution::longest_increasing_path(mat3), 4);
}
