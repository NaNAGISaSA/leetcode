#include "0381_insert_delete_get_random_duplicates_allowed.h"

#include <cstdlib>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace leetcode::insert_delete_get_random_duplicates_allowed {

class RandomizedCollection::Impl {
public:
    Impl() : vec{}, map{} {
    }

    bool insert(int val) {
        map[val].insert(vec.size());
        vec.push_back(val);
        return map[val].size() == 1;
    }

    bool remove(int val) {
        if (map[val].size() == 0) {
            return false;
        }
        if (vec.back() == val) {
            vec.pop_back();
            map[val].erase(vec.size());
            return true;
        }
        size_t index = *(map[val].begin());
        int last = vec.back();
        map[last].erase(vec.size() - 1);
        map[last].insert(index);
        vec[index] = last;
        vec.pop_back();
        map[val].erase(index);
        return true;
    }

    int get_random() {
        return vec[rand() % vec.size()];
    }

private:
    std::vector<int> vec;
    std::unordered_map<int, std::unordered_set<size_t>> map;
};

RandomizedCollection::RandomizedCollection() : impl(std::make_unique<Impl>()) {
}

RandomizedCollection::~RandomizedCollection() = default;

bool RandomizedCollection::insert(int val) {
    return impl->insert(val);
}

bool RandomizedCollection::remove(int val) {
    return impl->remove(val);
}

int RandomizedCollection::get_random() {
    return impl->get_random();
}

}  // namespace leetcode::insert_delete_get_random_duplicates_allowed
