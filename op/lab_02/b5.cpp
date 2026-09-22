#include <iostream>

int main() {
    int x, y, count = 0; std::cin >> x >> y;

    // row, column

    if (x < 1 or x > 8 or y < 1 or y > 8) {
        std::cout << "ERROR" << std::endl;
        return 0;
    }

    if (x - 2 >= 1 && y - 1 >= 1) count++;
    if (x - 2 >= 1 && y + 1 <= 8) count++;
    if (x - 1 >= 1 && y - 2 >= 1) count++;
    if (x - 1 >= 1 && y + 2 <= 8) count++;
    if (x + 1 <= 8 && y - 2 >= 1) count++;
    if (x + 1 <= 8 && y + 2 <= 8) count++;
    if (x + 2 <= 8 && y - 1 >= 1) count++;
    if (x + 2 <= 8 && y + 1 <= 8) count++;


    std::cout << count << std::endl;

}