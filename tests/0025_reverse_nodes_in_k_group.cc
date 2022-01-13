#include <gtest/gtest.h>

#include "0025_reverse_nodes_in_k_group.h"
#include "linked_list_test_utils.h"

using leetcode::utils::LinkedListTestHelper;
using namespace leetcode::reverse_nodes_in_k_group;

TEST(REVERSE_NODES_IN_K_GROUP, EXAMPLE_TEST) {
    ListNode* list1 = LinkedListTestHelper<int>::make_linked_list(1, 2, 3, 4, 5);
    auto head = Solution::reverse_k_group(list1, 2);
    ASSERT_EQ(head->val, 2);
    ASSERT_EQ(head->next->val, 1);
    ASSERT_EQ(head->next->next->val, 4);
    ASSERT_EQ(head->next->next->next->val, 3);
    ASSERT_EQ(head->next->next->next->next->val, 5);
    ASSERT_EQ(head->next->next->next->next->next, nullptr);
    head = Solution::reverse_k_group(head, 3);
    ASSERT_EQ(head->val, 4);
    ASSERT_EQ(head->next->val, 1);
    ASSERT_EQ(head->next->next->val, 2);
    ASSERT_EQ(head->next->next->next->val, 3);
    ASSERT_EQ(head->next->next->next->next->val, 5);
    ASSERT_EQ(head->next->next->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
