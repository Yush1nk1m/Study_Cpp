/********************************************************************
 * A program which examines polymorphism with all of 3 materials    *
********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// definition of base class
class Base
{
    public:
        virtual void print() const { cout << "Base class" << endl; }
};
// definition of derived class
class Derived : public Base
{
    public:
        virtual void print() const { cout << "Derived class" << endl; }     // virtual keyword is optional
};

int main()
{
    // generate a pointer(socket) for base class
    Base* ptr;
    // point base class' object with ptr pointer
    ptr = new Base();
    ptr->print();
    delete ptr;
    // point derived class' object with ptr pointer
    ptr = new Derived();
    ptr->print();
    delete ptr;
    return 0;
}