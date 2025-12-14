#include "Multiplier.h"

Multiplier::Multiplier() : ExpressionEvaluator(4) {}

double Multiplier::calculate() const {
    double res = 1.0;
    for (size_t i = 0; i < n; ++i) res *= operands[i];
    return res;
}

void Multiplier::print() const {
    std::cout << "Multiplier: "
        << operands[0];
    for (size_t i = 1; i < n; ++i)
        std::cout << " * " << operands[i];
    std::cout << " = " << calculate() << std::endl;
}
