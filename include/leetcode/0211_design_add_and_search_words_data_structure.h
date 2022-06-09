#ifndef _LEETCODE_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_H_
#define _LEETCODE_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_H_

#include <memory>
#include <string>

namespace leetcode::design_add_and_search_words_data_structure {

class WordDictionary {
public:
    WordDictionary();
    ~WordDictionary();
    void add(std::string word);
    bool search(std::string word);

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::design_add_and_search_words_data_structure

#endif
