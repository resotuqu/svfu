#include <iostream> 
#include <string>

int main() {
    char c; std::cin >> c;
    std::string out;

    if (c >= '0' and c <= '9') {
        out = "DIGIT";
    }
    else if (c >= 'A' and c <= 'Z') {
        out = "CAPITAL";
    }
    else if (c >= 'a' and c <= 'z') {
        out = "LOWERCASE";
    }
    else {
        out = "NON-ALPHANUMERIC";
    }

    std::cout << out << std::endl;
}