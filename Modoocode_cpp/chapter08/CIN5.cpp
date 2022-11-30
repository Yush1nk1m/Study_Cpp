#include <iostream>
#include <string>

int main() {
    int t;

    while (true) {
        std::cin >> t;
        std::cout << "Input :: " << t << std::endl;

        if (std::cin.fail()) {
            std::cout << "Enter the number correctly." << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }

        if (t == 0) break;
    }
}