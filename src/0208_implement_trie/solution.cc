#include "0208_implement_trie.h"

#include <map>

namespace leetcode::implement_trie {

class TrieNode {
public:
    TrieNode() : prefix_num(0), end_num(0), map{} {
    }

    int prefix_num;
    int end_num;
    std::map<char, TrieNode> map;
};

class Trie::Impl {
public:
    Impl() : root(TrieNode()) {
    }

    void insert(std::string word) {
        TrieNode* curr = &root;
        for (auto& chr : word) {
            if (curr->map.find(chr) == curr->map.end()) {
                curr->map.insert({chr, TrieNode()});
            }
            curr = &(curr->map[chr]);
            ++curr->prefix_num;
        }
        ++curr->end_num;
    }

    bool search(std::string word) {
        TrieNode* curr = &root;
        for (auto& chr : word) {
            if (curr->map.find(chr) == curr->map.end()) {
                return false;
            }
            curr = &(curr->map[chr]);
        }
        return curr->end_num > 0;
    }

    bool startswith(std::string prefix) {
        TrieNode* curr = &root;
        for (auto& chr : prefix) {
            if (curr->map.find(chr) == curr->map.end()) {
                return false;
            }
            curr = &(curr->map[chr]);
        }
        return curr->prefix_num > 0;
    }

private:
    TrieNode root;
};

Trie::Trie() : impl(std::make_unique<Impl>()) {
}

Trie::~Trie() = default;

void Trie::insert(std::string word) {
    impl->insert(std::move(word));
}

bool Trie::search(std::string word) {
    return impl->search(std::move(word));
}

bool Trie::startswith(std::string prefix) {
    return impl->startswith(std::move(prefix));
}

}  // namespace leetcode::implement_trie
