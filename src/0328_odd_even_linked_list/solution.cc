#include "0328_odd_even_linked_list.h"

namespace leetcode::odd_even_linked_list {

ListNode* Solution::odd_even_list(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* odd_head = head;
    ListNode* even_head = head->next;
    ListNode* odd_head_record = odd_head;
    ListNode* even_head_record = even_head;
    head = head->next->next;
    while (head != nullptr && head->next != nullptr) {
        odd_head->next = head;
        odd_head = odd_head->next;
        even_head->next = head->next;
        even_head = even_head->next;
        head = head->next->next;
    }
    if (head != nullptr) {
        odd_head->next = head;
        odd_head = odd_head->next;
    }
    odd_head->next = even_head_record;
    even_head->next = nullptr;
    return odd_head_record;
}

}  // namespace leetcode::odd_even_linked_list
