#include <gtest/gtest.h>

#include "0112_path_sum.h"
#include "tree_test_utils.h"

using namespace leetcode::path_sum;
using namespace leetcode;

TEST(PATH_SUM, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(Type::LEFT, 5, 4);
    root->right = TreeTestHelper::make_tree(Type::ALL, 8, 13, 4);
    root->left->left = TreeTestHelper::make_tree(Type::ALL, 11, 7, 2);
    ASSERT_TRUE(Solution::has_path_sum(root, 22));
    TreeTestHelper::release_tree(root);
}
