#include <iostream>
#include <cmath>

int main()
{
    double a, b;
    std::cin >> a >> b;

    // (x^2 - a)(x^2 + b) = 0
    if (a < 0 and b > 0)
    {
        std::cout << "No solution" << std::endl;
        return 0;
    }

    if (a > 0)
    {
        std::cout << -sqrt(a) << ' ' << sqrt(a) << " ";
    }
    else if (a == 0)
    {
        std::cout << "0 ";
    }

    if (b < 0 && -b != a)
    {
        std::cout << -sqrt(-b) << ' ' << sqrt(-b) << std::endl;
    }
    else if (b == 0 and a != 0) {
        std::cout << "0" << std::endl;
    }

    return 0;
}