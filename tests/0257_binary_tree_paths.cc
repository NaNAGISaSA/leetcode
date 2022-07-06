#include "0257_binary_tree_paths.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::binary_tree_paths;
using namespace leetcode;

TEST(BINARY_TREE_PATHS, EXAMPLE_TEST) {
    auto root = TreeTestHelper::make_tree(Type::RIGHT, 1, 3);
    root->left = TreeTestHelper::make_tree(Type::RIGHT, 2, 5);
    auto result = Solution::binary_tree_paths(root);
    ASSERT_TRUE(result[0] != result[1]);
    ASSERT_TRUE(result[0] == "1->2->5" || result[0] == "1->3");
    ASSERT_TRUE(result[1] == "1->2->5" || result[1] == "1->3");
    TreeTestHelper::release_tree(root);
}
