/****************************************************************************
 * A program which creates Person object and Student object                 *
 * that extends Person class and uses them based on 'Student is a person'   *
****************************************************************************/
#include <iostream>
#include <cassert>
#include <string>
using namespace std;
/****************************
 * Person class definition  *
****************************/
class Person
{
    private:
        long identity;
    public:
        void setId(long identity);
        long getId() const;
};
/****************************************************
 * definition of a function setId in Person class   *
****************************************************/
void Person::setId(long id)
{
    identity = id;
    assert(identity >= 100000000 && identity <= 999999999);
}
/****************************************************
 * definition of a function getId in Person class   *
****************************************************/
long Person::getId() const
{
    return identity;
}
/****************************
 * Student class definition *
****************************/
class Student : public Person
{
    private:
        double gpa;
    public:
        void setGPA(double gpa);
        double getGPA() const;
};
/****************************************************
 * definition of a function setGPA in Student class *
****************************************************/
void Student::setGPA(double gp)
{
    gpa = gp;
    assert(gpa >= 0 && gpa <= 4.0);
}
/****************************************************
 * definition of a function getGPA in Student class *
****************************************************/
double Student::getGPA() const
{
    return gpa;
}
/********************************************************************
 * An application function(main function) which uses two classes    *
********************************************************************/
int main()
{
    // instantiate and use Person class
    Person person;
    person.setId(111111111L);
    cout << "Information for a Person object :" << endl;
    cout << "Identity number of a person : " << person.getId();
    cout << endl << endl;
    // instantiate and use Student class
    Student student;
    student.setId(222222222L);
    student.setGPA(3.9);
    cout << "Information for a Student object :" << endl;
    cout << "Identity number of a student : " << student.getId() << endl;
    cout << "GPA of the student : " << student.getGPA() << endl;
    return 0;
}