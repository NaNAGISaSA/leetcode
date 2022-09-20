#include "0344_reverse_string.h"

namespace leetcode::reverse_string {

void Solution::reverse_string(std::vector<char>& s) {
    size_t begin = 0, end = s.size() - 1;
    char tmp = '\0';
    while (begin < end) {
        tmp = s[begin];
        s[begin++] = s[end];
        s[end--] = tmp;
    }
}

}  // namespace leetcode::reverse_string
