#include <gtest/gtest.h>

#include "0148_sort_list.h"
#include "linked_list_test_utils.h"

using namespace leetcode::sort_list;
using namespace leetcode;

TEST(SORT_LIST, HEAP_SORT_SOLUTION_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(2, 4, 3, 0);
    head = heap_sort::Solution::sort_list(head);
    ASSERT_EQ(head->val, 0);
    ASSERT_EQ(head->next->val, 2);
    ASSERT_EQ(head->next->next->val, 3);
    ASSERT_EQ(head->next->next->next->val, 4);
    ASSERT_EQ(head->next->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}

TEST(SORT_LIST, MERGE_SORT_SOLUTION_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(2, 4, 3, 0);
    head = merge_sort::Solution::sort_list(head);
    ASSERT_EQ(head->val, 0);
    ASSERT_EQ(head->next->val, 2);
    ASSERT_EQ(head->next->next->val, 3);
    ASSERT_EQ(head->next->next->next->val, 4);
    ASSERT_EQ(head->next->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
