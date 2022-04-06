#include "0109_convert_sorted_list_to_binary_search_tree.h"

namespace leetcode::convert_sorted_list_to_binary_search_tree {

namespace {
TreeNode* list_to_bst(const ListNode* head, const ListNode* end) {
    if (head == end) {
        return nullptr;
    }
    const ListNode* slow = head;
    const ListNode* fast = head;
    while (fast != end && fast->next != end) {
        slow = slow->next;
        fast = fast->next->next;
    }
    TreeNode* root = new TreeNode(slow->val);
    root->left = list_to_bst(head, slow);
    root->right = list_to_bst(slow->next, end);
    return root;
}
}  // namespace

TreeNode* Solution::sorted_list_to_height_balanced_bst(ListNode* head) {
    return list_to_bst(head, nullptr);
}

}  // namespace leetcode::convert_sorted_list_to_binary_search_tree
