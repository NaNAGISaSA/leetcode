#include <gtest/gtest.h>

#include "0101_symmetric_tree.h"
#include "tree_test_utils.h"

using namespace leetcode::symmetric_tree;
using namespace leetcode;

TEST(SYMMETRIC_TREE, EXAMPLE_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(Type::NONE, 1);
    head->left = TreeTestHelper::make_tree(Type::ALL, 2, 3, 4);
    head->right = TreeTestHelper::make_tree(Type::ALL, 2, 4, 3);
    ASSERT_TRUE(Solution::is_symmetric(head));
    TreeTestHelper::release_tree(head);
}
