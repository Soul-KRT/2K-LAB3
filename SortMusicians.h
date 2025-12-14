#pragma once
#include "IMusician.h"
#include <algorithm>

inline void sortMusicians(IMusician* arr[], int n) {
    std::sort(arr, arr + n, [](IMusician* a, IMusician* b) {
        bool ak = a->isKeyboard();
        bool bk = b->isKeyboard();
        if (ak != bk) return ak > bk;
        return a->getRating() > b->getRating();
        });
}
