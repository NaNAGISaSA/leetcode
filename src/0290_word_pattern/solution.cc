#include "0290_word_pattern.h"

#include <unordered_map>

namespace leetcode::word_pattern {

bool Solution::word_pattern(const std::string& pattern, const std::string& s) {
    std::unordered_map<char, std::string> map_ps;
    std::unordered_map<std::string, char> map_sp;
    size_t pattern_size = pattern.size(), s_size = s.size();
    size_t pattern_idx = 0, s_start = 0, s_end = 0;
    while (pattern_idx < pattern_size && s_end < s_size) {
        while (s_end < s_size && s[++s_end] != ' ') {
        }
        std::string str = s.substr(s_start, s_end - s_start);
        bool ps_contain = map_ps.find(pattern[pattern_idx]) != map_ps.end();
        bool sp_contain = map_sp.find(str) != map_sp.end();
        if (!ps_contain && !sp_contain) {
            map_ps.insert({pattern[pattern_idx], str});
            map_sp.insert({std::move(str), pattern[pattern_idx]});
        } else if (!ps_contain || !sp_contain || map_ps[pattern[pattern_idx]] != str ||
                   map_sp[str] != pattern[pattern_idx]) {
            return false;
        }
        ++pattern_idx;
        ++s_end;
        s_start = s_end;
    }
    return pattern_idx == pattern_size && s_end > s_size;
}

}  // namespace leetcode::word_pattern
