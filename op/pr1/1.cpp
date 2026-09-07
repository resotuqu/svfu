#include <iostream>
#include <cmath>

int main()
{
    double a,b;
    std::cin >> a >> b;
    double per = 2 * a + 2 * b;
    double diag = sqrt(a * a + b * b);

    std::cout << per << ' ' << diag << std::endl;
}