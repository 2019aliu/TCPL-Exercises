#include <iostream>
#include <vector>
#include <algorithm>

// // exercise 5: write a program that reads a name and age from cin, then cout it
// void e5() {
    // std::string name;
    // int age;
    // std::getline(std::cin, name);
    // std::cin >> age;
    // std::cout << "Hello, " << name << ", your age is " << age << ".\n";
// }


// // exercise 6: redo exercise 5 but take in several pairs by rewriting the << and >> operators
// THIS ONE DOESN'T WORK AND IDK WHY!!!
// struct Entry {
//     std::string name;
//     int number;
// };

// std::ostream& operator<<(std::ostream& os, const Entry e) {
//     return os << "{\"" << e.name << "\", " << e.number << "}";
// }

// std::istream& operator>>(std::istream& is, Entry e) {
//     char c, c2;
//     if (is>>c && c=='{' && is>>c2 && c2=='"') {
//         std::string name;
//         while (is.get(c) && c!='"')
//             name += c;
//         if (is>>c && c==',') {
//             int number = 0;
//             if (is >> number >> c && c == '}') {
//                 e = { name, number };
//                 return is;
//             }
//         }
//     }
//     return is;
// }

// void e6() {
//     for (Entry ee; std::cin >> ee;) {
//         std::cout << ee << '\n';
//     }
// }

// // exercise 7: sort a vector of integers
// void e7() {
//     std::vector<int> v {5, 9, -1, 200, 0};
//     for (int i: v) {
//         std::cout << i << ",";
//     }
//     std::cout << "\n";
//     std::sort(v.begin(), v.end());
//     for (int i: v) {
//         std::cout << i << ",";
//     }
//     std::cout << "\n";
// }

// exercise 8: same thing but for strings
void e8() {
    std::vector<std::string> v {"Kant", "Plato", "Aristotle", "Kierkegard", "Hume"};
    for (std::string i: v) {
        std::cout << i << ",";
    }
    std::cout << "\n";
    std::sort(v.begin(), v.end());
    for (std::string i: v) {
        std::cout << i << ",";
    }
    std::cout << "\n";
}

int main() {
    e8();
    return 0;
}