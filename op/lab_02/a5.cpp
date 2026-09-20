#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a % b == 0 and a % c == 0)
    {
        std::cout << a << std::endl;
    }
    else if (b % a == 0 and b % c == 0)
    {
        std::cout << b << std::endl;
    }
    else if (c % a == 0 and c % b == 0)
    {
        std::cout << c << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}