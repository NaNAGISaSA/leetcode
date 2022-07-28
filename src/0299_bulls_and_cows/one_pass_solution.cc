#include "0299_bulls_and_cows.h"

#include <vector>

namespace leetcode::bulls_and_cows::one_pass {

std::string Solution::get_hint(const std::string& secret, const std::string& guess) {
    int bull_num = 0, cow_num = 0;
    std::vector<int> count_vec(10, 0);
    for (size_t i = 0; i < secret.size(); ++i) {
        if (secret[i] == guess[i]) {
            ++bull_num;
        } else {
            int secret_idx = secret[i] - '0';
            int guess_idx = guess[i] - '0';
            if (count_vec[secret_idx] < 0) {
                ++cow_num;
            }
            if (count_vec[guess_idx] > 0) {
                ++cow_num;
            }
            ++count_vec[secret_idx];
            --count_vec[guess_idx];
        }
    }
    return std::to_string(bull_num) + "A" + std::to_string(cow_num) + "B";
}

}  // namespace leetcode::bulls_and_cows::one_pass
