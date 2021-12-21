#include "0010_regular_expression_matching.h"

namespace leetcode::regular_expression_matching::recurse {

namespace {
bool internal_match(const std::string& s,
                    const size_t s_begin,
                    const size_t s_end,
                    const std::string& p,
                    const size_t p_begin,
                    const size_t p_end) {
    if (p_begin >= p_end) {
        return s_begin >= s_end;
    }
    if (s_begin >= s_end) {
        if (p_begin >= p_end) {
            return true;
        } else if (p_begin + 1 == p_end) {
            return false;
        } else {
            return p[p_begin + 1] == '*' && internal_match(s, s_begin, s_end, p, p_begin + 2, p_end);
        }
    }
    if (p_begin + 1 != p_end && p[p_begin + 1] == '*') {
        if (p[p_begin] != '.' && s[s_begin] != p[p_begin]) {
            return internal_match(s, s_begin, s_end, p, p_begin + 2, p_end);
        }
        if (internal_match(s, s_begin, s_end, p, p_begin + 2, p_end)) {
            return true;
        }
        size_t tmp = s_begin;
        while (tmp < s_end && (p[p_begin] == '.' || s[tmp] == p[p_begin])) {
            if (internal_match(s, tmp + 1, s_end, p, p_begin + 2, p_end)) {
                return true;
            }
            ++tmp;
        }
        return internal_match(s, tmp, s_end, p, p_begin + 2, p_end);
    }
    bool first_match = p[p_begin] == '.' ? true : s[s_begin] == p[p_begin];
    return first_match && internal_match(s, s_begin + 1, s_end, p, p_begin + 1, p_end);
}
}  // namespace

bool Solution::match(const std::string& s, const std::string& p) {
    return internal_match(s, 0, s.size(), p, 0, p.size());
}

}  // namespace leetcode::regular_expression_matching::recurse
