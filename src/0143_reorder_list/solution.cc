#include "0143_reorder_list.h"

namespace leetcode::reorder_list {

void Solution::reorder_list(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    auto reserve_list = [](ListNode* begin) {
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (begin != nullptr) {
            next = begin->next;
            begin->next = prev;
            prev = begin;
            begin = next;
        }
        return prev;
    };

    fast = reserve_list(slow->next);
    slow->next = nullptr;
    slow = head;
    ListNode* next = nullptr;
    while (fast != nullptr) {
        next = slow->next;
        slow->next = fast;
        slow = next;
        next = fast->next;
        fast->next = slow;
        fast = next;
    }
}

}  // namespace leetcode::reorder_list
