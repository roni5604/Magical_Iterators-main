#ifndef SIDE_CROSS_ITERATOR_HPP
#define SIDE_CROSS_ITERATOR_HPP

#include <iterator>
#include <vector>
#include <stdexcept>
#include "MagicalContainer.hpp"
using namespace std;


class MagicalContainer;  // Forward declaration

class SideCrossIterator {
private:
    MagicalContainer& container;
    std::vector<int>::iterator forward_it;
    std::vector<int>::reverse_iterator reverse_it;
    bool toggle;  // Added to toggle between forward and reverse iterators

public:
    SideCrossIterator(MagicalContainer& container);
    SideCrossIterator(const SideCrossIterator& other);
    SideCrossIterator& operator=(const SideCrossIterator& other);
    ~SideCrossIterator();

    bool operator==(const SideCrossIterator& other) const;
    bool operator!=(const SideCrossIterator& other) const;
    int& operator*();
    SideCrossIterator& operator++();

    SideCrossIterator begin();
    SideCrossIterator end();
};

#endif // SIDE_CROSS_ITERATOR_HPP
