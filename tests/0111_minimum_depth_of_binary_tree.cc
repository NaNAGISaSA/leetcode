#include "0111_minimum_depth_of_binary_tree.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::minimum_depth_of_binary_tree;
using namespace leetcode;

TEST(MINIMUM_DEPTH_OF_BINARY_TREE, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(Type::LEFT, 3, 9);
    root->right = TreeTestHelper::make_tree(20, 15, 7);
    ASSERT_EQ(Solution::min_depth(root), 2);
    TreeTestHelper::release_tree(root);
}
