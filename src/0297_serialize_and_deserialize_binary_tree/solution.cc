#include "0297_serialize_and_deserialize_binary_tree.h"

#include <queue>
#include <vector>

namespace leetcode::serialize_and_deserialize_binary_tree {

namespace {
static const char SPLITER = '#';
static const char NULLPTR_MARK = '.';
static const std::string SPLITER_STR = "#";
static const std::string NULLPTR_MARK_STR = ".";

std::vector<std::string> split(const std::string& str) {
    std::vector<std::string> result;
    size_t begin = 0, end = 0, str_size = str.size();
    while (end < str_size) {
        while (end < str_size && str[end] != SPLITER) {
            ++end;
        }
        result.push_back(str.substr(begin, end - begin));
        begin = ++end;
    }
    return result;
}
}  // namespace

std::string Codec::serialize(TreeNode* root) {
    if (root == nullptr) {
        return NULLPTR_MARK_STR;
    }
    std::string result;
    std::queue<TreeNode*> queue;
    queue.push(root);
    while (!queue.empty()) {
        TreeNode* front = queue.front();
        queue.pop();
        if (front == nullptr) {
            result.push_back(NULLPTR_MARK);
            result.push_back(SPLITER);
            continue;
        }
        result.append(std::to_string(front->val)).push_back(SPLITER);
        queue.push(front->left);
        queue.push(front->right);
    }
    result.pop_back();
    return result;
}

TreeNode* Codec::deserialize(const std::string& data) {
    if (data.size() == 1) {
        return nullptr;
    }
    auto data_vec = split(data);
    std::queue<TreeNode*> node_queue;
    TreeNode* root = new TreeNode(std::stoi(data_vec.front()));
    node_queue.push(root);
    size_t idx = 1;
    while (!node_queue.empty()) {
        size_t curr_level_node = node_queue.size();
        for (size_t i = 0; i < curr_level_node; ++i) {
            TreeNode* curr = node_queue.front();
            node_queue.pop();
            if (data_vec[idx] != NULLPTR_MARK_STR) {
                curr->left = new TreeNode(std::stoi(data_vec[idx]));
                node_queue.push(curr->left);
            }
            ++idx;
            if (data_vec[idx] != NULLPTR_MARK_STR) {
                curr->right = new TreeNode(std::stoi(data_vec[idx]));
                node_queue.push(curr->right);
            }
            ++idx;
        }
    }
    return root;
}

}  // namespace leetcode::serialize_and_deserialize_binary_tree
