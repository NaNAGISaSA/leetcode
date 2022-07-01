#include "0237_delete_node_in_a_linked_list.h"

namespace leetcode::delete_node_in_a_linked_list {

void Solution::delete_node(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

}  // namespace leetcode::delete_node_in_a_linked_list
