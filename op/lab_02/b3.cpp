#include <iostream>

int main() {
    int n; std::cin >> n;
    int n1, n2, n3, n4;

    n1 = n / 1000 % 10;
    n2 = n / 100 % 10;
    n3 = n / 10 % 10;
    n4 = n % 10;

    if (n1 % 2 != 0 or n2 % 2 != 0 or n3 % 2 != 0 or n4 % 2 != 0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }


}