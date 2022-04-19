#include <gtest/gtest.h>

#include "0117_populating_next_right_pointers_in_each_node_two.h"

using namespace leetcode::populating_next_right_pointers_in_each_node_two;
using namespace leetcode;

TEST(POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_TWO, EXAMPLE_TEST) {
    Node root(1), left(2);
    root.left = &left;
    Node* rt = Solution::connect(&root);
    ASSERT_EQ(rt->next, nullptr);
    ASSERT_EQ(rt->left->next, nullptr);
}
