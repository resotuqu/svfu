#include <iostream> 

int main() {
    int n, m, k, enter, floor;
    std::cin >> n >> m >> k;

    enter = ((n - 1) / (m * k)) + 1;
    floor = ((n - 1) % (m * k)) / k + 1;

    std::cout << enter << " " << floor << std::endl;

}