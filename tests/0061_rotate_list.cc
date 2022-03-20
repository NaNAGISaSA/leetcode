#include <gtest/gtest.h>

#include "0061_rotate_list.h"
#include "linked_list_test_utils.h"

using namespace leetcode::rotate_list;
using namespace leetcode;

TEST(ROTATE_LIST, EXAMPLE_TEST) {
    ListNode* list1 = LinkedListTestHelper<int>::make_linked_list(1, 2, 3);
    ListNode* rotate_head = Solution::rotate_right(list1, 2);
    ASSERT_EQ(rotate_head->val, 2);
    ASSERT_EQ(rotate_head->next->val, 3);
    ASSERT_EQ(rotate_head->next->next->val, 1);
    ASSERT_EQ(rotate_head->next->next->next, nullptr);
    rotate_head = Solution::rotate_right(rotate_head, 4);
    ASSERT_EQ(rotate_head->val, 1);
    ASSERT_EQ(rotate_head->next->val, 2);
    ASSERT_EQ(rotate_head->next->next->val, 3);
    ASSERT_EQ(rotate_head->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(rotate_head);
}
