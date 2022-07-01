#include "0237_delete_node_in_a_linked_list.h"

#include <gtest/gtest.h>

#include "linked_list_test_utils.h"

using namespace leetcode::delete_node_in_a_linked_list;
using namespace leetcode;

TEST(DELETE_NODE_IN_A_LINKED_LIST, EXAMPLE_TEST) {
    auto head = LinkedListTestHelper<int>::make_linked_list(1, 2, 3);
    Solution::delete_node(head->next);
    ASSERT_EQ(head->val, 1);
    ASSERT_EQ(head->next->val, 3);
    ASSERT_EQ(head->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
