#include <iostream>
#include <string>
using namespace std;

class Employee
{
    protected:
        string firstName;
        string initial;
        string lastName;
    public:
        Employee(string firstName, string initial, string lastName);
        virtual ~Employee();
        virtual void print() const = 0;
};

class SalaryEmployee : public Employee
{
    private:
        double fixedSalary;
    public:
        SalaryEmployee(string firstName, string initial, string lastName, double fixedSalary);
        ~SalaryEmployee();
        void print() const;
};

class HourlyEmployee : public Employee
{
    private:
        double monthlySalary;
    public:
        HourlyEmployee(string firstName, string initial, string lastName, double monthlySalary);
        ~HourlyEmployee();
        void print() const;
};