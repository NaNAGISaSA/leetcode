#include "0171_excel_sheet_column_number.h"

#include <gtest/gtest.h>

using namespace leetcode::excel_sheet_column_number;

TEST(EXCEL_SHEET_COLUMN_NUMBER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::title_to_number("Z"), 26);
    ASSERT_EQ(Solution::title_to_number("AA"), 27);
}
