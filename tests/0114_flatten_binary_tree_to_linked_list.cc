#include "0114_flatten_binary_tree_to_linked_list.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::flatten_binary_tree_to_linked_list;
using namespace leetcode;

TEST(FLATTEN_BINARY_TREE_TO_LINKED_LIST, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(8, 13, 4);
    Solution::flatten(root);
    ASSERT_EQ(root->val, 8);
    ASSERT_EQ(root->right->val, 13);
    ASSERT_EQ(root->right->right->val, 4);
    ASSERT_EQ(root->right->right->right, nullptr);
    TreeTestHelper::release_tree(root);
}
