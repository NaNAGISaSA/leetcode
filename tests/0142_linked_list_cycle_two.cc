#include <gtest/gtest.h>

#include "0142_linked_list_cycle_two.h"
#include "linked_list_test_utils.h"

using namespace leetcode::linked_list_cycle_two;
using namespace leetcode;

TEST(LINKED_LIST_CYCLE_TWO, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(2, 4, 3, 0);
    head->next->next->next->next = head->next;
    ASSERT_EQ(Solution::detect_cycle(head), head->next);
    head->next->next->next->next = nullptr;
    LinkedListTestHelper<int>::release_linked_list(head);
}
