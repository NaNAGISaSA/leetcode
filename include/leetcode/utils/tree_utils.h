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

}  // namespace leetcode

#endif
