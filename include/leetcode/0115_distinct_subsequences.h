#ifndef _LEETCODE_DISTINCT_SUBSEQUENCES_H_
#define _LEETCODE_DISTINCT_SUBSEQUENCES_H_

#include <string>

namespace leetcode::distinct_subsequences {

class Solution {
public:
    static int num_distinct(const std::string& s, const std::string& t);
};

}  // namespace leetcode::distinct_subsequences

#endif