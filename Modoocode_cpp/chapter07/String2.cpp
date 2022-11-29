#include <iostream>
#include <string>

int main() {
    std::string s = "abc";
    std::string t = "def";
    std::string s2 = s;

    std::cout << s << "'s length : " << s.length() << std::endl;
    std::cout << s << " + " << t << " : " << s + t << std::endl;

    if (s == s2) {
        std::cout << s << " and " << s2 << " are the same." << std::endl;
    }

    if (s != t) {
        std::cout << s << " and " << t << " are different." << std::endl;
    }

    return 0;
}