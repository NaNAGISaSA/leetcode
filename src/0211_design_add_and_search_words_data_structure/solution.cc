#include "0211_design_add_and_search_words_data_structure.h"

/*
-> Time Limit Exceeded
-> 减少过程调用，在递归中使用临时变量curr_node -> 1834 ms
-> 替换数据结构，使用内建数组代替vector -> 1327 ms
*/
namespace leetcode::design_add_and_search_words_data_structure {

class TrieNode {
public:
    TrieNode() : has_end{false}, node_list{} {
    }

    ~TrieNode() {
        for (auto* node : node_list) {
            delete node;
        }
    }

    TrieNode* get(char chr) const {
        return node_list[chr - 'a'];
    }

    void add(char chr) {
        node_list[chr - 'a'] = new TrieNode;
    }

public:
    bool has_end;

private:
    TrieNode* node_list[26];
};

class WordDictionary::Impl {
public:
    Impl() : root(std::make_unique<TrieNode>()) {
    }

    void add(std::string word) {
        TrieNode* node = root.get();
        for (auto chr : word) {
            if (node->get(chr) == nullptr) {
                node->add(chr);
            }
            node = node->get(chr);
        }
        node->has_end = true;
    }

    bool search(std::string word) {
        return recurse_search(word, 0, root.get());
    }

private:
    bool recurse_search(const std::string& word, size_t start, const TrieNode* node) {
        if (start == word.size()) {
            return node->has_end;
        }
        if (word[start] == '.') {
            for (char chr = 'a'; chr <= 'z'; ++chr) {
                const TrieNode* curr_node = node->get(chr);
                if (curr_node != nullptr && recurse_search(word, start + 1, curr_node)) {
                    return true;
                }
            }
            return false;
        } else {
            const TrieNode* curr_node = node->get(word[start]);
            return curr_node != nullptr && recurse_search(word, start + 1, curr_node);
        }
    }

private:
    std::unique_ptr<TrieNode> root;
};

WordDictionary::WordDictionary() : impl(std::make_unique<Impl>()) {
}

WordDictionary::~WordDictionary() = default;

void WordDictionary::add(std::string word) {
    impl->add(std::move(word));
}

bool WordDictionary::search(std::string word) {
    return impl->search(std::move(word));
}

}  // namespace leetcode::design_add_and_search_words_data_structure
