#include <gtest/gtest.h>

#include "0099_recover_binary_search_tree.h"
#include "tree_test_utils.h"

using namespace leetcode::recover_binary_search_tree;
using namespace leetcode;

TEST(RECOVER_BINARY_SEARCH_TREE, EXAMPLE_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(Type::ALL, 3, 1, 4);
    head->right->left = TreeTestHelper::make_tree(Type::NONE, 2);
    Solution::recover_tree(head);
    ASSERT_EQ(head->val, 2);
    ASSERT_EQ(head->left->val, 1);
    ASSERT_EQ(head->right->val, 4);
    ASSERT_EQ(head->right->left->val, 3);
    TreeTestHelper::release_tree(head);
}
