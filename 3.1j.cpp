#include <iostream>
#include <locale>
#include "Subtractor.h"
#include "Multiplier.h"
#include "CustomExpressionEvaluator.h"

int main() {
    setlocale(LC_ALL, "Russian");

    // Subtractor: 23.65, -12.15
    Subtractor sub;
    sub.setOperand(0, 23.65);
    sub.setOperand(1, -12.15);

    // CustomExpression: 2.5, -5, -3, 2, 10
    CustomExpressionEvaluator custom;
    double vals[5] = { 2.5, -5.0, -3.0, 2.0, 10.0 };
    custom.setOperands(vals, 5);

    // Multiplier: 2.5, -3, 4, -1
    Multiplier mul;
    mul.setOperand(0, 2.5);
    mul.setOperand(1, -3.0);
    mul.setOperand(2, 4.0);
    mul.setOperand(3, -1.0);

    std::cout << "=== Исходные выражения ===\n";
    sub.print();
    mul.print();
    custom.print();   // должно дать 150

    std::cout << "\n=== shuffle() ===\n";
    custom.shuffle();
    custom.print();

    std::cout << "\n=== shuffle(0, 4) ===\n";
    custom.shuffle(0, 4);
    custom.print();

    std::cout << "\n=== Массив выражений ===\n";
    ExpressionEvaluator* arr[3] = { &sub, &mul, &custom };
    for (ExpressionEvaluator* e : arr) {
        e->print();
        std::cout << std::endl;
    }

    return 0;
}
