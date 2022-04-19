#include <gtest/gtest.h>

#include "0124_binary_tree_maximum_path_sum.h"
#include "tree_test_utils.h"

using namespace leetcode::binary_tree_maximum_path_sum;
using namespace leetcode;

TEST(BINARY_TREE_MAXIMUM_PATH_SUM, EXAMPLE_TEST) {
    auto root = TreeTestHelper::make_tree(Type::LEFT, -10, 9);
    root->right = TreeTestHelper::make_tree(Type::ALL, 20, 15, 7);
    ASSERT_EQ(Solution::max_path_sum(root), 42);
    TreeTestHelper::release_tree(root);
}
