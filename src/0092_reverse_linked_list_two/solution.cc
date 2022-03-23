#include <vector>

#include "0092_reverse_linked_list_two.h"

namespace leetcode::reverse_linked_list_two {

ListNode* Solution::reverse_between(ListNode* head, int left, int right) {
    // right <= n
    if (left == right) {
        return head;
    }
    auto reverse_linked_list = [](ListNode* rhead, int num) {
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (num-- != 0) {
            next = rhead->next;
            rhead->next = prev;
            prev = rhead;
            rhead = next;
        }
        std::vector<ListNode*> ret;
        ret.push_back(prev);
        ret.push_back(rhead);
        return ret;
    };
    if (left == 1) {
        std::vector<ListNode*> ret = reverse_linked_list(head, right - left + 1);
        head->next = ret[1];
        return ret[0];
    }
    int start_nodes = left - 1;
    ListNode* khead = head;
    while (--start_nodes != 0) {
        khead = khead->next;
    }
    std::vector<ListNode*> ret = reverse_linked_list(khead->next, right - left + 1);
    khead->next->next = ret[1];
    khead->next = ret[0];
    return head;
}

}  // namespace leetcode::reverse_linked_list_two
