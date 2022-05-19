#include <stack>

#include "0173_binary_search_tree_iterator.h"

namespace leetcode::binary_search_tree_iterator {

class BSTIterator::Impl {
public:
    Impl(TreeNode* root) : node_stack{} {
        add_nodes_to_stack(root);
    }

    int next() {
        TreeNode* node = node_stack.top();
        if (node->right != nullptr) {
            add_nodes_to_stack(node->right);
        } else {
            remove_nodes_from_stack();
        }
        return node->val;
    }

    bool has_next() {
        return !node_stack.empty();
    }

private:
    void add_nodes_to_stack(TreeNode* root) {
        do {
            node_stack.push(root);
            root = root->left;
        } while (root != nullptr);
    }

    void remove_nodes_from_stack() {
        TreeNode* node = node_stack.top();
        node_stack.pop();
        if (node_stack.empty()) {
            return;
        }
        TreeNode* root = node_stack.top();
        if (root->right == node) {
            remove_nodes_from_stack();
        }
    }

    std::stack<TreeNode*> node_stack;
};

BSTIterator::BSTIterator(TreeNode* root) : impl(std::make_unique<Impl>(root)) {
}

BSTIterator::~BSTIterator() = default;

int BSTIterator::next() {
    return impl->next();
}

bool BSTIterator::has_next() {
    return impl->has_next();
}

}  // namespace leetcode::binary_search_tree_iterator
