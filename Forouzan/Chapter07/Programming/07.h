#include <iostream>
using namespace std;

class Employee
{
    private:
        string name;
        int age;
        int serviceYear;
        double salary;
    public:
        Employee(string name, int age, int serviceYear, double salary);
        ~Employee();
        string getName() const;
        int getAge() const;
        int getServiceYear() const;
        double getSalary() const;
};