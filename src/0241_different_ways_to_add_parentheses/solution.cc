#include "0241_different_ways_to_add_parentheses.h"

#include <unordered_map>

namespace leetcode::different_ways_to_add_parentheses {

namespace {
// 这道题的backtrace可以使用dp来加速
std::vector<int> backtrace(const std::string& expression,
                           std::unordered_map<std::string, std::vector<int>>& dp_map,
                           size_t begin,
                           size_t end) {
    std::string dp_key = std::to_string(begin) + "-" + std::to_string(end);
    if (dp_map.find(dp_key) != dp_map.end()) {
        return dp_map[dp_key];
    }

    size_t idx = begin;
    for (; idx < end; ++idx) {
        if (expression[idx] < '0' || expression[idx] > '9') {
            break;
        }
    }
    if (idx == end) {
        dp_map.insert({dp_key, {std::stoi(expression.substr(begin, end - begin))}});
        return dp_map[dp_key];
    }

    std::vector<int> result;
    for (; idx < end; ++idx) {
        if (expression[idx] >= '0' && expression[idx] <= '9') {
            continue;
        }
        auto left_exp_result = backtrace(expression, dp_map, begin, idx);
        auto right_exp_result = backtrace(expression, dp_map, idx + 1, end);
        if (expression[idx] == '+') {
            for (auto& left : left_exp_result) {
                for (auto& right : right_exp_result) {
                    result.push_back(left + right);
                }
            }
        } else if (expression[idx] == '-') {
            for (auto& left : left_exp_result) {
                for (auto& right : right_exp_result) {
                    result.push_back(left - right);
                }
            }
        } else {
            for (auto& left : left_exp_result) {
                for (auto& right : right_exp_result) {
                    result.push_back(left * right);
                }
            }
        }
    }
    dp_map.insert({dp_key, result});
    return result;
}
}  // namespace

std::vector<int> Solution::diff_ways_to_compute(std::string expression) {
    std::unordered_map<std::string, std::vector<int>> dp_map;
    return backtrace(expression, dp_map, 0, expression.size());
}

}  // namespace leetcode::different_ways_to_add_parentheses
