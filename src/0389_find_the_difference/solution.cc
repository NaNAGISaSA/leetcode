#include "0389_find_the_difference.h"

namespace leetcode::find_the_difference {

char Solution::find_the_difference(const std::string& s, const std::string& t) {
    char res = 0;
    for (size_t i = 0, e = s.size(); i < e; ++i) {
        res = static_cast<char>(s[i] ^ res);
        res = static_cast<char>(t[i] ^ res);
    }
    return static_cast<char>(res ^ t.back());
}

}  // namespace leetcode::find_the_difference
