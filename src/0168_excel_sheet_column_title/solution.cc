#include "0168_excel_sheet_column_title.h"

namespace leetcode::excel_sheet_column_title {

std::string Solution::convert_to_title(int column_number) {
    std::string result;
    int mul = 1;
    while (true) {
        result.push_back('A');
        column_number -= mul;
        if (column_number / mul < 26) {
            break;  // overflow caution
        }
        mul *= 26;
    }
    int idx = 0;
    while (column_number != 0) {
        if (column_number >= mul) {
            result[idx] = static_cast<char>('A' + column_number / mul);
            column_number %= mul;
        }
        mul /= 26;
        ++idx;
    }
    return result;
}

}  // namespace leetcode::excel_sheet_column_title
