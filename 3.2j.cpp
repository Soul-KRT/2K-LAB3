#include <iostream>
#include <locale>
#include <random>
#include <typeinfo>

#include "IMusician.h"
#include "Musician.h"
#include "Keyboardist.h"
#include "Drummer.h"
#include "SortMusicians.h"   // если вынесешь sortMusicians отдельно

using namespace std;

int randomDelta(mt19937& gen) {
    uniform_int_distribution<int> dist(1, 5);
    return dist(gen);
}

int main() {
    setlocale(LC_ALL, "Russian");

    IMusician* band[4];

    Musician gtr("Мишель", "Назаренко", "Ж", 2006,
        "гитара", 0);

    Keyboardist key("Илья", "Соловьев", "М", 2005,
        "клавиши", 0, true);

    Drummer dr("Артем", "Авросьеф", "М", 2005,
        "ударные", 0, 3);

    IMusician* heapKey = new Keyboardist(
        "Юлия", "Андропова", "Ж", 2006,
        "клавишные", 0, false);

    band[0] = &gtr;
    band[1] = &key;
    band[2] = &dr;
    band[3] = heapKey;

    random_device rd;
    mt19937 gen(rd());

    for (int c = 1; c <= 3; ++c) {
        cout << "Концерт " << c << endl;
        for (int i = 0; i < 4; ++i)
            band[i]->addToRating(randomDelta(gen));
    }

    cout << "\nRTTI (typeid):\n";
    for (int i = 0; i < 4; ++i)
        cout << "Объект " << i << ": "
        << typeid(*band[i]).name() << endl;

    sortMusicians(band, 4);

    cout << "\nМузыканты по убыванию рейтинга (клавишники впереди):\n";
    for (int i = 0; i < 4; ++i) {
        if (auto k = dynamic_cast<Keyboardist*>(band[i])) {
            cout << "(RTTI: Keyboardist) ";
            k->print();
        }
        else if (auto d = dynamic_cast<Drummer*>(band[i])) {
            cout << "(RTTI: Drummer) ";
            d->print();
        }
        else {
            cout << "(RTTI: Musician) ";
            band[i]->print();
        }
    }

    delete heapKey;
    return 0;
}
