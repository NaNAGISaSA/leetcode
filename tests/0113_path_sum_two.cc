#include "0113_path_sum_two.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::path_sum_two;
using namespace leetcode;

TEST(PATH_SUM_TWO, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(Type::LEFT, 5, 4);
    root->right = TreeTestHelper::make_tree(8, 13, 4);
    root->left->left = TreeTestHelper::make_tree(11, 7, 2);
    auto result = Solution::path_sum(root, 22);
    ASSERT_EQ(result.size(), 1);
    ASSERT_THAT(result[0], testing::ElementsAre(5, 4, 11, 2));
    TreeTestHelper::release_tree(root);
}
