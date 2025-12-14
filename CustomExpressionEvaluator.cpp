#include "CustomExpressionEvaluator.h"
#include <utility>  // std::swap

CustomExpressionEvaluator::CustomExpressionEvaluator()
    : ExpressionEvaluator(5) {
}

// (x1 + x2) * x3 * x4 * x5
double CustomExpressionEvaluator::calculate() const {
    if (n < 2) return 0.0;
    double res = operands[0] + operands[1];
    for (size_t i = 2; i < n; ++i)
        res *= operands[i];
    return res;
}

void CustomExpressionEvaluator::print() const {
    std::cout << "CustomExpression: ";
    std::cout << "Total : " << n << " ";
    std::cout << "( " << operands[0] << " + " << operands[1] << " )";
    for (size_t i = 2; i < n; ++i)
        std::cout << " * " << operands[i];
    std::cout << "\nEquals to " << calculate() << std::endl;
}

// первый и последний операнды с дробной частью
void CustomExpressionEvaluator::shuffle() {
    int first = -1, last = -1;
    for (size_t i = 0; i < n; ++i) {
        if (operands[i] != (long long)operands[i]) {
            first = (int)i;
            break;
        }
    }
    for (int i = (int)n - 1; i >= 0; --i) {
        if (operands[i] != (long long)operands[i]) {
            last = i;
            break;
        }
    }
    if (first != -1 && last != -1 && first != last)
        std::swap(operands[first], operands[last]);
}

void CustomExpressionEvaluator::shuffle(size_t i, size_t j) {
    if (i >= n || j >= n) return;
    bool fi = operands[i] != (long long)operands[i];
    bool fj = operands[j] != (long long)operands[j];
    if (fi || fj)
        std::swap(operands[i], operands[j]);
}
