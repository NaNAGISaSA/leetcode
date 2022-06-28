#include "0234_palindrome_linked_list.h"

namespace leetcode::palindrome_linked_list {

bool Solution::is_palindrome(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    slow = slow->next;
    while (slow != nullptr) {
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    while (prev != nullptr) {
        if (prev->val != head->val) {
            return false;
        }
        prev = prev->next;
        head = head->next;
    }
    return true;
}

}  // namespace leetcode::palindrome_linked_list
