#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream in("test.txt", std::ios::binary);
    std::string s;

    int x;
    if (in.is_open()) {
        in.read((char*)(&x), 4);
        std::cout << std::hex << x << std::endl;
    } else {
        std::cout << "Cannot find the file." << std::endl;
    }

    return 0;
}