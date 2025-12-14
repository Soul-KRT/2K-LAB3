#include "Keyboardist.h"
#include <iostream>

Keyboardist::Keyboardist(const std::string& fn, const std::string& ln,
    const std::string& g, int by,
    const std::string& inst, int r,
    bool edu)
    : Musician(fn, ln, g, by, inst, r),
    classicalEducation(edu) {
}

void Keyboardist::print() const {
    std::cout << "[Клавишник] "
        << lastName << " " << firstName
        << " (" << instrument << "), рейтинг = "
        << rating
        << ", классическое образование: "
        << (classicalEducation ? "да" : "нет")
        << std::endl;
}
