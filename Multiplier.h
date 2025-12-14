#pragma once
#include "ExpressionEvaluator.h"
#include <iostream>

class Multiplier : public ExpressionEvaluator {
public:
    Multiplier();

    double calculate() const override;
    void print() const override;
};
