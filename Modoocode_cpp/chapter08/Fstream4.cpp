#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream in("test.txt");
    std::string s;

    if (in.is_open()) {
        in.seekg(0, std::ios::end);

        int size = in.tellg();

        s.resize(size);

        in.seekg(0, std::ios::beg);

        in.read(&s[0], size);
        std::cout << s << std::endl;
    } else {
        std::cout << "Cannot find the file." << std::endl;
    }

    return 0;
}