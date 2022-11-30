#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream in("test.txt");
    std::string s;

    if (in.is_open()) {
        in >> s;
        std::cout << "Read string : " << s << std::endl;
    } else {
        std::cout << "Cannot find the file." << std::endl;
    }

    return 0;
}