#include <iostream> 
#include <string>

int main() {
    char c; std::cin >> c;
    std::string out;

    if (c >= 48 and c <= 57) {
        out = "DIGIT";
    }
    else if (c >= 65 and c <= 90) {
        out = "CAPITAL";
    }
    else if (c >= 97 and c <= 122) {
        out = "LOWERCASE";
    }
    else {
        out = "NON-ALPHANUMERIC";
    }

    std::cout << out << std::endl;
}