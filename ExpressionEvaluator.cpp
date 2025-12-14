#include "ExpressionEvaluator.h"

ExpressionEvaluator::ExpressionEvaluator(size_t n_) : n(n_) {
    operands = new double[n];
    for (size_t i = 0; i < n; ++i) operands[i] = 0.0;
}

ExpressionEvaluator::~ExpressionEvaluator() {
    delete[] operands;
}

void ExpressionEvaluator::setOperand(size_t index, double value) {
    if (index < n) operands[index] = value;
}

void ExpressionEvaluator::setOperands(const double* vals, size_t count) {
    size_t m = (count < n) ? count : n;
    for (size_t i = 0; i < m; ++i) operands[i] = vals[i];
}
