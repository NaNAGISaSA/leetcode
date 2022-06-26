#include "0230_kth_smallest_element_in_a_bst.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::kth_smallest_element_in_a_bst;
using namespace leetcode;

TEST(KTH_SMALLEST_ELEMENT_IN_A_BST, EXAMPLE_TEST) {
    auto root = TreeTestHelper::make_tree(Type::RIGHT, 3, 4);
    root->left = TreeTestHelper::make_tree(Type::RIGHT, 1, 2);
    ASSERT_EQ(Solution::kth_smallest(root, 2), 2);
    TreeTestHelper::release_tree(root);
}
