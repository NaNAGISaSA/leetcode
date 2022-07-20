#include "0282_expression_add_operators.h"

namespace leetcode::expression_add_operators {

namespace {
void backtrace(const std::string& num,
               size_t idx,
               long current,
               long target,
               std::string& acc,
               std::vector<std::string>& result,
               long last) {
    size_t num_size = num.size();
    if (idx == num_size) {
        if (current == target) {
            result.push_back(acc);
        }
        return;
    }
    for (size_t i = idx; i < num_size; ++i) {
        if (num[idx] == '0' && i != idx) {
            return;
        }
        std::string curr_str = num.substr(idx, i - idx + 1);
        long curr_num = std::stol(curr_str);
        if (idx == 0) {
            acc = std::move(curr_str);
            backtrace(num, i + 1, curr_num, target, acc, result, curr_num);
            acc.clear();
        } else {
            size_t acc_curr_size = acc.size();
            acc.append(1, '+').append(std::move(curr_str));
            backtrace(num, i + 1, current + curr_num, target, acc, result, curr_num);
            acc[acc_curr_size] = '-';
            backtrace(num, i + 1, current - curr_num, target, acc, result, -curr_num);
            acc[acc_curr_size] = '*';
            backtrace(num, i + 1, current - last + last * curr_num, target, acc, result, last * curr_num);
            acc.resize(acc_curr_size);
        }
    }
}
}  // namespace

std::vector<std::string> Solution::add_operators(const std::string& num, int target) {
    std::vector<std::string> result;
    std::string acc;
    backtrace(num, 0, 0, target, acc, result, 0);
    return result;
}

}  // namespace leetcode::expression_add_operators
