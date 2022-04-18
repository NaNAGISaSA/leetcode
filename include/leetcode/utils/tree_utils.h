#ifndef _LEETCODE_UTILS_TREE_UTILS_H_
#define _LEETCODE_UTILS_TREE_UTILS_H_

namespace leetcode {

struct TreeNode {
    TreeNode() : val(0), left(nullptr), right(nullptr) {
    }

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {
    }

    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {
    }

    int val;
    TreeNode* left;
    TreeNode* right;
};

struct Node {
    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {
    }

    Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {
    }

    Node(int _val, Node* _left, Node* _right, Node* _next) : val(_val), left(_left), right(_right), next(_next) {
    }

    int val;
    Node* left;
    Node* right;
    Node* next;
};

}  // namespace leetcode

#endif
