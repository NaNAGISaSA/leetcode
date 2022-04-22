#include <gtest/gtest.h>

#include "0141_linked_list_cycle.h"
#include "linked_list_test_utils.h"

using namespace leetcode::linked_list_cycle;
using namespace leetcode;

TEST(LINKED_LIST_CYCLE, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(2, 4, 3, 0);
    head->next->next->next->next = head->next;
    ASSERT_TRUE(Solution::has_cycle(head));
    head->next->next->next->next = nullptr;
    LinkedListTestHelper<int>::release_linked_list(head);
}
