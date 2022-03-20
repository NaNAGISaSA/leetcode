#include <gtest/gtest.h>

#include "0023_merge_k_sorted_lists.h"
#include "linked_list_test_utils.h"

using namespace leetcode::merge_k_sorted_lists;
using namespace leetcode;

TEST(MERGE_K_SORTED_LISTS, EXAMPLE_TEST) {
    ListNode* list1 = LinkedListTestHelper<int>::make_linked_list(1, 4);
    ListNode* list2 = LinkedListTestHelper<int>::make_linked_list(1, 3);
    ListNode* list3 = LinkedListTestHelper<int>::make_linked_list(2);
    auto head1 = Solution::merge_k_lists({list1, list2, list3});
    ASSERT_EQ(head1->val, 1);
    ASSERT_EQ(head1->next->val, 1);
    ASSERT_EQ(head1->next->next->val, 2);
    ASSERT_EQ(head1->next->next->next->val, 3);
    ASSERT_EQ(head1->next->next->next->next->val, 4);
    ASSERT_EQ(head1->next->next->next->next->next, nullptr);
    auto head2 = Solution::merge_k_lists({});
    auto head3 = Solution::merge_k_lists({nullptr, nullptr});
    ASSERT_EQ(head2, nullptr);
    ASSERT_EQ(head3, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head1);
}
