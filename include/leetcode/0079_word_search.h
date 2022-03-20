#ifndef _LEETCODE_WORD_SEARCH_H_
#define _LEETCODE_WORD_SEARCH_H_

#include <string>
#include <vector>

namespace leetcode::word_search {

class Solution {
public:
    static bool exist(std::vector<std::vector<char>>& board, const std::string& word);
};

}  // namespace leetcode::word_search

#endif