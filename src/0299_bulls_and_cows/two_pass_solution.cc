#include "0299_bulls_and_cows.h"

#include <algorithm>
#include <unordered_map>

namespace leetcode::bulls_and_cows::two_pass {

std::string Solution::get_hint(const std::string& secret, const std::string& guess) {
    std::unordered_map<char, std::pair<int, int>> cow_map;
    int bull_num = 0;
    for (size_t i = 0; i < secret.size(); ++i) {
        if (secret[i] == guess[i]) {
            ++bull_num;
            continue;
        }
        if (cow_map.find(secret[i]) == cow_map.end()) {
            cow_map.insert({secret[i], {0, 0}});
        }
        if (cow_map.find(guess[i]) == cow_map.end()) {
            cow_map.insert({guess[i], {0, 0}});
        }
        cow_map[secret[i]].first += 1;
        cow_map[guess[i]].second += 1;
    }
    std::string result;
    result.append(std::to_string(bull_num)).push_back('A');
    bull_num = 0;
    for (auto it = cow_map.begin(); it != cow_map.end(); ++it) {
        bull_num += std::min(it->second.first, it->second.second);
    }
    result.append(std::to_string(bull_num)).push_back('B');
    return result;
}

}  // namespace leetcode::bulls_and_cows::two_pass
