#ifndef _LEETCODE_WORD_SEARCH_TWO_H_
#define _LEETCODE_WORD_SEARCH_TWO_H_

#include <memory>
#include <string>
#include <vector>

namespace leetcode::word_search_two {

class TrieNode;

class Solution {
public:
    Solution();
    ~Solution();
    std::vector<std::string> find_words(std::vector<std::vector<char>>& board, std::vector<std::string>& words);

private:
    std::unique_ptr<TrieNode> root;
};

}  // namespace leetcode::word_search_two

#endif
