#include "0019.remove_nth_node_from_end_of_list.h"

namespace leetcode::remove_nth_node_from_end_of_list {

ListNode* Solution::remove_nth_from_end(ListNode* head, int n) {
    // Constraints: 1 <= sz <= 30, so head can not be nullptr
    ListNode* curr_head = head;
    while (curr_head != nullptr) {
        curr_head = curr_head->next;
        --n;
    }
    if (n > 0) {
        return head;
    } else if (n == 0) {
        return head->next;
    }
    curr_head = head;
    while (++n != 0) {
        curr_head = curr_head->next;
    }
    curr_head->next = curr_head->next->next;
    return head;
}

}  // namespace leetcode::remove_nth_node_from_end_of_list
