#include <iostream>
#include <cmath>

int main() {
    unsigned int x, y, z;
    std::cin >> x >> y >> z;

    // x^y^z + y^(x+z) + z^5

    unsigned int result = pow(x, pow(y, z)) + pow(y, x + z) + pow(z, 5);
    std::cout << result << std::endl;    

} 