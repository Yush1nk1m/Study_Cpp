#include <iostream>

int main() {
    int a = 3;
    int& another_a = a;

    std::cout << "a : " << a << ", another_a : " << another_a << std::endl;
    another_a = 5;
    std::cout << "a : " << a << ", another_a : " << another_a << std::endl;

    return 0;
}