#include <iostream>

int main()
{
    int year;
    std::cin >> year;

    if (year < 1582 or year > 2200)
    {
        std::cout << "out of range" << std::endl;
        return 0;
    }

    if (year % 400 == 0)
    {
        std::cout << "leap year" << std::endl;
    }
    else if (year % 4 == 0 and year % 100 != 0)
    {
        std::cout << "leap year" << std::endl;
    }
    else
    {
        std::cout << "non-leap year" << std::endl;
    }
    return 0;
}