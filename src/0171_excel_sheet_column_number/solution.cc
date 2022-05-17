#include "0171_excel_sheet_column_number.h"

namespace leetcode::excel_sheet_column_number {

int Solution::title_to_number(const std::string& column_title) {
    int result = 0;
    for (auto& chr : column_title) {
        result = 26 * result + (chr - 'A' + 1);
    }
    return result;
}

}  // namespace leetcode::excel_sheet_column_number