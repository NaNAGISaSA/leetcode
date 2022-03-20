#include <gtest/gtest.h>

#include "0002_add_two_numbers.h"
#include "linked_list_test_utils.h"

using namespace leetcode::add_two_numbers;
using namespace leetcode;

TEST(ADD_TWO_NUMBER, EXAMPLE_TEST_ONE) {
    ListNode* node1 = LinkedListTestHelper<int>::make_linked_list(2, 4, 3);
    ListNode* node2 = LinkedListTestHelper<int>::make_linked_list(5, 6, 4);
    ListNode* result = Solution::add_two_numbers(node1, node2);
    ASSERT_EQ(result->val, 7);
    ASSERT_EQ(result->next->val, 0);
    ASSERT_EQ(result->next->next->val, 8);
    ASSERT_EQ(result->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(node1);
    LinkedListTestHelper<int>::release_linked_list(node2);
    LinkedListTestHelper<int>::release_linked_list(result);
}

TEST(ADD_TWO_NUMBER, EXAMPLE_TEST_TWO) {
    ListNode* node1 = LinkedListTestHelper<int>::make_linked_list(0);
    ListNode* node2 = LinkedListTestHelper<int>::make_linked_list(0);
    ListNode* result = Solution::add_two_numbers(node1, node2);
    ASSERT_EQ(result->val, 0);
    ASSERT_EQ(result->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(node1);
    LinkedListTestHelper<int>::release_linked_list(node2);
    LinkedListTestHelper<int>::release_linked_list(result);
}
