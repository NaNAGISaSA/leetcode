#include "0234_palindrome_linked_list.h"

#include <gtest/gtest.h>

#include "linked_list_test_utils.h"

using namespace leetcode::palindrome_linked_list;
using namespace leetcode;

TEST(PALINDROME_LINKED_LIST, EXAMPLE_TEST) {
    auto head = LinkedListTestHelper<int>::make_linked_list(1, 2, 1);
    ASSERT_TRUE(Solution::is_palindrome(head));
    head->val = 3;
    ASSERT_FALSE(Solution::is_palindrome(head));
    LinkedListTestHelper<int>::release_linked_list(head);
}
