//
// Created by 童昭旗 on 2022/3/16.
//

#include <algorithm>

#include "bloom_filter.h"

constexpr auto BloomFilter::HASH_FUNCTION = std::hash<std::string>{};

constexpr auto BloomFilter::HASH_FACTORIES = std::array<int, HASH_NUM>{17, 23, 31, 47, 97};

void BloomFilter::add(const std::string &str) {
    std::for_each(HASH_FACTORIES.begin(), HASH_FACTORIES.end(), [this, &str](const int factory) -> void {
        BITSET.set(HASH_FUNCTION(str) % factory);
    });
}

bool BloomFilter::find(const std::string &str) {
    auto hashValue = HASH_FUNCTION(str);

    return std::all_of(HASH_FACTORIES.begin(), HASH_FACTORIES.end(), [this, hashValue](const auto factory) {
        return BITSET.test(hashValue % factory);
    });
}
