#include "0129_sum_root_to_leaf_numbers.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::sum_root_to_leaf_numbers;
using namespace leetcode;

TEST(SUM_ROOT_TO_LEAF_NUMBERS, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(Type::RIGHT, 4, 0);
    root->left = TreeTestHelper::make_tree(9, 5, 1);
    ASSERT_EQ(Solution::sum_numbers(root), 1026);
    TreeTestHelper::release_tree(root);
}
