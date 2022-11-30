#include <iostream>

class Base {
    public :
        Base() { std::cout << "Base Class" << std::endl; }

        virtual void what() { std::cout << "Base Class' what()" << std::endl; }
};

class Derived : public Base {
    public :
        Derived() : Base() { std::cout << "Derived Class" << std::endl; }

        void what() { std::cout << "Derived Class' what()" << std::endl; }
};

int main() {
    Base p;
    Derived c;

    Base* p_c = &c;
    Base* p_p = &p;

    std::cout << "== Real object is Base ==" << std::endl;
    p_p->what();

    std::cout << "== Real object is Derived ==" << std::endl;
    p_c->what();

    return 0;
}