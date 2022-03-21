#include <gtest/gtest.h>

#include "0100_same_tree.h"
#include "tree_test_utils.h"

using namespace leetcode::same_tree;
using namespace leetcode;

TEST(SAME_TREE, EXAMPLE_TEST) {
    TreeNode* head = TreeTestHelper::make_tree(Type::ALL, 1, 2, 3);
    ASSERT_TRUE(Solution::is_same_tree(head, head));
    TreeTestHelper::release_tree(head);
}
