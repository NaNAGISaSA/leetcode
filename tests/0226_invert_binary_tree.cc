#include "0226_invert_binary_tree.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::invert_binary_tree;
using namespace leetcode;

TEST(INVERT_BINARY_TREE, RECURSE_SOLUTION_TEST) {
    auto root = TreeTestHelper::make_tree(4);
    root->left = TreeTestHelper::make_tree(Type::LEFT, 7, 6);
    root->right = TreeTestHelper::make_tree(7, 6, 9);
    root = recurse::Solution::invert_tree(root);
    ASSERT_EQ(root->right->val, 7);
    ASSERT_EQ(root->right->left, nullptr);
    ASSERT_EQ(root->right->right->val, 6);
    ASSERT_EQ(root->left->val, 7);
    ASSERT_EQ(root->left->left->val, 9);
    ASSERT_EQ(root->left->right->val, 6);
    TreeTestHelper::release_tree(root);
}

TEST(INVERT_BINARY_TREE, STACK_SOLUTION_TEST) {
    auto root = TreeTestHelper::make_tree(4);
    root->left = TreeTestHelper::make_tree(Type::LEFT, 7, 6);
    root->right = TreeTestHelper::make_tree(7, 6, 9);
    root = stack::Solution::invert_tree(root);
    ASSERT_EQ(root->right->val, 7);
    ASSERT_EQ(root->right->left, nullptr);
    ASSERT_EQ(root->right->right->val, 6);
    ASSERT_EQ(root->left->val, 7);
    ASSERT_EQ(root->left->left->val, 9);
    ASSERT_EQ(root->left->right->val, 6);
    TreeTestHelper::release_tree(root);
}
