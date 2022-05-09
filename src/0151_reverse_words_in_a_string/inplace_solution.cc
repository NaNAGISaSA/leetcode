#include "0151_reverse_words_in_a_string.h"

namespace leetcode::reverse_words_in_a_string::inplace {

namespace {
void reverse(std::string& s, int begin, int end) {
    while (begin < end) {
        std::swap(s[begin++], s[end--]);
    }
}
}  // namespace

std::string Solution::reverse_words(std::string& s) {
    const int size = static_cast<int>(s.size());

    reverse(s, 0, size - 1);

    int begin = 0, end = 0;
    while (end < size) {
        while (begin < size && s[begin] == ' ') {
            ++begin;
        }
        end = begin;
        while (end < size && s[end] != ' ') {
            ++end;
        }
        reverse(s, begin, end - 1);
        begin = end;
    }

    begin = 0;
    end = 0;
    while (end < size) {
        while (end < size && s[end] == ' ') {
            ++end;
        }
        while (end < size && s[end] != ' ') {
            s[begin++] = s[end++];
        }
        while (end < size && s[end] == ' ') {
            ++end;
        }
        if (end < size) {
            s[begin++] = ' ';
        }
    }
    return s.substr(0, begin);
}

}  // namespace leetcode::reverse_words_in_a_string::inplace