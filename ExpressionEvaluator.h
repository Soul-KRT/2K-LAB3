#pragma once
#include <cstddef>

class ExpressionEvaluator {
protected:
    double* operands;
    size_t n;

public:
    explicit ExpressionEvaluator(size_t n);
    virtual ~ExpressionEvaluator();

    void setOperand(size_t index, double value);
    void setOperands(const double* vals, size_t count);

    size_t size() const { return n; }
    double getOperand(size_t i) const { return operands[i]; }

    virtual double calculate() const = 0;
    virtual void print() const = 0;
};
