#include <memory>
#include <queue>

#include "0148_sort_list.h"

namespace leetcode::sort_list::heap_sort {

ListNode* Solution::sort_list(ListNode* head) {
    if (head == nullptr) {
        return head;
    }
    auto cmp = [](ListNode* a, ListNode* b) { return a->val >= b->val; };
    std::priority_queue<ListNode*, std::vector<ListNode*>, decltype(cmp)> min_heap(cmp);
    while (head != nullptr) {
        min_heap.push(head);
        head = head->next;
    }
    auto dummy = std::make_unique<ListNode>(-1);
    head = dummy.get();
    while (!min_heap.empty()) {
        ListNode* top = min_heap.top();
        min_heap.pop();
        head->next = top;
        head = head->next;
    }
    head->next = nullptr;
    return dummy.get()->next;
}

}  // namespace leetcode::sort_list::heap_sort
