#include "0382_linked_list_random_node.h"

#include <gtest/gtest.h>

#include "linked_list_test_utils.h"

using namespace leetcode::linked_list_random_node;
using namespace leetcode;

TEST(LINKED_LIST_RANDOM_NODE, EXAMPLE_TEST) {
    ListNode* head = LinkedListTestHelper<int>::make_linked_list(12);
    Solution solution(head);
    ASSERT_EQ(solution.get_random(), 12);
}
