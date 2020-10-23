#include <iostream>
#include <string.h>
#include "calculator.h"

using namespace std;

Calculator calc;
double a = 9.5;
double b = 5.5;

int main() { 
    std::cout << "Result:\n";
    std::cout << "a + b = " << calc.Add(a, b) << std::endl;  
    return 0;
}
