#include <iostream>

int main() {
    int R;
    double pi = 3.14159;
    std::cin >> R;

    double s1 = R * R;
    double s2 = (((2 * R) * (2 * R)) - (pi * (R * R))) / 4;

    std::cout << s1 + s2 << std::endl;
}