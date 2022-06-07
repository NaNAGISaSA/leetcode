#include "0208_implement_trie.h"

#include <gtest/gtest.h>

using namespace leetcode::implement_trie;

TEST(IMPLEMENT_TRIE, EXAMPLE_TEST) {
    Trie trie;
    trie.insert("apple");
    ASSERT_TRUE(trie.startswith("app"));
    ASSERT_TRUE(trie.search("apple"));
    ASSERT_FALSE(trie.search("app"));
    trie.insert("app");
    ASSERT_TRUE(trie.search("app"));
}
