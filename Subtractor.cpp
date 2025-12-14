#include "Subtractor.h"

Subtractor::Subtractor() : ExpressionEvaluator(2) {}

double Subtractor::calculate() const {
    return operands[0] - operands[1];
}

void Subtractor::print() const {
    std::cout << "Subtractor: ("
        << operands[0] << " - " << operands[1]
        << ") = " << calculate() << std::endl;
}
