#ifndef _LEETCODE_TESTS_TREE_UTILS_H_
#define _LEETCODE_TESTS_TREE_UTILS_H_

#include "utils/tree_utils.h"

namespace leetcode {

enum class Type { NONE, ALL, LEFT, RIGHT };

class TreeTestHelper {
public:
    static TreeNode* make_tree(Type type, int head_val, int left_val = -1, int right_val = -1) {
        TreeNode* head = new TreeNode(head_val);
        if (type == Type::ALL || type == Type::LEFT) {
            head->left = new TreeNode(left_val);
        }
        if (type == Type::ALL || type == Type::RIGHT) {
            head->right = new TreeNode(right_val);
        }
        return head;
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