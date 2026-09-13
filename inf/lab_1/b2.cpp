#include <iostream>

int main()
{
    double x, y, result;
    std::cin >> x >> y;

    // 5x^2y^2 - 3xy^2 - 17x^2y - 2y^2 + 5xy + 2x^2 - 4x + 11y + 7
    // mul 8 add 8 min 8

    result = (((5 * y - 17) * y + 2) * x + ((-3 * y + 5) * y - 4)) * x + ((-2 * y + 11) * y + 7);

    std::cout << result << std::endl;
}