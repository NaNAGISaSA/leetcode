#include "0301_remove_invalid_parentheses.h"

#include <unordered_set>

namespace leetcode::remove_invalid_parentheses {

namespace {

std::vector<size_t> get_misplace_info(const std::string& s) {
    size_t left_misplace = 0, right_misplace = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            ++left_misplace;
        } else if (s[i] == ')') {
            if (left_misplace == 0) {
                ++right_misplace;
            } else {
                --left_misplace;
            }
        }
    }
    return {left_misplace, right_misplace};
}

void backtrace(const std::string& s,
               size_t left_misplace_num,
               size_t right_misplace_num,
               size_t curr_left_misplace_num,
               size_t curr_right_misplace_num,
               size_t idx,
               std::string& acc,
               std::unordered_set<std::string>& result) {
    if (idx == s.size()) {
        if (curr_left_misplace_num == 0 && curr_right_misplace_num == 0) {
            result.insert(acc);
        }
        return;
    }
    if (s[idx] != ')' && s[idx] != '(') {
        acc.push_back(s[idx]);
        backtrace(s,
                  left_misplace_num,
                  right_misplace_num,
                  curr_left_misplace_num,
                  curr_right_misplace_num,
                  idx + 1,
                  acc,
                  result);
        acc.pop_back();
    } else if (s[idx] == '(') {
        if (left_misplace_num != 0) {
            backtrace(s,
                      left_misplace_num - 1,
                      right_misplace_num,
                      curr_left_misplace_num,
                      curr_right_misplace_num,
                      idx + 1,
                      acc,
                      result);
        }
        acc.push_back(s[idx]);
        backtrace(s,
                  left_misplace_num,
                  right_misplace_num,
                  curr_left_misplace_num + 1,
                  curr_right_misplace_num,
                  idx + 1,
                  acc,
                  result);
        acc.pop_back();
    } else {
        if (right_misplace_num != 0) {
            backtrace(s,
                      left_misplace_num,
                      right_misplace_num - 1,
                      curr_left_misplace_num,
                      curr_right_misplace_num,
                      idx + 1,
                      acc,
                      result);
        }
        if (curr_left_misplace_num == 0) {
            return;
        }
        acc.push_back(s[idx]);
        backtrace(s,
                  left_misplace_num,
                  right_misplace_num,
                  curr_left_misplace_num - 1,
                  curr_right_misplace_num,
                  idx + 1,
                  acc,
                  result);
        acc.pop_back();
    }
}
}  // namespace

std::vector<std::string> Solution::remove_invalid_parentheses(const std::string& s) {
    auto misplace_info = get_misplace_info(s);
    if (misplace_info[0] + misplace_info[1] == 0) {
        return {s};
    } else if (misplace_info[0] + misplace_info[1] == s.size()) {
        return {""};
    }
    std::unordered_set<std::string> result;
    std::string acc;
    acc.reserve(s.size());
    backtrace(s, misplace_info[0], misplace_info[1], 0, 0, 0, acc, result);
    return std::vector<std::string>(result.begin(), result.end());
}

}  // namespace leetcode::remove_invalid_parentheses
