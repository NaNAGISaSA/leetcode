#include <gtest/gtest.h>

#include "0024_swap_nodes_in_pairs.h"
#include "linked_list_test_utils.h"

using namespace leetcode::swap_nodes_in_pairs;
using namespace leetcode;

TEST(SWAP_NODES_IN_PAIRS, EXAMPLE_TEST) {
    ListNode* list1 = LinkedListTestHelper<int>::make_linked_list(1, 2, 3, 4, 5);
    auto head1 = Solution::swap_pairs(list1);
    ASSERT_EQ(head1->val, 2);
    ASSERT_EQ(head1->next->val, 1);
    ASSERT_EQ(head1->next->next->val, 4);
    ASSERT_EQ(head1->next->next->next->val, 3);
    ASSERT_EQ(head1->next->next->next->next->val, 5);
    ASSERT_EQ(head1->next->next->next->next->next, nullptr);
    auto head2 = Solution::swap_pairs(nullptr);
    ASSERT_EQ(head2, nullptr);
    LinkedListTestHelper<int>::release_linked_list(list1);
}
