#include "0205_isomorphic_strings.h"

#include <vector>

namespace leetcode::isomorphic_strings::nomap {

bool Solution::is_isomorphic(const std::string& s, const std::string& t) {
    std::vector<int> st(128, -1), ts(128, -1);
    int s_size = static_cast<int>(s.size());
    for (int i = 0; i < s_size; ++i) {
        if (st[s[i]] != ts[t[i]]) {
            return false;
        }
        st[s[i]] = i;
        ts[t[i]] = i;
    }
    return true;
}

}  // namespace leetcode::isomorphic_strings::nomap
