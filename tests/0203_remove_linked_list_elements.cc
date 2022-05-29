#include "0203_remove_linked_list_elements.h"

#include <gtest/gtest.h>

#include "linked_list_test_utils.h"

using namespace leetcode::remove_linked_list_elements;
using namespace leetcode;

TEST(REMOVE_LINKED_LIST_ELEMENTS, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(1, 4, 2);
    head = Solution::remove_elements(head, 4);
    ASSERT_EQ(head->val, 1);
    ASSERT_EQ(head->next->val, 2);
    ASSERT_EQ(head->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
    head = LinkedListTestHelper<int>::make_linked_list(1, 1);
    head = Solution::remove_elements(head, 1);
    ASSERT_EQ(head, nullptr);
}
