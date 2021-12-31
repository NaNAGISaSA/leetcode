#include <gtest/gtest.h>

#include "0019.remove_nth_node_from_end_of_list.h"
#include "linked_list_test_utils.h"

using leetcode::remove_nth_node_from_end_of_list::Solution;
using leetcode::utils::LinkedListTestHelper;

TEST(REMOVE_NTH_NODE_FROM_END_OF_LIST, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(1, 2, 3);
    ListNode* head1 = Solution::remove_nth_from_end(head, 4);
    ASSERT_EQ(head1->val, 1);
    ASSERT_EQ(head1->next->val, 2);
    ASSERT_EQ(head1->next->next->val, 3);
    ASSERT_EQ(head1->next->next->next, nullptr);
    ListNode* head2 = Solution::remove_nth_from_end(head, 3);
    ASSERT_EQ(head2->val, 2);
    ASSERT_EQ(head2->next->val, 3);
    ASSERT_EQ(head2->next->next, nullptr);
    ListNode* head3 = Solution::remove_nth_from_end(head2, 1);
    ASSERT_EQ(head3->val, 2);
    ASSERT_EQ(head3->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
