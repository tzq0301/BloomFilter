//
// Created by 童昭旗 on 2022/3/16.
//

#ifndef BLOOMFILTER_BLOOM_FILTER_H
#define BLOOMFILTER_BLOOM_FILTER_H

#include <functional>
#include <string>
#include <array>
#include <vector>
#include <exception>
#include <bitset>


class BloomFilter {
public:
    void add(const std::string&);

private:
    static constexpr int HASH_NUM = 5;

    static constexpr auto HASH_FUNCTION = std::hash<std::string>{};

    static constexpr auto HASH_FACTORIES = std::array<int, HASH_NUM>{5, 7, 11, 13, 17};

    static constexpr auto MAX = 17;

    std::bitset<MAX> BITSET = std::bitset<MAX>{};
};


#endif //BLOOMFILTER_BLOOM_FILTER_H
