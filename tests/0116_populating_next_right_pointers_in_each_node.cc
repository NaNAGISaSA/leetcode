#include <gtest/gtest.h>

#include "0116_populating_next_right_pointers_in_each_node.h"

using namespace leetcode::populating_next_right_pointers_in_each_node;
using namespace leetcode;

TEST(POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE, EXAMPLE_TEST) {
    Node root(1), left(2), right(3);
    root.left = &left;
    root.right = &right;
    Node* rt = Solution::connect(&root);
    ASSERT_EQ(rt->next, nullptr);
    ASSERT_EQ(rt->left->next, &right);
    ASSERT_EQ(rt->left->next->next, nullptr);
}
