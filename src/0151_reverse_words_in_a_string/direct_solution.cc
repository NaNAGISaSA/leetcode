#include "0151_reverse_words_in_a_string.h"

namespace leetcode::reverse_words_in_a_string::direct {

std::string Solution::reverse_words(std::string& s) {
    // There is at least one word in s
    std::string result;
    int begin = 0, end = static_cast<int>(s.size()) - 1;
    while (true) {
        while (end >= 0 && s[end] == ' ') {
            --end;
        }
        if (end < 0) {
            break;
        }
        begin = end;
        while (begin >= 0 && s[begin] != ' ') {
            --begin;
        }
        result += s.substr(begin + 1, end - begin) + " ";
        end = begin - 1;
    }
    result.pop_back();
    return result;
}

}  // namespace leetcode::reverse_words_in_a_string::direct
