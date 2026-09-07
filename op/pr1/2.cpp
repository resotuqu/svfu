#include <iostream>
#include <cmath>

int main()
{
    double x;
    std::cin >> x;

    double per = x * 12;
    double area = x * x * 6;

    std::cout << per << ' ' << area << std::endl;
}