#include <gtest/gtest.h>

#include "0138_copy_list_with_random_pointer.h"

using namespace leetcode::copy_list_with_random_pointer;

TEST(COPY_LIST_WITH_RANDOM_POINTER, MAP_SOLUTION_TEST) {
    Node node(10);
    node.next = nullptr;
    node.random = &node;
    Node* head = map::Solution::copy_random_list(&node);
    ASSERT_EQ(head->val, 10);
    ASSERT_EQ(head->next, nullptr);
    ASSERT_EQ(head->random, head);
    delete head;
}

TEST(COPY_LIST_WITH_RANDOM_POINTER, SPACE_OPT_SOLUTION_TEST) {
    Node node(10);
    node.next = nullptr;
    node.random = &node;
    Node* head = space_opt::Solution::copy_random_list(&node);
    ASSERT_EQ(head->val, 10);
    ASSERT_EQ(head->next, nullptr);
    ASSERT_EQ(head->random, head);
    delete head;
}
