#include <gtest/gtest.h>

#include "0096_unique_binary_search_trees.h"

using namespace leetcode::unique_binary_search_trees;

TEST(UNIQUE_BINARY_SEARCH_TREE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::num_trees(2), 2);
    ASSERT_EQ(Solution::num_trees(3), 5);
}
