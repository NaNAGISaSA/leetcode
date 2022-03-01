#include "0061_rotate_list.h"

namespace leetcode::rotate_list {

ListNode* Solution::rotate_right(ListNode* head, int k) {
    if (k == 0 || head == nullptr) {
        return head;
    }
    int node_num = 0;
    ListNode* curr_head = head;
    ListNode* prev = nullptr;
    while (curr_head != nullptr) {
        prev = curr_head;
        curr_head = curr_head->next;
        ++node_num;
    }
    k %= node_num;
    if (k == 0) {
        return head;
    }
    prev->next = head;
    node_num -= k;
    prev = nullptr;
    curr_head = head;
    while (node_num != 0) {
        prev = curr_head;
        curr_head = curr_head->next;
        --node_num;
    }
    prev->next = nullptr;
    return curr_head;
}

}  // namespace leetcode::rotate_list
