#ifndef ASCENDINGITERATOR_HPP
#define ASCENDINGITERATOR_HPP

#include "MagicalContainer.hpp"
#include <vector>
#include <stdexcept>
using namespace std;
class MagicalContainer;  // forward declaration

class AscendingIterator {
private:
    MagicalContainer& container;
    std::vector<int>::iterator it;

public:
    AscendingIterator(MagicalContainer& container);
    AscendingIterator(const AscendingIterator& other);
    ~AscendingIterator();

    AscendingIterator& operator=(const AscendingIterator& other);
    bool operator==(const AscendingIterator& other) const;
    bool operator!=(const AscendingIterator& other) const;
    bool operator>(const AscendingIterator& other) const;
    bool operator<(const AscendingIterator& other) const;
    int operator*();
    AscendingIterator& operator++();

    AscendingIterator begin();
    AscendingIterator end();
};

#endif  // ASCENDINGITERATOR_HPP
