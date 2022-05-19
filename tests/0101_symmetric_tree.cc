#include "0101_symmetric_tree.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::symmetric_tree;
using namespace leetcode;

TEST(SYMMETRIC_TREE, RECURSE_SOLUTION_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(1);
    head->left = TreeTestHelper::make_tree(2, 3, 4);
    head->right = TreeTestHelper::make_tree(2, 4, 3);
    ASSERT_TRUE(recurse::Solution::is_symmetric(head));
    TreeTestHelper::release_tree(head);
}

TEST(SYMMETRIC_TREE, STACK_SOLUTION_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(1);
    head->left = TreeTestHelper::make_tree(2, 3, 4);
    head->right = TreeTestHelper::make_tree(2, 4, 3);
    ASSERT_TRUE(stack::Solution::is_symmetric(head));
    TreeTestHelper::release_tree(head);
}
