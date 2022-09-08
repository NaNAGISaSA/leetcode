#include "0336_palindrome_pairs.h"

#include <memory>

namespace leetcode::palindrome_pairs {

namespace {
struct TrieNode {
    TrieNode() : idx(-1), palindrome_idx{}, next(26, nullptr) {
    }

    int idx;
    std::vector<int> palindrome_idx;
    std::vector<std::shared_ptr<TrieNode>> next;
};

bool is_palindrome(const std::string& word, int begin, int end) {
    while (begin < end) {
        if (word[begin++] != word[end--]) {
            return false;
        }
    }
    return true;
}

void build_tree(const std::string& word, TrieNode* root, int idx) {
    int word_size = static_cast<int>(word.size());
    for (int i = word_size - 1; i >= 0; --i) {
        int next_idx = word[i] - 'a';
        if (is_palindrome(word, 0, i)) {
            root->palindrome_idx.push_back(idx);
        }
        if (root->next[next_idx] == nullptr) {
            root->next[next_idx] = std::make_shared<TrieNode>();
        }
        root = root->next[next_idx].get();
    }
    root->idx = idx;
    root->palindrome_idx.push_back(idx);
}

void search_tree(const std::string& word, const TrieNode* root, int idx, std::vector<std::vector<int>>& result) {
    int word_size = static_cast<int>(word.size());
    for (int i = 0; i < word_size; ++i) {
        if (root->idx != -1 && is_palindrome(word, i, word_size - 1)) {
            result.push_back({idx, root->idx});
        }
        root = root->next[word[i] - 'a'].get();
        if (root == nullptr) {
            return;
        }
    }
    for (const auto& index : root->palindrome_idx) {
        if (index != idx) {
            result.push_back({idx, index});
        }
    }
}
}  // namespace

/*
 * 算法思想：
 * 1）Build Trie
 * 对于每一个word，按照逆序构造Trie，每一个节点记录以下信息：该节点是否为单词的终止，以及当前子串下，剩余子串是否为回文串；
 *
 * 2）Search Trie
 * 如果两个子串相加是回文串，存在以下两种情况：i. 当前单词剩余子串是回文串，且右边单词已到字符串结尾，如：abcdc + ba；
 *  ii. 当前单词已经结束，且其它单词剩余串是回文串，如ab + cdcba；
 */
std::vector<std::vector<int>> Solution::palindrome_pairs(const std::vector<std::string>& words) {
    int words_size = static_cast<int>(words.size());
    TrieNode root;

    for (int i = 0; i < words_size; ++i) {
        build_tree(words[i], &root, i);
    }

    std::vector<std::vector<int>> result;
    for (int i = 0; i < words_size; ++i) {
        search_tree(words[i], &root, i, result);
    }

    return result;
}

}  // namespace leetcode::palindrome_pairs
