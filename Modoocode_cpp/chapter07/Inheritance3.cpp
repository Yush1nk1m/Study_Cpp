#include <iostream>
#include <string>

class Base {
    public :    
        std::string parent_string;

        Base() : parent_string("Base") { std::cout << "Base Class" << std::endl; }

        void what() { std::cout << parent_string << std::endl; }
};

class Derived : private Base {
    private :
        std::string child_string;

    public :
        Derived() : child_string("Derived") { std::cout << "Derived Class" << std::endl; }

        void what() { std::cout << child_string << std::endl; }
};

int main() {
    Base p;

    std::cout << p.parent_string << std::endl;

    Derived c;

    std::cout << c.parent_string << std::endl;      // raises compile error

    return 0;
}