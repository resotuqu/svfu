#include <iostream>

int main() {
    int n;
    std::cin >> n;

    // 1(2)34567 || 12(3)45678
    std::cout << n / 100000 % 10 << std::endl;
    
}