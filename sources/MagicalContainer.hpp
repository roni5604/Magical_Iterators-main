#ifndef MAGICALCONTAINER_HPP
#define MAGICALCONTAINER_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include "AscendingIterator.hpp"
#include "PrimeIterator.hpp"
#include "SideCrossIterator.hpp"
using namespace std;

class MagicalContainer {
private:
    std::vector<int> elements;

public:
    MagicalContainer();
    ~MagicalContainer();

    void addElement(int element);
    void removeElement(int element);
    int size() const;

    // To be used by the iterator classes
    std::vector<int>& getElements();
};

#endif  // MAGICALCONTAINER_HPP
