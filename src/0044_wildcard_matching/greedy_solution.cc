#include "0044_wildcard_matching.h"

namespace leetcode::wildcard_matching::greedy {

bool Solution::is_match(const std::string& s, const std::string& p) {
    int s_left = 0, p_left = 0;
    int s_star_last_match = -1, p_star_last_idx = -1;
    // 思想：当遇到*时，则记录当前的s以及p的位置，然后尝试匹配0个，如果不行，回到所记录的位置，
    //   再尝试匹配1个、匹配2个...，直到遇到下一个*或者s已到达结束位置
    while (s_left < static_cast<int>(s.size())) {
        if (p[p_left] == '?' || s[s_left] == p[p_left]) {
            ++s_left;
            ++p_left;
        } else if (p[p_left] == '*') {
            p_star_last_idx = p_left;
            s_star_last_match = s_left;
            ++p_left;
        } else if (p_star_last_idx != -1) {
            p_left = p_star_last_idx + 1;
            s_left = ++s_star_last_match;
        } else {
            return false;
        }
    }
    while (p_left != static_cast<int>(p.size())) {
        if (p[p_left++] != '*') {
            return false;
        }
    }
    return true;
}

}  // namespace leetcode::wildcard_matching::greedy