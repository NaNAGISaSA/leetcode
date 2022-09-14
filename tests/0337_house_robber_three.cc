#include "0337_house_robber_three.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::house_robber_three;
using namespace leetcode;

TEST(HOUSE_ROBBER_THREE, FIRST_SOLUTION_TEST) {
    auto root1 = TreeTestHelper::make_tree(3);
    root1->left = TreeTestHelper::make_tree(Type::RIGHT, 2, 3);
    root1->right = TreeTestHelper::make_tree(Type::RIGHT, 3, 1);
    ASSERT_EQ(first::Solution::rob(root1), 7);
    TreeTestHelper::release_tree(root1);

    auto root2 = TreeTestHelper::make_tree(3);
    root2->left = TreeTestHelper::make_tree(4, 1, 3);
    root2->right = TreeTestHelper::make_tree(Type::RIGHT, 5, 1);
    ASSERT_EQ(first::Solution::rob(root2), 9);
    TreeTestHelper::release_tree(root2);
}

TEST(HOUSE_ROBBER_THREE, CLEANER_SOLUTION_TEST) {
    auto root1 = TreeTestHelper::make_tree(3);
    root1->left = TreeTestHelper::make_tree(Type::RIGHT, 2, 3);
    root1->right = TreeTestHelper::make_tree(Type::RIGHT, 3, 1);
    ASSERT_EQ(cleaner::Solution::rob(root1), 7);
    TreeTestHelper::release_tree(root1);

    auto root2 = TreeTestHelper::make_tree(3);
    root2->left = TreeTestHelper::make_tree(4, 1, 3);
    root2->right = TreeTestHelper::make_tree(Type::RIGHT, 5, 1);
    ASSERT_EQ(cleaner::Solution::rob(root2), 9);
    TreeTestHelper::release_tree(root2);
}
