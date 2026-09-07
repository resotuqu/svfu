#include <iostream>

int main()
{
    int n, n1, n2, n3, n4;
    std::cin >> n;

    n4 = n % 10;
    n3 = n / 10 % 10;
    n2 = n / 100 % 10;
    n1 = n / 1000 % 10;

    int kv = n1 * n1 + n2 * n2 + n3 * n3 + n4 * n4;

    std::cout << kv << std::endl;

    std::cout << n4 << n3 << n2 << n1 << std::endl;
}