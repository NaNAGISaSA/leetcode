#include "0095_unique_binary_search_trees_two.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::unique_binary_search_trees_two;
using namespace leetcode;

TEST(UNIQUE_BINARY_SEARCH_TREES_TWO, EXAMPLE_TEST) {
    auto res = Solution::generate_trees(2);
    ASSERT_EQ(res.size(), 2);
    ASSERT_EQ(res[0]->val, 1);
    ASSERT_EQ(res[0]->right->val, 2);
    ASSERT_EQ(res[0]->right->left, nullptr);
    ASSERT_EQ(res[0]->right->right, nullptr);
    ASSERT_EQ(res[0]->left, nullptr);
    ASSERT_EQ(res[1]->val, 2);
    ASSERT_EQ(res[1]->left->val, 1);
    ASSERT_EQ(res[1]->left->left, nullptr);
    ASSERT_EQ(res[1]->left->right, nullptr);
    ASSERT_EQ(res[1]->right, nullptr);
    for (auto& head : res) {
        TreeTestHelper::release_tree(head);
    }
}
