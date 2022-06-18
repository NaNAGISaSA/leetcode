#include "0214_shortest_palindrome.h"

#include <vector>

namespace leetcode::shortest_palindrome {

/*
本题可以转化为寻找字符串起始的最长回文子串。
算法思路：构造一个s+"#"+reverse(s)的字符串，并使用KMP算法中构造查找表的思路。
如果存在回文串，则以上构造字符串一定存在大于2的子串既是prefix，又是postfix，
例如：acad#daca -> aca, beebfd#dfbeeb -> beeb.
*/
std::string Solution::shortest_palindrome(std::string s) {
    if (s.size() < 2) {
        return s;
    }

    auto reverse = [](std::string str) {
        size_t begin = 0, end = str.size() - 1;
        while (begin < end) {
            std::swap(str[begin++], str[end--]);
        }
        return str;
    };

    std::string ss = s + "#" + reverse(s);

    size_t begin = 0, end = 1, s_size = ss.size();
    std::vector<size_t> lps(s_size, 0);
    while (end < s_size) {
        if (ss[begin] == ss[end]) {
            lps[end++] = ++begin;
        } else if (begin != 0) {
            begin = lps[begin - 1];
        } else {
            lps[end++] = 0;
        }
    }

    return lps.back() == s.size() ? s : reverse(s.substr(lps.back(), s.size() - lps.back())) + s;
}

}  // namespace leetcode::shortest_palindrome
