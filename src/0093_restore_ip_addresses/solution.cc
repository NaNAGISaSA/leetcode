#include "0093_restore_ip_addresses.h"

namespace leetcode::restore_ip_addresses {

namespace {
void backtrace(std::vector<std::string>& res,
               std::vector<std::string>& acc,
               size_t start,
               size_t count,
               const std::string& s) {
    if (count == 4) {
        if (start == s.size()) {
            std::string tmp = acc[0];
            for (size_t i = 1; i < acc.size(); ++i) {
                tmp.push_back('.');
                tmp += acc[i];
            }
            res.push_back(std::move(tmp));
        }
        return;
    }
    if (s[start] == '0') {
        acc.push_back("0");
        backtrace(res, acc, start + 1, count + 1, s);
        acc.pop_back();
    } else {
        for (size_t i = 0; i < 3 && start + i < s.size(); ++i) {
            if (std::stoi(s.substr(start, i + 1)) > 255) {
                continue;
            }
            acc.push_back(s.substr(start, i + 1));
            backtrace(res, acc, start + i + 1, count + 1, s);
            acc.pop_back();
        }
    }
}
}  // namespace

std::vector<std::string> Solution::restore_ip_addresses(const std::string& s) {
    if (s.size() > 12) {
        return {};
    }
    std::vector<std::string> res;
    std::vector<std::string> acc;
    backtrace(res, acc, 0, 0, s);
    return res;
}

}  // namespace leetcode::restore_ip_addresses
