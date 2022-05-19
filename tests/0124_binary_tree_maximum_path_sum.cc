#include "0124_binary_tree_maximum_path_sum.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::binary_tree_maximum_path_sum;
using namespace leetcode;

TEST(BINARY_TREE_MAXIMUM_PATH_SUM, FIRST_SOLUTION_TEST) {
    auto root = TreeTestHelper::make_tree(Type::LEFT, -10, 9);
    root->right = TreeTestHelper::make_tree(20, 15, 7);
    ASSERT_EQ(first::Solution::max_path_sum(root), 42);
    TreeTestHelper::release_tree(root);
}

TEST(BINARY_TREE_MAXIMUM_PATH_SUM, CLEANER_SOLUTION_TEST) {
    auto root = TreeTestHelper::make_tree(Type::LEFT, -10, 9);
    root->right = TreeTestHelper::make_tree(20, 15, 7);
    ASSERT_EQ(cleaner::Solution::max_path_sum(root), 42);
    TreeTestHelper::release_tree(root);
}
