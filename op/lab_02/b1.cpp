#include <iostream>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    if ((a + b) <= c || (a + c) <= b || (b + c) <= a || a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "No" << std::endl;
        return 0;
    }

    if (a > b and a > c and (a * a == (b * b + c * c)))
    {
        std::cout << "Rectangular" << std::endl;
    }
    else if (b > a and b > c and (b * b == (a * a + c * c)))
    {
        std::cout << "Rectangular" << std::endl;
    }
    else if (c > a and c > b and (c * c == (a * a + b * b)))
    {
        std::cout << "Rectangular" << std::endl;
    }
    else
    {
        std::cout << "Non-rectangular" << std::endl;
    }
}