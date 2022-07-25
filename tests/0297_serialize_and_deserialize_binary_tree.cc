#include "0297_serialize_and_deserialize_binary_tree.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::serialize_and_deserialize_binary_tree;
using namespace leetcode;

TEST(SERIALIZE_AND_DESERIALIZE_BINARY_TREE, LEVEL_ORDER_SOLUTION_TEST) {
    auto root = TreeTestHelper::make_tree(Type::LEFT, 1, 2);
    root->right = TreeTestHelper::make_tree(3, 4, 5);
    auto root2 = level_order::Codec::deserialize(level_order::Codec::serialize(root));
    ASSERT_EQ(root2->val, 1);
    ASSERT_EQ(root2->left->val, 2);
    ASSERT_EQ(root2->left->left, nullptr);
    ASSERT_EQ(root2->left->right, nullptr);
    ASSERT_EQ(root2->right->val, 3);
    ASSERT_EQ(root2->right->left->val, 4);
    ASSERT_EQ(root2->right->left->left, nullptr);
    ASSERT_EQ(root2->right->left->right, nullptr);
    ASSERT_EQ(root2->right->right->val, 5);
    ASSERT_EQ(root2->right->right->left, nullptr);
    ASSERT_EQ(root2->right->right->right, nullptr);
    TreeTestHelper::release_tree(root);
    TreeTestHelper::release_tree(root2);
}

TEST(SERIALIZE_AND_DESERIALIZE_BINARY_TREE, PRE_ORDER_SOLUTION_TEST) {
    auto root = TreeTestHelper::make_tree(Type::LEFT, 1, 2);
    root->right = TreeTestHelper::make_tree(3, 4, 5);
    auto root2 = pre_order::Codec::deserialize(pre_order::Codec::serialize(root));
    ASSERT_EQ(root2->val, 1);
    ASSERT_EQ(root2->left->val, 2);
    ASSERT_EQ(root2->left->left, nullptr);
    ASSERT_EQ(root2->left->right, nullptr);
    ASSERT_EQ(root2->right->val, 3);
    ASSERT_EQ(root2->right->left->val, 4);
    ASSERT_EQ(root2->right->left->left, nullptr);
    ASSERT_EQ(root2->right->left->right, nullptr);
    ASSERT_EQ(root2->right->right->val, 5);
    ASSERT_EQ(root2->right->right->left, nullptr);
    ASSERT_EQ(root2->right->right->right, nullptr);
    TreeTestHelper::release_tree(root);
    TreeTestHelper::release_tree(root2);
}
