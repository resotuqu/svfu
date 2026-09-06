#include <iostream>

int main() {
    int n;
    std::cin >> n; // 98765432 -> 7

    std::cout << n / 100000 % 10 << std::endl;

}