#include <iostream>

class A {
    public :
        int a;

        A() { std::cout << "A's constructor has been called." << std::endl; }
};

class B {
    public :
        int b;

        B() { std::cout << "B's constructor has been called." << std::endl; }
};

class C : public B, public A {
    public :
        int c;

        C() : A(), B() { std::cout << "C's constructor has been called." << std::endl; }
};

int main() { 
    C c;

    return 0;
}