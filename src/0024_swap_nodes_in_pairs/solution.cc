#include "0024_swap_nodes_in_pairs.h"

namespace leetcode::swap_nodes_in_pairs {

ListNode* Solution::swap_pairs(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    ListNode* rhead = head;
    ListNode* rtail = head->next;
    while (rhead != nullptr && rtail != nullptr) {
        next = rtail->next;
        // reverse and link
        rtail->next = rhead;
        rhead->next = next;
        if (prev == nullptr) {
            head = rtail;
        } else {
            prev->next = rtail;
        }
        // prepare for next operation
        prev = rhead;
        rhead = next;
        if (rhead != nullptr) {
            rtail = rhead->next;
        }
    }
    return head;
}

}  // namespace leetcode::swap_nodes_in_pairs
