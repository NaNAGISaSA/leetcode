#include "0388_longest_absolute_file_path.h"

#include <algorithm>
#include <vector>

namespace leetcode::longest_absolute_file_path::tree {

namespace {
struct Node {
    Node(size_t length, bool is_file) : length(length), is_file(is_file), children() {
    }

    size_t length;
    bool is_file;
    std::vector<Node*> children;
};

void build_tree(const std::string& input, size_t idx, size_t level, std::vector<std::vector<Node*>>& level_vec) {
    if (level_vec.size() == level) {
        level_vec.push_back({});
    }

    bool is_file = false;
    size_t begin = idx;
    while (begin < input.size()) {
        if (input[begin] == '.') {
            is_file = true;
        }
        if (input[begin] == '\n') {
            break;
        }
        ++begin;
    }

    Node* node = new Node(begin - idx, is_file);
    level_vec[level].push_back(node);
    if (level != 0) {
        level_vec[level - 1].back()->children.push_back(node);
    }

    if (begin == input.size()) {
        return;
    }

    level = 0;
    while (input[++begin] == '\t') {
        ++level;
    }
    build_tree(input, begin, level, level_vec);
}

void dfs(Node* root, size_t length, size_t level, size_t& result) {
    if (root->is_file) {
        result = std::max(result, length + level + root->length);
        return;
    }
    for (Node* node : root->children) {
        dfs(node, length + root->length, level + 1, result);
    }
}
}  // namespace

int Solution::length_longest_path(const std::string& input) {
    std::vector<std::vector<Node*>> level_vec;
    build_tree(input, 0, 0, level_vec);

    size_t result = 0;
    for (size_t i = 0; i < level_vec[0].size(); ++i) {
        dfs(level_vec[0][i], 0, 0, result);
    }
    return static_cast<int>(result);
}

}  // namespace leetcode::longest_absolute_file_path::tree
