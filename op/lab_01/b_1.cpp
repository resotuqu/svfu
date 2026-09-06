#include <iostream>

int main() {
    double x;
    std::cin >> x;

    double x2 = x * x;
    double x4 = x2 * x2;
    double x8 = x4 * x4;
    double x10 = x8 * x2;

    std::cout << x10 << std::endl;
}