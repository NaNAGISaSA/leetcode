#include "0401_binary_watch.h"

namespace leetcode::binary_watch {

namespace {
void backtrace(const std::vector<int>& numbers,
               std::vector<std::string>& result,
               int can_use_num,
               int curr_num,
               size_t start) {
    if (curr_num >= 60) {
        return;
    }
    if (can_use_num == 0) {
        result.push_back(curr_num > 9 ? std::to_string(curr_num) : "0" + std::to_string(curr_num));
        return;
    }
    for (size_t i = start, e = numbers.size(); i < e; ++i) {
        backtrace(numbers, result, can_use_num - 1, curr_num + numbers[i], i + 1);
    }
}
}  // namespace

std::vector<std::string> Solution::read_binary_watch(int turned_on) {
    if (turned_on > 8) {
        return {};
    }
    std::vector<std::vector<std::string>> hours{{"0"}, {"1", "2", "4", "8"}, {"3", "5", "9", "6", "10"}, {"7", "11"}};

    std::vector<std::vector<std::string>> minutes;
    minutes.reserve(turned_on + 1);
    minutes.push_back({"00"});

    std::vector<int> numbers{1, 2, 4, 8, 16, 32};
    for (int i = 1; i <= 5 && i <= turned_on; ++i) {
        std::vector<std::string> tmp;
        backtrace(numbers, tmp, i, 0, 0);
        minutes.push_back(std::move(tmp));
    }

    std::vector<std::string> result;
    for (int i = 0; i <= 3 && i <= turned_on; ++i) {
        std::vector<std::string>& h = hours[i];
        std::vector<std::string>& m = minutes[turned_on - i];
        for (const auto& h_str : h) {
            for (const auto& m_str : m) {
                result.push_back(h_str + ":" + m_str);
            }
        }
    }
    return result;
}

}  // namespace leetcode::binary_watch
