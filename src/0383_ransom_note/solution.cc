#include "0383_ransom_note.h"

#include <unordered_map>

namespace leetcode::ransom_note {

bool Solution::can_construct(const std::string& ransom_note, const std::string& magazine) {
    std::unordered_map<char, int> map;
    for (auto chr : magazine) {
        ++map[chr];
    }
    for (auto chr : ransom_note) {
        if (--map[chr] < 0) {
            return false;
        }
    }
    return true;
}

}  // namespace leetcode::ransom_note
