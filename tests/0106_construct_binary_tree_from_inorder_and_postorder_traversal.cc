#include "0106_construct_binary_tree_from_inorder_and_postorder_traversal.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::construct_binary_tree_from_inorder_and_postorder_traversal;
using namespace leetcode;

TEST(CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL, EXAMPLE_TEST) {
    auto head = Solution::build_tree({9, 3, 15, 20, 7}, {9, 15, 7, 20, 3});
    ASSERT_EQ(head->val, 3);
    ASSERT_EQ(head->left->val, 9);
    ASSERT_EQ(head->left->left, nullptr);
    ASSERT_EQ(head->left->right, nullptr);
    ASSERT_EQ(head->right->val, 20);
    ASSERT_EQ(head->right->left->val, 15);
    ASSERT_EQ(head->right->right->val, 7);
    ASSERT_EQ(head->right->left->left, nullptr);
    ASSERT_EQ(head->right->left->right, nullptr);
    ASSERT_EQ(head->right->right->left, nullptr);
    ASSERT_EQ(head->right->right->right, nullptr);
    TreeTestHelper::release_tree(head);
}
