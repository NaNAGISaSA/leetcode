#include "0388_longest_absolute_file_path.h"

#include <gtest/gtest.h>

using namespace leetcode::longest_absolute_file_path;

TEST(LONGEST_ABSOLUTE_FILE_PATH, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::length_longest_path("dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext"), 20);
    ASSERT_EQ(Solution::length_longest_path(
                  "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext"),
              32);
    ASSERT_EQ(Solution::length_longest_path("aaa"), 0);
    ASSERT_EQ(Solution::length_longest_path("file1.txt\nfile2.txt\nlongfile.txt"), 12);
}
