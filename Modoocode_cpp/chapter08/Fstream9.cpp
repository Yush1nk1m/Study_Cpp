#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream out("test.txt", std::ios::app);
    std::ofstream out2("test2.txt", std::ios::ate);

    out.seekp(3, std::ios::beg);
    out2.seekp(3, std::ios::beg);

    out << "Append";
    out2 << "Append";

    return 0;
}