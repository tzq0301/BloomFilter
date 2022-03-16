#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <bitset>

#include "bloom_filter.h"

int main() {
    BloomFilter bloomFilter;

    std::bitset<4> bitset;
    bitset.set(1, true);
    std::cout << bitset[1] << " " << bitset[2] << std::endl;
}
