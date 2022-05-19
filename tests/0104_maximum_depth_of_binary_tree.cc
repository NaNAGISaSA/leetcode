#include "0104_maximum_depth_of_binary_tree.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::maximum_depth_of_binary_tree;
using namespace leetcode;

TEST(MAXIMUM_DEPTH_OF_BINARY_TREE, RECURSE_DFS_SOLUTION_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(Type::LEFT, 3, 9);
    head->right = TreeTestHelper::make_tree(20, 15, 7);
    ASSERT_EQ(recurse_dfs::Solution::max_depth(head), 3);
    TreeTestHelper::release_tree(head);
}

TEST(MAXIMUM_DEPTH_OF_BINARY_TREE, STACK_DFS_SOLUTION_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(Type::LEFT, 3, 9);
    head->right = TreeTestHelper::make_tree(20, 15, 7);
    ASSERT_EQ(stack_dfs::Solution::max_depth(head), 3);
    TreeTestHelper::release_tree(head);
}
