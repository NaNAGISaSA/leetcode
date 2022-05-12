#include "0160_intersection_of_two_linked_lists.h"

namespace leetcode::intersection_of_two_linked_lists::smart {

ListNode* Solution::get_intersection_node(ListNode* head1, ListNode* head2) {
    ListNode *h1 = head1, *h2 = head2;
    while (h1 != h2) {
        h1 = h1 == nullptr ? head2 : h1->next;
        h2 = h2 == nullptr ? head1 : h2->next;
    }
    return h1;
}

}  // namespace leetcode::intersection_of_two_linked_lists::smart