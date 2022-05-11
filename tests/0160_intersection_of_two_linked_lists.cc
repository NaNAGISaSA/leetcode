#include "0160_intersection_of_two_linked_lists.h"

#include <gtest/gtest.h>

#include "linked_list_test_utils.h"

using namespace leetcode::intersection_of_two_linked_lists;
using namespace leetcode;

TEST(INTERSECTION_OF_TWO_LINKED_LISTS, EXAMPLE_TEST) {
    ListNode* head1 = LinkedListTestHelper<int>::make_linked_list(2, 4, 3);
    ListNode* head2 = LinkedListTestHelper<int>::make_linked_list(5, 6);
    head2->next->next = head1->next;
    ASSERT_EQ(Solution::get_intersection_node(head1, head2), head1->next);
    head2->next->next = nullptr;
    LinkedListTestHelper<int>::release_linked_list(head1);
    LinkedListTestHelper<int>::release_linked_list(head2);
}
