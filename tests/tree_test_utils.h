#ifndef _LEETCODE_TESTS_TREE_UTILS_H_
#define _LEETCODE_TESTS_TREE_UTILS_H_

#include "utils/tree_utils.h"

namespace leetcode {

enum class Type { LEFT, RIGHT };

class TreeTestHelper {
public:
    static TreeNode* make_tree(int val) {
        return new TreeNode(val);
    }

    static TreeNode* make_tree(Type type, int val, int lr) {
        TreeNode* root = new TreeNode(val);
        if (type == Type::LEFT) {
            root->left = new TreeNode(lr);
        } else {
            root->right = new TreeNode(lr);
        }
        return root;
    }

    static TreeNode* make_tree(int val, int left, int right) {
        TreeNode* root = new TreeNode(val);
        root->left = new TreeNode(left);
        root->right = new TreeNode(right);
        return root;
    }

    static void release_tree(TreeNode* head) {
        if (head == nullptr) {
            return;
        }
        release_tree(head->left);
        release_tree(head->right);
        delete head;
    }
};

}  // namespace leetcode

#endif