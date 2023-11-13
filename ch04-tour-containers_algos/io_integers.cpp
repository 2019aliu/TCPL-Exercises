#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iterator>
#include <vector>

int main() {
    // consts
    const int INT_COUNT = 300;
    const std::string FILE_NAME = "my_integers.txt";

    // exercise 9: write out a few hundred integers to a file
    std::ofstream os {FILE_NAME};
    for (int i = 0; i < INT_COUNT; i++) {
        os << std::rand() << "\n";
    }
    os.close();  // necessary because we are reading in the same file

    // exercise 10: write in a file full of integers
    
    std::ifstream is {FILE_NAME, std::ios_base::in};
    std::vector<int> myints;
    int i;
    while (is >> i) {
        std::cout << i;
        myints.push_back(i);
    }
    for (int i: myints) {
        std::cout << i << '\n';
    }

    return 0;
}