#include "0199_binary_tree_right_side_view.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::binary_tree_right_side_view;
using namespace leetcode;

TEST(BINARY_TREE_RIGHT_SIDE_VIEW, LEVEL_ORDER_SOLUTION_TEST) {
    auto root = TreeTestHelper::make_tree(1);
    root->left = TreeTestHelper::make_tree(Type::RIGHT, 2, 5);
    root->right = TreeTestHelper::make_tree(Type::RIGHT, 3, 4);
    auto res = level_order::Solution::right_side_view(root);
    ASSERT_THAT(res, testing::ElementsAre(1, 3, 4));
    TreeTestHelper::release_tree(root);
}

TEST(BINARY_TREE_RIGHT_SIDE_VIEW, RECURSE_SOLUTION_TEST) {
    auto root = TreeTestHelper::make_tree(1);
    root->left = TreeTestHelper::make_tree(Type::RIGHT, 2, 5);
    root->right = TreeTestHelper::make_tree(Type::RIGHT, 3, 4);
    auto res = recurse::Solution::right_side_view(root);
    ASSERT_THAT(res, testing::ElementsAre(1, 3, 4));
    TreeTestHelper::release_tree(root);
}
