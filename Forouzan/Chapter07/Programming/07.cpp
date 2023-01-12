#include "07.h"

Employee::Employee(string name, int age, int serviceYear, double salary)
: name(name), age(age), serviceYear(serviceYear), salary(salary)
{
}

Employee::~Employee()
{
}

string Employee::getName() const
{
    return name;
}

int Employee::getAge() const
{
    return age;
}

int Employee::getServiceYear() const
{
    return serviceYear;
}

double Employee::getSalary() const
{
    return salary;
}