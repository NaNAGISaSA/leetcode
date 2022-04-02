#include <gtest/gtest.h>

#include "0115_distinct_subsequences.h"

using namespace leetcode::distinct_subsequences;

TEST(DISTINCT_SUBSEQUENCES, RECURSE_DFS_SOLUTION_TEST) {
    ASSERT_EQ(Solution::num_distinct("rabbbit", "rabbit"), 3);
    ASSERT_EQ(Solution::num_distinct("babgbag", "bag"), 5);
}
