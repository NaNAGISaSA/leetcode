#include <memory>

#include "0148_sort_list.h"

namespace leetcode::sort_list::merge_sort {

ListNode* Solution::sort_list(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = nullptr;
    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = nullptr;
    ListNode* head1 = sort_list(head);
    ListNode* head2 = sort_list(slow);

    auto dummy_head = std::make_unique<ListNode>();
    head = dummy_head.get();
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->val < head2->val) {
            head->next = head1;
            head1 = head1->next;
        } else {
            head->next = head2;
            head2 = head2->next;
        }
        head = head->next;
    }
    head->next = head1 != nullptr ? head1 : head2;
    return dummy_head->next;
}

}  // namespace leetcode::sort_list::merge_sort
