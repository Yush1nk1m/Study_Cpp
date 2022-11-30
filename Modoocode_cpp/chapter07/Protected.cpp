#include <iostream>
#include <string>

class Base {
    protected :
        std::string parent_string;

    public :
        Base() : parent_string("Base") { std::cout << "Base Class" << std::endl; }

        void what() { std::cout << parent_string << std::endl; }
};

class Derived : public Base {
    private :
        std::string child_string;

    public :
        Derived() : child_string("Base") { 
            std::cout << "Derived Class" << std::endl;

            parent_string = "Changed";
        }

        void what() { std::cout << child_string << std::endl; }
};