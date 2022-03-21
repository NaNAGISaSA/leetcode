#include <gtest/gtest.h>

#include "0098_validate_binary_search_tree.h"
#include "tree_test_utils.h"

using namespace leetcode::validate_binary_search_tree;
using namespace leetcode;

TEST(VALIDATE_BINARY_SEARCH_TREE, EXAMPLE_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(Type::ALL, 3, 1, 4);
    ASSERT_TRUE(Solution::is_valid_bst(head));
    head->right->left = TreeTestHelper::make_tree(Type::NONE, 2);
    ASSERT_FALSE(Solution::is_valid_bst(head));
    TreeTestHelper::release_tree(head);
}
