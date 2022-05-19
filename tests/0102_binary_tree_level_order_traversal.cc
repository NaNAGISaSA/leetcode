#include "0102_binary_tree_level_order_traversal.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::binary_tree_level_order_traversal;
using namespace leetcode;

TEST(BINARY_TREE_LEVEL_ORDER_TRAVESAL, EXAMPLE_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(Type::LEFT, 3, 9);
    head->right = TreeTestHelper::make_tree(20, 15, 7);
    auto result = Solution::level_order(head);
    ASSERT_EQ(result.size(), 3);
    ASSERT_THAT(result[0], testing::ElementsAre(3));
    ASSERT_THAT(result[1], testing::ElementsAre(9, 20));
    ASSERT_THAT(result[2], testing::ElementsAre(15, 7));
    TreeTestHelper::release_tree(head);
}
