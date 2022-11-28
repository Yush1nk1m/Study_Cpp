#include <string.h>
#include <iostream>

class Test {
    char c;

    public :
        Test(char _c) {
            c = _c;
            std::cout << "Constructor has been called.      " << c << std::endl;
        }

        ~Test() { std::cout << "Destructor has been called.     " << c << std::endl; }
};

void simple_function() { Test b('b'); }

int main() {
    Test a('a');
    simple_function();
}