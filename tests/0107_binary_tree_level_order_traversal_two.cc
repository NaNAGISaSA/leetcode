#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0107_binary_tree_level_order_traversal_two.h"
#include "tree_test_utils.h"

using namespace leetcode::binary_tree_level_order_traversal_two;
using namespace leetcode;

TEST(BINARY_TREE_LEVEL_ORDER_TRAVESAL_TWO, EXAMPLE_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(Type::LEFT, 3, 9);
    head->right = TreeTestHelper::make_tree(Type::ALL, 20, 15, 7);
    auto result = Solution::level_order_bottom(head);
    ASSERT_EQ(result.size(), 3);
    ASSERT_THAT(result[0], testing::ElementsAre(15, 7));
    ASSERT_THAT(result[1], testing::ElementsAre(9, 20));
    ASSERT_THAT(result[2], testing::ElementsAre(3));
    TreeTestHelper::release_tree(head);
}
