#include <iostream>
#include <cmath>

int main()
{
    int a, b;
    std::cin >> a >> b;

    // (x^2 - a)(x^2 + b) = 0
    if (a < 0 and b > 0)
    {
        std::cout << "No solution" << std::endl;
    }

    if (a == 0)
    {
        std::cout << "0 ";
    }
    else
    {
        std::cout << -sqrt(a) << ' ' << sqrt(a) << " ";
    }

    if (b == 0)
    {
        std::cout << "0" << std::endl;
    }
    else
    {
        std::cout << -sqrt(-b) << ' ' << sqrt(-b);
    }
}