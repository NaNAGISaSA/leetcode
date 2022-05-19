#include "0094_binary_tree_inorder_traversal.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::binary_tree_inorder_traversal;
using namespace leetcode;

TEST(BINARY_TREE_INORDER_TRAVERSAL, EXAMPLE_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(Type::RIGHT, 1, 3);
    head->right->left = TreeTestHelper::make_tree(2);
    auto res = Solution::inorder_traversal(head);
    ASSERT_THAT(res, testing::ElementsAre(1, 2, 3));
    TreeTestHelper::release_tree(head);
}
