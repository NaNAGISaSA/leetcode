#ifndef _LEETCODE_TEXT_JUSTIFICATION_H_
#define _LEETCODE_TEXT_JUSTIFICATION_H_

#include <string>
#include <vector>

namespace leetcode::text_justification {

class Solution {
public:
    static std::vector<std::string> full_justify(std::vector<std::string>& words, int max_width);
};

}  // namespace leetcode::text_justification

#endif