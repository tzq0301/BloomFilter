#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <bitset>

#include "bloom_filter.h"

int main() {
    BloomFilter bloomFilter;

    bloomFilter.add("SCU");
    bloomFilter.add("China");

    std::cout << bloomFilter.find("SCU") << " " << bloomFilter.find("America") << std::endl;
}
