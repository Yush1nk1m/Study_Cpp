#include "04.h"
using namespace std;

Person::Person(string name, int age)
: name(name), age(age)
{
}

Person::~Person()
{
}

string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

void Person::setName(string name)
{
    this->name = name;
}

void Person::setAge(int age)
{
    this->age = age;
}