#include <iostream>
#include <cmath>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // p = (a + b + c) / 2
    // ^p(p-a)(p-b)(p-c)

    double a, b, c;
    a = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double p = (a + b + c) / 2;

    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << area << std::endl;
}