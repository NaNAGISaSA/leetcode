#include "0205_isomorphic_strings.h"

#include <unordered_map>
#include <unordered_set>

namespace leetcode::isomorphic_strings {

bool Solution::is_isomorphic(const std::string& s, const std::string& t) {
    // No two characters may map to the same character,
    //   but a character may map to itself.
    std::unordered_map<char, char> st_map;
    std::unordered_map<char, char> ts_map;
    for (size_t i = 0; i < s.size(); ++i) {
        if (st_map.find(s[i]) == st_map.end()) {
            st_map.insert({s[i], t[i]});
        }
        if (ts_map.find(t[i]) == ts_map.end()) {
            ts_map.insert({t[i], s[i]});
        }
        if (st_map[s[i]] != t[i] || ts_map[t[i]] != s[i]) {
            return false;
        }
    }
    return true;
}

}  // namespace leetcode::isomorphic_strings
