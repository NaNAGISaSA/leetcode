#include <gtest/gtest.h>

#include "0143_reorder_list.h"
#include "linked_list_test_utils.h"

using namespace leetcode::reorder_list;
using namespace leetcode;

TEST(REORDER_LIST, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(2, 4, 3, 0);
    Solution::reorder_list(head);
    ASSERT_EQ(head->val, 2);
    ASSERT_EQ(head->next->val, 0);
    ASSERT_EQ(head->next->next->val, 4);
    ASSERT_EQ(head->next->next->next->val, 3);
    ASSERT_EQ(head->next->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
