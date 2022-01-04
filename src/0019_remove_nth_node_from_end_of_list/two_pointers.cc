#include <memory>

#include "0019_remove_nth_node_from_end_of_list.h"

namespace leetcode::remove_nth_node_from_end_of_list::two_pointers {

ListNode* Solution::remove_nth_from_end(ListNode* head, int n) {
    // Constraints: 1 <= sz <= 30, 1 <= n <= sz
    auto dummy = std::make_unique<ListNode>();
    dummy->next = head;
    ListNode* slow = dummy.get();
    ListNode* fast = dummy.get();
    while (n != 0) {
        fast = fast->next;
        n--;
    }
    while (fast->next != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}

}  // namespace leetcode::remove_nth_node_from_end_of_list::two_pointers
