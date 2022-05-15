#include <gtest/gtest.h>

#include "0168_excel_sheet_column_title.h"

using namespace leetcode::excel_sheet_column_title;

TEST(EXCEL_SHEET_COLUMN_TITLE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::convert_to_title(26), "Z");
    ASSERT_EQ(Solution::convert_to_title(27), "AA");
    ASSERT_EQ(Solution::convert_to_title(2147483647), "FXSHRXW");
}
