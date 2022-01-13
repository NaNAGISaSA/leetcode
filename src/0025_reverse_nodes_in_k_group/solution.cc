#include "0025_reverse_nodes_in_k_group.h"

namespace leetcode::reverse_nodes_in_k_group {

ListNode* Solution::reverse_k_group(ListNode* head, int k) {
    if (head == nullptr || k == 1) {
        return head;
    }
    ListNode* block_prev = nullptr;
    ListNode* block_tail = nullptr;
    ListNode* khead = head;
    ListNode* ktail = nullptr;

    auto need_reverse = [](ListNode* tmp, int cpk) {
        while (tmp != nullptr && cpk != 0) {
            --cpk;
            tmp = tmp->next;
        }
        return tmp;
    };

    auto reverse_k_list = [](ListNode* rhead, ListNode* rtail) {
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (rhead != rtail) {
            next = rhead->next;
            rhead->next = prev;
            prev = rhead;
            rhead = next;
        }
    };

    while (true) {
        ktail = need_reverse(khead, k - 1);
        if (ktail == nullptr) {
            break;
        }
        block_tail = ktail->next;
        // reverse and link
        reverse_k_list(khead, block_tail);
        if (block_prev == nullptr) {
            head = ktail;
        } else {
            block_prev->next = ktail;
        }
        khead->next = block_tail;
        // prepare for next
        block_prev = khead;
        khead = block_tail;
    }
    return head;
}

}  // namespace leetcode::reverse_nodes_in_k_group
