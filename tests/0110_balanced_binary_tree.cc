#include "0110_balanced_binary_tree.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::balanced_binary_tree;
using namespace leetcode;

TEST(BALANCED_BINARY_TREE, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(Type::LEFT, 3, 9);
    root->right = TreeTestHelper::make_tree(20, 15, 7);
    ASSERT_TRUE(Solution::is_balanced(root));
    TreeTestHelper::release_tree(root);
}
