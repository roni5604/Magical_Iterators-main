#include "sources/MagicalContainer.hpp"
#include "sources/AscendingIterator.hpp"
#include "sources/PrimeIterator.hpp"
#include "sources/SideCrossIterator.hpp"
#include "doctest.h"
#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

TEST_CASE("Test 1: AscendingIterator") {
    MagicalContainer container;

        CHECK_NOTHROW(container.addElement(5));
        CHECK(container.size() == 1);

        CHECK_NOTHROW(container.addElement(10));
        CHECK(container.size() == 2);

        CHECK_NOTHROW(container.removeElement(5));
        CHECK(container.size() == 1);

        CHECK_THROWS(container.removeElement(5));  // Element not present in the container

        CHECK_NOTHROW(container.removeElement(10));
        CHECK(container.size() == 0);
    
}




