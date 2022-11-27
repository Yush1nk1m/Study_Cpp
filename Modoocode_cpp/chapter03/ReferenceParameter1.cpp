#include <iostream>

int changeVal(int& p) {
    p += 1;

    return 0;
}

int main() {
    int number = 5;

    for (int i = 0; i < 10; i++) {
        std::cout << number << " -> ";
        changeVal(number);
        std::cout << number << std::endl;
    }

    return 0;
}