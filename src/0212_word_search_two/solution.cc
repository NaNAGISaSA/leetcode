#include "0212_word_search_two.h"

namespace leetcode::word_search_two {

struct TrieNode {
    TrieNode() : has_end(false), node_list{} {
    }

    ~TrieNode() {
        for (auto* node : node_list) {
            delete node;
        }
    }

    void add(char chr) {
        node_list[chr - 'a'] = new TrieNode;
    }

    TrieNode* get(char chr) const {
        return node_list[chr - 'a'];
    }

public:
    bool has_end;

private:
    TrieNode* node_list[26];
};

namespace {
void dfs(std::vector<std::vector<char>>& board,
         std::vector<std::string>& result,
         TrieNode* root,
         std::string& str,
         const size_t i,
         const size_t j,
         const size_t m,
         const size_t n) {
    if (i >= m || j >= n || board[i][j] == '#' || root == nullptr || root->get(board[i][j]) == nullptr) {
        return;
    }
    char chr = board[i][j];
    str.push_back(chr);
    board[i][j] = '#';
    root = root->get(chr);
    if (root->has_end) {
        result.push_back(str);
        root->has_end = false;  // remove duplicates
    }
    dfs(board, result, root, str, i - 1, j, m, n);
    dfs(board, result, root, str, i + 1, j, m, n);
    dfs(board, result, root, str, i, j - 1, m, n);
    dfs(board, result, root, str, i, j + 1, m, n);
    board[i][j] = chr;
    str.pop_back();
}
}  // namespace

Solution::Solution() : root(std::make_unique<TrieNode>()) {
}

Solution::~Solution() = default;

std::vector<std::string> Solution::find_words(std::vector<std::vector<char>>& board, std::vector<std::string>& words) {
    auto build_trie = [&words](TrieNode* root) {
        for (auto& word : words) {
            TrieNode* node = root;
            for (auto chr : word) {
                if (node->get(chr) == nullptr) {
                    node->add(chr);
                }
                node = node->get(chr);
            }
            node->has_end = true;
        }
    };

    build_trie(root.get());

    auto search_word = [&board](TrieNode* root) {
        std::vector<std::string> result;
        std::string curr;
        size_t m = board.size(), n = board[0].size();
        for (size_t i = 0; i < m; ++i) {
            for (size_t j = 0; j < n; ++j) {
                dfs(board, result, root, curr, i, j, m, n);
            }
        }
        return result;
    };

    return search_word(root.get());
}

}  // namespace leetcode::word_search_two
