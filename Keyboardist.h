#pragma once
#include "Musician.h"

class Keyboardist : public Musician {
    bool classicalEducation;
public:
    Keyboardist(const std::string& fn, const std::string& ln,
        const std::string& g, int by,
        const std::string& inst, int r,
        bool edu);

    void print() const override;
};
