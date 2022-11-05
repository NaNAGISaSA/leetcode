#ifndef LEETCODE_RANSOM_NOTE_H_
#define LEETCODE_RANSOM_NOTE_H_

#include <string>

namespace leetcode::ransom_note {

class Solution {
public:
    static bool can_construct(const std::string& ransom_note, const std::string& magazine);
};

}  // namespace leetcode::ransom_note

#endif