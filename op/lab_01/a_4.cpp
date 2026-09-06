#include <iostream>

int main() {
    int a, mul = 1;
    std::cin >> a;

    while(a != 0) {
        mul = mul * (a % 10);
        a = a / 10;
    }

    std::cout << mul << std::endl;
}