#include <gtest/gtest.h>

#include "0092_reverse_linked_list_two.h"
#include "linked_list_test_utils.h"

using namespace leetcode::reverse_linked_list_two;
using namespace leetcode;

TEST(REVERSE_LINKED_LIST_TWO, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(1, 2, 3);
    head = Solution::reverse_between(head, 1, 2);
    ASSERT_EQ(head->val, 2);
    ASSERT_EQ(head->next->val, 1);
    ASSERT_EQ(head->next->next->val, 3);
    ASSERT_EQ(head->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
