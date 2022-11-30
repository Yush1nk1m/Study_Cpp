#include <iostream>

class Parent {
    public :
        Parent() { std::cout << "Parent's constructor has been called." << std::endl; }
        virtual ~Parent() { std::cout << "Parent's destructor has been called." << std::endl; }
};

class Child : public Parent {
    public :
        Child() : Parent() { std::cout << "Child's constructor has been called." << std::endl; }
        ~Child() { std::cout << "Child's destructor has been called." << std::endl; }
};

int main() {
    std::cout << "--- Normal Child Construct ---" << std::endl;
    {
        Child c;
    }

    std::cout << "--- The case when a Parent pointer points Child object ---" << std::endl;
    {
        Parent* p = new Child();
        delete p;
    }
}