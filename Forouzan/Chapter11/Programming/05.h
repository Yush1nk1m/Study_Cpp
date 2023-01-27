#include <iostream>
#include <cassert>
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        long employeeNumber;
        Date birthDate;
        Date dateHired;
    public:
        Employee(string name, long employeeNumber, Date birthDate, Date dateHired);
        ~Employee();
        void printInfo() const;
};

class Salaried : public Employee
{
    private:
        double monthlySalary;
        double annualBonus;
    public:
        Salaried(string name, long employeeNumber, Date birthDate, Date dateHired, double monthlySalary, double annualBonus);
        ~Salaried();
        void printInfo() const;
};

class Hourly : public Employee
{
    private:
        double hourlyWage;
        double overtimeRate;
    public:
        Hourly(string name, long employeeNumber, Date birthDate, Date dateHired, double hourlyWage, double overtimeRate);
        ~Hourly();
        void printInfo() const;
};

class Date
{
    private:
        int year;
        int month;
        int day;
    public:
        Date(int year, int month, int day);
        Date(const Date& date);
        ~Date();
        int getYear() const;
        int getMonth() const;
        int getDay() const;
        void printDate() const;
};