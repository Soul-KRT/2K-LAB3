#pragma once
#include <string>

class IMusician {
public:
    virtual ~IMusician() = default;
    virtual void addToRating(int delta) = 0;
    virtual int  getRating() const = 0;
    virtual bool isKeyboard() const = 0;
    virtual void print() const = 0;
};
