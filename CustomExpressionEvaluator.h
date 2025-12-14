#pragma once
#include "ExpressionEvaluator.h"
#include "IShuffle.h"
#include <iostream>

class CustomExpressionEvaluator : public ExpressionEvaluator, public IShuffle {
public:
    CustomExpressionEvaluator();

    double calculate() const override;
    void print() const override;

    void shuffle() override;
    void shuffle(size_t i, size_t j) override;
};
