#pragma once
#include "Musician.h"

class Drummer : public Musician {
    int sticksCount;
public:
    Drummer(const std::string& fn, const std::string& ln,
        const std::string& g, int by,
        const std::string& inst, int r,
        int sticks);

    void print() const override;
};
