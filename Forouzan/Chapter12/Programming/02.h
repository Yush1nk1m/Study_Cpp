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

class SalaryType
{
    protected:
        double fixedSalary;
    public:
        virtual void printSalary() const = 0;
};

class HourlyType
{
    protected:
        double monthlySalary;
    public:
        virtual void printMSalary() const = 0;
};

class SalaryEmployee : public Employee, public SalaryType
{
    public:
        SalaryEmployee(string firstName, string initial, string lastName, double fixedSalary);
        ~SalaryEmployee();
        void print() const;
        void printSalary() const;
};

class HourlyEmployee : public Employee, public HourlyType
{
    public:
        HourlyEmployee(string firstName, string initial, string lastName, double monthlySalary);
        ~HourlyEmployee();
        void print() const;
        void printMSalary() const;
};

class SalaryHourlyEmployee : public Employee, public SalaryType, public HourlyType
{
    public:
        SalaryHourlyEmployee(string firstName, string initial, string lastName, double fixedSalary, double monthlySalary);
        ~SalaryHourlyEmployee();
        void print() const;
        void printSalary() const;
        void printMSalary() const;
};