#include <gtest/gtest.h>

#include "0109_convert_sorted_list_to_binary_search_tree.h"
#include "linked_list_test_utils.h"
#include "tree_test_utils.h"

using namespace leetcode::convert_sorted_list_to_binary_search_tree;
using namespace leetcode;

TEST(CONVERT_SORTED_LIST_TO_BINARY_SEARCH_TREE, EXAMPLE_TEST) {
    auto head = LinkedListTestHelper<int>::make_linked_list(-3, 0, 9);
    auto root = Solution::sorted_list_to_height_balanced_bst(head);
    ASSERT_EQ(root->val, 0);
    ASSERT_EQ(root->left->val, -3);
    ASSERT_EQ(root->right->val, 9);
    TreeTestHelper::release_tree(root);
    LinkedListTestHelper<int>::release_linked_list(head);
}
