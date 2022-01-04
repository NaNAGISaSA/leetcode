#include <gtest/gtest.h>

#include "0019_remove_nth_node_from_end_of_list.h"
#include "linked_list_test_utils.h"

using namespace leetcode::remove_nth_node_from_end_of_list;
using leetcode::utils::LinkedListTestHelper;

TEST(REMOVE_NTH_NODE_FROM_END_OF_LIST, FIRST_SOLUTION_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(1, 2, 3);
    ListNode* head1 = first::Solution::remove_nth_from_end(head, 4);
    ASSERT_EQ(head1->val, 1);
    ASSERT_EQ(head1->next->val, 2);
    ASSERT_EQ(head1->next->next->val, 3);
    ASSERT_EQ(head1->next->next->next, nullptr);
    ListNode* head2 = first::Solution::remove_nth_from_end(head, 3);
    ASSERT_EQ(head2->val, 2);
    ASSERT_EQ(head2->next->val, 3);
    ASSERT_EQ(head2->next->next, nullptr);
    ListNode* head3 = first::Solution::remove_nth_from_end(head2, 1);
    ASSERT_EQ(head3->val, 2);
    ASSERT_EQ(head3->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}

TEST(REMOVE_NTH_NODE_FROM_END_OF_LIST, TWO_POINTERS_SOLUTION_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(1, 2, 3);
    ListNode* head1 = two_pointers::Solution::remove_nth_from_end(head, 3);
    ASSERT_EQ(head1->val, 2);
    ASSERT_EQ(head1->next->val, 3);
    ASSERT_EQ(head1->next->next, nullptr);
    ListNode* head2 = two_pointers::Solution::remove_nth_from_end(head1, 1);
    ASSERT_EQ(head2->val, 2);
    ASSERT_EQ(head2->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
