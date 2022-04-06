#include "0108_convert_sorted_array_to_binary_search_tree.h"

namespace leetcode::convert_sorted_array_to_binary_search_tree {

namespace {
TreeNode* arr_to_bst(const std::vector<int>& nums, int begin, int end) {
    if (begin > end) {
        return nullptr;
    }
    int middle = begin + (end - begin) / 2;
    TreeNode* head = new TreeNode(nums[middle]);
    head->left = arr_to_bst(nums, begin, middle - 1);
    head->right = arr_to_bst(nums, middle + 1, end);
    return head;
}
}  // namespace

TreeNode* Solution::sorted_array_to_height_balanced_bst(const std::vector<int>& nums) {
    return arr_to_bst(nums, 0, static_cast<int>(nums.size()) - 1);
}

}  // namespace leetcode::convert_sorted_array_to_binary_search_tree
