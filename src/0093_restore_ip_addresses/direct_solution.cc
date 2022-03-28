#include "0093_restore_ip_addresses.h"

namespace leetcode::restore_ip_addresses::direct {

std::vector<std::string> Solution::restore_ip_addresses(const std::string& s) {
    if (s.size() > 12) {
        return {};
    }
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    std::vector<std::string> result;
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = i + 1; j < i + 4; ++j) {
            for (size_t k = j + 1; k < j + 4; ++k) {
                for (size_t kk = k + 1; kk < k + 4; ++kk) {
                    if (kk + 1 != s.size()) {
                        continue;
                    }
                    num1 = std::stoi(s.substr(0, i + 1));
                    num2 = std::stoi(s.substr(i + 1, j - i));
                    num3 = std::stoi(s.substr(j + 1, k - j));
                    num4 = std::stoi(s.substr(k + 1, kk - k));
                    if (num1 > 255 || num2 > 255 || num3 > 255 || num4 > 255) {
                        continue;
                    }
                    std::string res = std::to_string(num1) + "." + std::to_string(num2) + "." + std::to_string(num3) +
                                      "." + std::to_string(num4);
                    if (res.size() == kk + 4) {
                        result.push_back(res);
                    }
                }
            }
        }
    }
    return result;
}

}  // namespace leetcode::restore_ip_addresses::direct
