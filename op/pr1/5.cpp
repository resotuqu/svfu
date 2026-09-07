#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    // ax^2 + bx + c
    // d = b^2 - 4ac

    double d = sqrt(b * b - 4 * a * c);

    // d1 = -b + d / 2

    double d1 = (-b + d) / (2 * a);
    double d2 = (-b - d) / (2 * a);

    std::cout << d1 << ' ' << d2 << std::endl;
}