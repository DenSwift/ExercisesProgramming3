//
//  Task1.cpp
//  Task1
//
//  Created by Денис  on 26.10.2024.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

// Function f(x) = e^(-x^2)
double f(double x) {
    return exp(-x * x);
}

// Rectangle method for numerical integration
double integral(double a, double b, int n) {
    double width = (b - a) / n; // Width of each rectangle
    double total_area = 0.0;

    for (int i = 0; i < n; ++i) {
        double x = a + i * width;  // Left endpoint of the rectangle
        total_area += f(x) * width; // Rectangle area = f(x) * width
    }

    return total_area;
}

int main() {
    double a = 0.0;
    double b = 1.0;
    int n = 1000; // Number of rectangles for approximation

    double result = integral(a, b, n);

    std::cout << "Approximate integral from " << a << " to " << b << " is: " << result << std::endl;
  //  std::cout << "Expected value (approx) is: 0.746824" << std::endl;

    return 0;
}

