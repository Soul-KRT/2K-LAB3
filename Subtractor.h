#pragma once
#include "ExpressionEvaluator.h"
#include <iostream>

class Subtractor : public ExpressionEvaluator {
public:
    Subtractor();

    double calculate() const override;
    void print() const override;
};
