#include <gtest/gtest.h>

#include "0082_remove_duplicates_from_sorted_list_two.h"
#include "linked_list_test_utils.h"

using namespace leetcode::remove_duplicates_from_sorted_list_two;
using namespace leetcode;

TEST(REMOVE_DUPLICATES_FROM_SORTED_LIST_TWO, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(1, 1, 2, 3, 3);
    head = Solution::delete_duplicates(head);
    ASSERT_EQ(head->val, 2);
    ASSERT_EQ(head->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
