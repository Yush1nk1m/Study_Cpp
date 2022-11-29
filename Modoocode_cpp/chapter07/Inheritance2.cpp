#include <iostream>
#include <string>

class Base {
    private :
        std::string s;

    public :
        Base() : s("Base") { std::cout << "Base Class" << std::endl; }

        void what() { std::cout << s << std::endl; }
};

class Derived : public Base {
    private :
        std::string s;

    public :
        Derived() : Base(), s("Derived") {
            std::cout << "Derived Class" << std::endl;

            what();
        }

        void what() { std::cout << s << std::endl; }
};

int main() {
    std::cout << " === Base Class Construct ===" << std::endl;
    Base p;

    std::cout << " === Derived Class Construct ===" << std::endl;
    Derived c;

    return 0;
}