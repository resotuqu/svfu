#include <iostream>
#include <cmath>

int main()
{
    double a, s, h, rin, rout;
    std::cin >> a;

    s = ((a * a) * sqrt(3)) / 4;
    h = 2 * s / a;
    rin = a * sqrt(3) / 6;
    rout = a * sqrt(3) / 3;


    std::cout << s << ' ' << h << ' ' << rin << ' ' << rout << std::endl;
}