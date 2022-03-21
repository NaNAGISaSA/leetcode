#include <gtest/gtest.h>

#include "0083_remove_duplicates_from_sorted_list.h"
#include "linked_list_test_utils.h"

using namespace leetcode::remove_duplicates_from_sorted_list;
using namespace leetcode;

TEST(REMOVE_DUPLICATES_FROM_SORTED_LIST, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(1, 1, 2, 3, 3);
    head = Solution::delete_duplicates(head);
    ASSERT_EQ(head->val, 1);
    ASSERT_EQ(head->next->val, 2);
    ASSERT_EQ(head->next->next->val, 3);
    ASSERT_EQ(head->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
