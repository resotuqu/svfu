#include <iostream>

int main()
{
    double A, B, C, s1, s2, x;
    std::cin >> A >> B >> C;

    s1 = A * B;
    s2 = s1 * 6;

    x = s2 / C;
    std::cout << x << std::endl;
}