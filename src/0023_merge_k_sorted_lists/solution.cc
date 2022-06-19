#include <memory>
#include <queue>

#include "0023_merge_k_sorted_lists.h"

namespace leetcode::merge_k_sorted_lists {

ListNode* Solution::merge_k_lists(const std::vector<ListNode*>& lists) {
    if (lists.size() == 0) {
        return nullptr;
    }
    auto cmp = [](const ListNode* node1, const ListNode* node2) { return node1->val > node2->val; };
    std::priority_queue<ListNode*, std::vector<ListNode*>, decltype(cmp)> min_heap(cmp);
    for (size_t i = 0; i < lists.size(); ++i) {
        if (lists[i] != nullptr) {
            min_heap.push(lists[i]);
        }
    }
    if (min_heap.size() == 0) {
        return nullptr;
    }
    auto dummy = std::make_unique<ListNode>();
    ListNode* head = dummy.get();
    while (min_heap.size()) {
        ListNode* top = min_heap.top();
        min_heap.pop();
        head->next = top;
        head = head->next;
        if (top->next != nullptr) {
            min_heap.push(top->next);
        }
    }
    return dummy->next;
}

}  // namespace leetcode::merge_k_sorted_lists
