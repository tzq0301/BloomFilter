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

    bool find(const std::string&);

private:
    static constexpr auto HASH_NUM = 5;

    static const std::hash<std::string> HASH_FUNCTION;

    static const std::array<int, HASH_NUM> HASH_FACTORIES;

    static constexpr auto MAX = 97;

    std::bitset<MAX> BITSET = std::bitset<MAX>{};
};


#endif //BLOOMFILTER_BLOOM_FILTER_H
