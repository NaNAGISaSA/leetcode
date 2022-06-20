#include "0222_count_complete_tree_nodes.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::count_complete_tree_nodes;
using namespace leetcode;

TEST(COUNT_COMPLETE_TREE_NODES, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(1);
    root->left = TreeTestHelper::make_tree(2, 4, 5);
    root->right = TreeTestHelper::make_tree(Type::LEFT, 3, 6);
    ASSERT_EQ(Solution::count_nodes(root), 6);
    TreeTestHelper::release_tree(root);
}
