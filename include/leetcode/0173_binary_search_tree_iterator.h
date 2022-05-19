#ifndef _LEETCODE_BINARY_SEARCH_TREE_ITERATOR_H_
#define _LEETCODE_BINARY_SEARCH_TREE_ITERATOR_H_

#include <memory>

#include "utils/tree_utils.h"

namespace leetcode::binary_search_tree_iterator {

class BSTIterator {
public:
    BSTIterator(TreeNode* root);
    ~BSTIterator();
    int next();
    bool has_next();

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::binary_search_tree_iterator

#endif