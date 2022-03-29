#include <vector>

#include "0091_decode_ways.h"

namespace leetcode::decode_ways {

int Solution::num_decodings(const std::string& s) {
    // 1 <= s.length <= 100
    std::vector<int> dp_vec(s.size() + 1, 0);
    dp_vec[0] = 1;
    dp_vec[1] = s[0] == '0' ? 0 : 1;
    for (size_t i = 1; i < s.size(); ++i) {
        int first = std::stoi(s.substr(i, 1));
        int second = std::stoi(s.substr(i - 1, 2));
        if (first >= 1 && first <= 9) {
            dp_vec[i + 1] += dp_vec[i];
        }
        if (second >= 10 && second <= 26) {
            dp_vec[i + 1] += dp_vec[i - 1];
        }
    }
    return dp_vec.back();
}

}  // namespace leetcode::decode_ways
