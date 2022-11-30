#include <iostream>
#include <string>

int main() {
    int t;

    while (true) {
        std::cin.setf(std::ios_base::hex, std::ios_base::basefield);

        std::cin >> t;
        std::cout << "INPUT :: " << t << std::endl;

        if (std::cin.fail()) {
            std::cout << "Enter the number correctly." << std::endl;
            std::cin.clear();
        }

        if (t == 0) break;
    }
}