#include "0010_regular_expression_matching.h"

namespace leetcode::regular_expression_matching::recurse {

namespace {
bool internal_match(const std::string& s, const size_t s_begin, const std::string& p, const size_t p_begin) {
    size_t s_end = s.size(), p_end = p.size();
    if (p_begin == p_end) {
        return s_begin == s_end;
    }
    if (s_begin == s_end) {
        if (p_begin + 1 == p_end) {
            return false;
        } else {
            return p[p_begin + 1] == '*' && internal_match(s, s_begin, p, p_begin + 2);
        }
    }
    if (p_begin + 1 == p_end || p[p_begin + 1] != '*') {
        return (p[p_begin] == '.' || s[s_begin] == p[p_begin]) && internal_match(s, s_begin + 1, p, p_begin + 1);
    }
    size_t tmp = s_begin;
    while (tmp < s_end && (s[tmp++] == p[p_begin] || p[p_begin] == '.')) {
        if (internal_match(s, tmp, p, p_begin + 2)) {
            return true;
        }
    }
    return internal_match(s, s_begin, p, p_begin + 2);
}
}  // namespace

bool Solution::match(const std::string& s, const std::string& p) {
    return internal_match(s, 0, p, 0);
}

}  // namespace leetcode::regular_expression_matching::recurse
