#pragma once
#include "IMusician.h"
#include <string>

class Musician : public IMusician {
protected:
    std::string firstName;
    std::string lastName;
    std::string gender;
    int         birthYear;
    std::string instrument;
    int         rating;

public:
    Musician();
    Musician(const std::string& fn, const std::string& ln,
        const std::string& g, int by,
        const std::string& inst, int r);

    void setFirstName(const std::string& fn);
    void setLastName(const std::string& ln);
    void setGender(const std::string& g);
    void setBirthYear(int y);
    void setInstrument(const std::string& i);

    void addToRating(int delta) override;
    int  getRating() const override;
    bool isKeyboard() const override;
    virtual void print() const override;
};
