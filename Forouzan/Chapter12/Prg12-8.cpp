/************************************************************
 * A program which examines an example of practical usage   *
 * of polymorphism with pointer array                       *
************************************************************/
#include "student.h"

int main()
{
    // declare an array of polymorphism variables(pointers)
    Person* ptr[4];
    // instantiation 4 objects in the heap
    ptr[0] = new Student("Joe", 3.7);
    ptr[1] = new Student("John", 3.9);
    ptr[2] = new Person("Bruce");
    ptr[3] = new Person("Sue");
    // call each object's virtual function
    for (int i = 0; i < 4; i++)
    {
        ptr[i]->print();
        cout << endl;
    }
    // delete objects in the heap
    for (int i = 0; i < 4; i++)
    {
        delete ptr[i];
    }
    return 0;
}