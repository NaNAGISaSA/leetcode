#include "0173_binary_search_tree_iterator.h"

#include <gtest/gtest.h>

#include "tree_test_utils.h"

using namespace leetcode::binary_search_tree_iterator;
using namespace leetcode;

TEST(BINARY_SEARCH_TREE_ITERATOR, EXAMPLE_TEST) {
    TreeNode* root = TreeTestHelper::make_tree(Type::LEFT, 7, 3);
    root->right = TreeTestHelper::make_tree(15, 9, 20);
    BSTIterator iter(root);
    ASSERT_EQ(iter.next(), 3);
    ASSERT_EQ(iter.next(), 7);
    ASSERT_EQ(iter.next(), 9);
    ASSERT_EQ(iter.next(), 15);
    ASSERT_TRUE(iter.has_next());
    ASSERT_EQ(iter.next(), 20);
    ASSERT_FALSE(iter.has_next());
    TreeTestHelper::release_tree(root);
}
