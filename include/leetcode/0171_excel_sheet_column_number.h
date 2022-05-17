#ifndef _LEETCODE_EXCEL_SHEET_COLUMN_NUMBER_H_
#define _LEETCODE_EXCEL_SHEET_COLUMN_NUMBER_H_

#include <string>

namespace leetcode::excel_sheet_column_number {

class Solution {
public:
    static int title_to_number(const std::string& column_title);
};

}  // namespace leetcode::excel_sheet_column_number

#endif