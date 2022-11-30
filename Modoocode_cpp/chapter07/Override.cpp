#include <iostream>
#include <string>

class Base {
    private :
        std::string s;

    public :
        Base() : s("Base") { std::cout << "Base Class" << std::endl; }

        virtual void what() { std::cout << s << std::endl; }
};

class Derived : public Base {
    private :
        std::string s;

    public :
        Derived() : s("Derived"), Base() { std::cout << "Derived Class" << std::endl; }

        void what() override { std::cout << s << std::endl; }
}