#include "0206_reverse_linked_list.h"

#include <gtest/gtest.h>

#include "linked_list_test_utils.h"

using namespace leetcode::reverse_linked_list;
using namespace leetcode;

TEST(REVERSE_LINKED_LIST, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(1, 2);
    head = Solution::reverse_list(head);
    ASSERT_EQ(head->val, 2);
    ASSERT_EQ(head->next->val, 1);
    ASSERT_EQ(head->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
