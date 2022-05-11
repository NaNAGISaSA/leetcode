#include "0160_intersection_of_two_linked_lists.h"

namespace leetcode::intersection_of_two_linked_lists {

ListNode* Solution::get_intersection_node(ListNode* head1, ListNode* head2) {
    ListNode* cp_head1 = head1;
    ListNode* cp_head2 = head2;
    int len1 = 1, len2 = 1;
    while (cp_head1->next != nullptr) {
        cp_head1 = cp_head1->next;
        ++len1;
    }
    while (cp_head2->next != nullptr) {
        cp_head2 = cp_head2->next;
        ++len2;
    }
    if (cp_head1 != cp_head2) {
        return nullptr;
    }
    if (len1 > len2) {
        cp_head1 = head1;
        cp_head2 = head2;
        len1 -= len2;
    } else {
        cp_head1 = head2;
        cp_head2 = head1;
        len1 = len2 - len1;
    }
    while (len1-- != 0) {
        cp_head1 = cp_head1->next;
    }
    while (cp_head1 != cp_head2) {
        cp_head1 = cp_head1->next;
        cp_head2 = cp_head2->next;
    }
    return cp_head1;
}

}  // namespace leetcode::intersection_of_two_linked_lists
