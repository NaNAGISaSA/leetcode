#include "0404_sum_of_left_leaves.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::sum_of_left_leaves;
using namespace leetcode;

TEST(SUM_OF_LEFT_LEAVES, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(Type::LEFT, 3, 9);
    root->right = TreeTestHelper::make_tree(20, 15, 7);
    ASSERT_EQ(Solution::sum_of_left_leaves(root), 24);
    TreeTestHelper::release_tree(root);
}
