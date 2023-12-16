#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    int num1 = 5, num2 = 10;
    int result = calc.add(num1, num2);

    std::cout << "Result of adding " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
