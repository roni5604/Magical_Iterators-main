#ifndef PRIMEITERATOR_HPP
#define PRIMEITERATOR_HPP

#include "MagicalContainer.hpp"
#include <vector>
#include <stdexcept>
using namespace std;
class MagicalContainer;  // forward declaration


class PrimeIterator {
private:
    MagicalContainer& container;
    std::vector<int>::iterator it;

public:
    PrimeIterator(MagicalContainer& container);
    PrimeIterator(const PrimeIterator& other);
    ~PrimeIterator();

    PrimeIterator& operator=(const PrimeIterator& other);
    bool operator==(const PrimeIterator& other) const;
    bool operator!=(const PrimeIterator& other) const;
    bool operator>(const PrimeIterator& other) const;
    bool operator<(const PrimeIterator& other) const;
    int operator*();
    PrimeIterator& operator++();

    PrimeIterator begin();
    PrimeIterator end();

private:
    bool isPrime(int n);
};

#endif  // PRIMEITERATOR_HPP
