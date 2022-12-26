#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream out("test.txt", std::ios::app);

    std::string s;
    if (out.is_open()) {
        out << "\nAn Appended String";
    }

    return 0;
}