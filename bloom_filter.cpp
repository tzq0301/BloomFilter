//
// Created by 童昭旗 on 2022/3/16.
//

#include <algorithm>
#include <iostream>

#include "bloom_filter.h"

void BloomFilter::add(const std::string &str) {
    std::for_each(HASH_FACTORIES.begin(), HASH_FACTORIES.end(), [this, &str](const int factory) {
        BITSET.set(HASH_FUNCTION(str) % factory);
    });

//    std::cout << BITSET.to_string() << std::endl;
}


