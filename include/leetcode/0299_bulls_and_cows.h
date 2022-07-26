#ifndef LEETCODE_BULLS_AND_COWS_H_
#define LEETCODE_BULLS_AND_COWS_H_

#include <string>

namespace leetcode::bulls_and_cows {

class Solution {
public:
    static std::string get_hint(const std::string& secret, const std::string& guess);
};

}  // namespace leetcode::bulls_and_cows

#endif
