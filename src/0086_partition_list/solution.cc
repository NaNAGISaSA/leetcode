#include "0086_partition_list.h"

namespace leetcode::partition_list {

ListNode* Solution::partition(ListNode* head, int x) {
    ListNode* less_head = nullptr;
    ListNode* less_tail = nullptr;
    ListNode* greater_head = nullptr;
    ListNode* greater_tail = nullptr;
    while (head != nullptr) {
        if (head->val < x) {
            if (less_head == nullptr) {
                less_head = head;
                less_tail = head;
            } else {
                less_tail->next = head;
                less_tail = less_tail->next;
            }
        } else {
            if (greater_head == nullptr) {
                greater_head = head;
                greater_tail = head;
            } else {
                greater_tail->next = head;
                greater_tail = greater_tail->next;
            }
        }
        head = head->next;
    }
    if (greater_head != nullptr) {
        greater_tail->next = nullptr;
    }
    if (less_head != nullptr) {
        less_tail->next = greater_head;
        return less_head;
    } else {
        return greater_head;
    }
}

}  // namespace leetcode::partition_list
