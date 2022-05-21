#ifndef _LEETCODE_REPEATED_DNA_SEQUENCES_H_
#define _LEETCODE_REPEATED_DNA_SEQUENCES_H_

#include <string>
#include <vector>

namespace leetcode::repeated_dna_sequences {

class Solution {
public:
    static std::vector<std::string> find_repeated_dna_sequences(const std::string& s);
};

}  // namespace leetcode::repeated_dna_sequences

#endif