#include "0236_lowest_common_ancestor_of_a_binary_tree.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::lowest_common_ancestor_of_a_binary_tree;
using namespace leetcode;

TEST(LOWEST_COMMON_ANCESTOR_OF_A_BINARY_TREE, EXAMPLE_TEST) {
    auto root = TreeTestHelper::make_tree(3);
    root->left = TreeTestHelper::make_tree(5, 6, 4);
    root->right = TreeTestHelper::make_tree(8, 7, 9);
    ASSERT_EQ(Solution::lowest_common_ancestor(root, root->left->right, root->right->left), root);
    ASSERT_EQ(Solution::lowest_common_ancestor(root, root->left, root), root);
    ASSERT_EQ(Solution::lowest_common_ancestor(root, root->left->left, root->left->right), root->left);
    TreeTestHelper::release_tree(root);
}
