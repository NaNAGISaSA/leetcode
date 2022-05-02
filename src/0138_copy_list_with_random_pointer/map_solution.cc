#include <unordered_map>

#include "0138_copy_list_with_random_pointer.h"

namespace leetcode::copy_list_with_random_pointer::map {

Node* Solution::copy_random_list(Node* head) {
    std::unordered_map<Node*, Node*> map{{nullptr, nullptr}};
    Node* cp_head = head;
    while (head != nullptr) {
        map.insert({head, new Node(head->val)});
        head = head->next;
    }
    head = cp_head;
    while (cp_head != nullptr) {
        map[cp_head]->next = map[cp_head->next];
        map[cp_head]->random = map[cp_head->random];
        cp_head = cp_head->next;
    }
    return map[head];
}

}  // namespace leetcode::copy_list_with_random_pointer::map
