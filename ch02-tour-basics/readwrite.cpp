#include <iostream>

int main() {
    // exercise 6: read in a bool, a char, an int, a double, and a string
    bool b;  // only reads in a 0 or 1
    char c;
    int i;
    double d;
    std::string s;  // only reads in string without quotes and has no spaces
    // otherwise you'll need to read the entire line using `getline`

    // std::cin >> b;
    // std::cin >> c;
    // std::cin >> i;
    // std::cin >> d;
    // std::cin >> s;
    std::cin >> b >> c >> i >> d >> s;

    // exercise 5: read out a bool, a char, an int, a double, and a string
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << i << "\n";
    std::cout << d << "\n";
    std::cout << s << "\n";

    return 0;
}