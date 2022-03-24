#include <gtest/gtest.h>

#include "0086_partition_list.h"
#include "linked_list_test_utils.h"

using namespace leetcode::partition_list;
using namespace leetcode;

TEST(PARTITION_LIST, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(1, 4, 3, 2, 5, 2);
    head = Solution::partition(head, 3);
    ASSERT_EQ(head->val, 1);
    ASSERT_EQ(head->next->val, 2);
    ASSERT_EQ(head->next->next->val, 2);
    ASSERT_EQ(head->next->next->next->val, 4);
    ASSERT_EQ(head->next->next->next->next->val, 3);
    ASSERT_EQ(head->next->next->next->next->next->val, 5);
    ASSERT_EQ(head->next->next->next->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
