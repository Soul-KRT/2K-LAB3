#include "Musician.h"
#include <iostream>

Musician::Musician()
    : firstName(""), lastName(""), gender(""),
    birthYear(2000), instrument(""), rating(0) {
}

Musician::Musician(const std::string& fn, const std::string& ln,
    const std::string& g, int by,
    const std::string& inst, int r)
    : firstName(fn), lastName(ln), gender(g),
    birthYear(by), instrument(inst), rating(r) {
}

void Musician::setFirstName(const std::string& fn) { firstName = fn; }
void Musician::setLastName(const std::string& ln) { lastName = ln; }
void Musician::setGender(const std::string& g) { gender = g; }
void Musician::setBirthYear(int y) { birthYear = y; }
void Musician::setInstrument(const std::string& i) { instrument = i; }

void Musician::addToRating(int delta) { rating += delta; }
int  Musician::getRating() const { return rating; }

bool Musician::isKeyboard() const {
    return instrument == "клавиши" ||
        instrument == "клавишные" ||
        instrument == "пианино" ||
        instrument == "синтезатор";
}

void Musician::print() const {
    std::cout << lastName << " " << firstName
        << " (" << instrument << "), рейтинг = "
        << rating << std::endl;
}
