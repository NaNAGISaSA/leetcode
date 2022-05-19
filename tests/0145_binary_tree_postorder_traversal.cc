#include "0145_binary_tree_postorder_traversal.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::binary_tree_postorder_traversal;
using namespace leetcode;

TEST(BINARY_TREE_POSTORDER_TRAVESAL, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(Type::RIGHT, 3, 2);
    root->right->left = TreeTestHelper::make_tree(1);
    auto result = Solution::postorder_traversal(root);
    ASSERT_THAT(result, testing::ElementsAre(1, 2, 3));
    TreeTestHelper::release_tree(root);
}
