#include "0328_odd_even_linked_list.h"

#include <gtest/gtest.h>

#include "linked_list_test_utils.h"

using namespace leetcode::odd_even_linked_list;
using namespace leetcode;

TEST(ODD_EVEN_LINKED_LIST, EXAMPLE_TEST) {
    auto head = LinkedListTestHelper<int>::make_linked_list(1, 2, 3);
    head = Solution::odd_even_list(head);
    ASSERT_EQ(head->val, 1);
    ASSERT_EQ(head->next->val, 3);
    ASSERT_EQ(head->next->next->val, 2);
    ASSERT_EQ(head->next->next->next, nullptr);
    LinkedListTestHelper<int>::release_linked_list(head);
}
