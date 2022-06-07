#ifndef _LEETCODE_IMPLEMENT_TRIE_H_
#define _LEETCODE_IMPLEMENT_TRIE_H_

#include <memory>
#include <string>

namespace leetcode::implement_trie {

class Trie {
public:
    Trie();
    ~Trie();
    void insert(std::string word);
    bool search(std::string word);
    bool startswith(std::string prefix);

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::implement_trie

#endif