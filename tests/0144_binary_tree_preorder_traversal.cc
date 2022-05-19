#include "0144_binary_tree_preorder_traversal.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::binary_tree_preorder_traversal;
using namespace leetcode;

TEST(BINARY_TREE_PREORDER_TRAVESAL, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(1, 2, 3);
    auto result = Solution::preorder_traversal(root);
    ASSERT_THAT(result, testing::ElementsAre(1, 2, 3));
    TreeTestHelper::release_tree(root);
}
