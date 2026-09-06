#include <iostream>
#include <string>

int main() {
    std::string last_name, first_name, group;
    std::cout << "Yout last name, first name and group: ";
    std::cin >> last_name >> first_name >> group;
    std::cout << "Hello, student!" << std::endl;
    std::cout << group << " " << last_name << " " << first_name << std::endl;
}