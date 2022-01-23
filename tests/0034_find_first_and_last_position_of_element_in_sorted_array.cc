#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0034_find_first_and_last_position_of_element_in_sorted_array.h"

using namespace leetcode::find_first_and_last_position_of_element_in_sorted_array;

TEST(FIND_FIRST_AND_LAST_POSITION_OF_ELEMENT_IN_SORTED_ARRAY, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::search_range({5, 7, 7, 8, 8, 10}, 8), testing::ElementsAre(3, 4));
    ASSERT_THAT(Solution::search_range({5, 7, 7, 8, 8, 10}, 6), testing::ElementsAre(-1, -1));
    ASSERT_THAT(Solution::search_range({}, 0), testing::ElementsAre(-1, -1));
}
