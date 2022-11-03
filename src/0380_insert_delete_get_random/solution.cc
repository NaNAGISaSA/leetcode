#include "0380_insert_delete_get_random.h"

#include <cstdlib>
#include <unordered_map>
#include <vector>

namespace leetcode::insert_delete_get_random {

class RandomizedSet::Impl {
public:
    Impl() : vec{}, map{} {
    }

    bool insert(int val) {
        if (map.find(val) != map.end())
            return false;
        map.insert({val, vec.size()});
        vec.push_back(val);
        return true;
    }

    bool remove(int val) {
        if (map.find(val) == map.end())
            return false;
        map[vec.back()] = map[val];
        vec[map[val]] = vec.back();
        vec.pop_back();
        map.erase(val);
        return true;
    }

    int get_random() {
        return vec[rand() % vec.size()];
    }

private:
    std::vector<int> vec;
    std::unordered_map<int, size_t> map;
};

RandomizedSet::RandomizedSet() : impl(std::make_unique<Impl>()) {
}

RandomizedSet::~RandomizedSet() = default;

bool RandomizedSet::insert(int val) {
    return impl->insert(val);
}

bool RandomizedSet::remove(int val) {
    return impl->remove(val);
}

int RandomizedSet::get_random() {
    return impl->get_random();
}

}  // namespace leetcode::insert_delete_get_random
