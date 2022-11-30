#include <iostream>
#include <string>

int main() {
    int t;

    while (std::cin >> t) {
        std::cout << "input : " << t << std::endl;
        if (t == 0) break;
    }
}