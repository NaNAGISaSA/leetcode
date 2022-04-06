#include <gtest/gtest.h>

#include "0108_convert_sorted_array_to_binary_search_tree.h"
#include "tree_test_utils.h"

using namespace leetcode::convert_sorted_array_to_binary_search_tree;
using namespace leetcode;

TEST(CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE, EXAMPLE_TEST) {
    auto head = Solution::sorted_array_to_height_balanced_bst({-3, 0, 9});
    ASSERT_EQ(head->val, 0);
    ASSERT_EQ(head->left->val, -3);
    ASSERT_EQ(head->right->val, 9);
    TreeTestHelper::release_tree(head);
}
