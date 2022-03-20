#include <gtest/gtest.h>

#include "0021_merge_two_sorted_lists.h"
#include "linked_list_test_utils.h"

using namespace leetcode::merge_two_sorted_lists;
using namespace leetcode;

TEST(MERGE_TWO_SORTED_LISTS, EXAMPLE_TEST) {
    ListNode* list1 = LinkedListTestHelper<int>::make_linked_list(2, 3);
    ListNode* list2 = LinkedListTestHelper<int>::make_linked_list(2, 4);
    ListNode* head = Solution::merge_two_lists(list1, list2);
    ASSERT_EQ(head->val, 2);
    ASSERT_EQ(head->next->val, 2);
    ASSERT_EQ(head->next->next->val, 3);
    ASSERT_EQ(head->next->next->next->val, 4);
    ASSERT_EQ(head->next->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
