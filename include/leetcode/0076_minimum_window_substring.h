#ifndef _LEETCODE_MINIMUM_WINDOW_SUBSTRING_H_
#define _LEETCODE_MINIMUM_WINDOW_SUBSTRING_H_

#include <string>

namespace leetcode::minimum_window_substring {

class Solution {
public:
    static std::string min_window(const std::string& s, const std::string& t);
};

}  // namespace leetcode::minimum_window_substring

#endif