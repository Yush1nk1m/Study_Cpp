#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    char peek = std::cin.rdbuf()->snextc();
    if (std::cin.fail()) std::cout << "Failed";
    std::cout << "First character of the second word : " << peek << std::endl;
    std::cin >> s;
    std::cout << "read again : " << s << std::endl;

    return 0;
}