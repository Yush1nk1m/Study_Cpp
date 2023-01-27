#include "05.h"

Date::Date(int year, int month, int day)
: year(year), month(month), day(day)
{
    int daysInMonths[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    assert(day <= daysInMonths[month]);
}

Date::~Date()
{
}

int Date::getDay() const
{
    return day;
}

int Date::getMonth() const
{
    return month;
}

int Date::getYear() const
{
    return year;
}

void Date::printDate() const
{
    cout << year << " / " << month << " / " << day << endl;
}

Employee::Employee(string name, long employeeNumber, Date birthDate, Date dateHired)
: name(name), employeeNumber(employeeNumber), birthDate(birthDate), dateHired(dateHired)
{
}

Employee::~Employee()
{
}

void Employee::printInfo() const
{
    cout << "Employee information" << endl;
    cout << "Name : " << name << endl;
    cout << "Employee number : " << employeeNumber << endl;
    cout << "Date of birth : "; birthDate.printDate();
    cout << "Hired date : "; dateHired.printDate();
}

Salaried::Salaried(string name, long employeeNumber, Date birthDate, Date dateHired, double monthlySalary, double annualBonus)
: Employee(name, employeeNumber, birthDate, dateHired), monthlySalary(monthlySalary), annualBonus(annualBonus)
{
    assert(annualBonus >= 0.0 && annualBonus <= 0.1);
}

Salaried::~Salaried()
{
}

void Salaried::printInfo() const
{
    Employee::printInfo();
    cout << "Monthly salary : " << monthlySalary << endl;
    cout << "Annual bonus : " << annualBonus << endl;
}

Hourly::Hourly(string name, long employeeNumber, Date birthDate, Date dateHired, double hourlyWage, double overtimeRate)
: Employee(name, employeeNumber, birthDate, dateHired), hourlyWage(hourlyWage), overtimeRate(overtimeRate)
{
    assert(overtimeRate >= 0.5 && overtimeRate <= 1.0);
}

Hourly::~Hourly()
{
}

void Hourly::printInfo() const
{
    Employee::printInfo();
    cout << "Hourly wage : " << hourlyWage << endl;
    cout << "Overtime rate : " << overtimeRate << endl;
}