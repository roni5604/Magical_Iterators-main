#include "SideCrossIterator.hpp"
#include "MagicalContainer.hpp"

SideCrossIterator::SideCrossIterator(MagicalContainer& container) : container(container) {
    forward_it = container.getElements().begin();
    reverse_it = container.getElements().rbegin();
    toggle = true;  // Set the toggle to true initially
}

SideCrossIterator::SideCrossIterator(const SideCrossIterator& other) 
    : container(other.container), forward_it(other.forward_it), reverse_it(other.reverse_it), toggle(other.toggle) {
}

SideCrossIterator& SideCrossIterator::operator=(const SideCrossIterator& other) {
    if (this != &other) {
        container = other.container;
        forward_it = other.forward_it;
        reverse_it = other.reverse_it;
        toggle = other.toggle;
    }
    return *this;
}

SideCrossIterator::~SideCrossIterator() {
}

bool SideCrossIterator::operator==(const SideCrossIterator& other) const {
    return (forward_it == other.forward_it) && (reverse_it == other.reverse_it);
}

bool SideCrossIterator::operator!=(const SideCrossIterator& other) const {
    return !(*this == other);
}

int& SideCrossIterator::operator*() {
    return toggle ? *forward_it : *reverse_it;
}

SideCrossIterator& SideCrossIterator::operator++() {
    if (toggle) {
        ++forward_it;
    } else {
        ++reverse_it;
    }
    toggle = !toggle;
    return *this;
}

SideCrossIterator SideCrossIterator::begin() {
    return SideCrossIterator(container);
}

SideCrossIterator SideCrossIterator::end() {
    SideCrossIterator temp(container);
    temp.forward_it = container.getElements().end();
    temp.reverse_it = container.getElements().rend();
    return temp;
}
