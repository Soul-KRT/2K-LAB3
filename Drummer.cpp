#include "Drummer.h"
#include <iostream>

Drummer::Drummer(const std::string& fn, const std::string& ln,
    const std::string& g, int by,
    const std::string& inst, int r,
    int sticks)
    : Musician(fn, ln, g, by, inst, r),
    sticksCount(sticks) {
}

void Drummer::print() const {
    std::cout << "[Ударник]  "
        << lastName << " " << firstName
        << " (" << instrument << "), рейтинг = "
        << rating
        << ", палочек за концерт: " << sticksCount
        << std::endl;
}
