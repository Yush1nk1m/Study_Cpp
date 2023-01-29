#include "02.h"

Employee::Employee(string firstName, string initial, string lastName)
: firstName(firstName), initial(initial), lastName(lastName)
{
}

Employee::~Employee()
{
}

SalaryEmployee::SalaryEmployee(string firstName, string initial, string lastName, double fixedSalary)
: Employee(firstName, initial, lastName)
{
    this->fixedSalary = fixedSalary;
}

SalaryEmployee::~SalaryEmployee()
{
}

void SalaryEmployee::print() const
{
    cout << "Salary Employee Object" << endl;
    cout << "Name : " << firstName << " " << initial << ". " << lastName << endl;
    printSalary();
}

void SalaryEmployee::printSalary() const
{
    cout << "Fixed salary : " << fixedSalary << endl;
}

HourlyEmployee::HourlyEmployee(string firstName, string initial, string lastName, double monthlySalary)
: Employee(firstName, initial, lastName)
{
    this->monthlySalary = monthlySalary;
}

HourlyEmployee::~HourlyEmployee()
{
}

void HourlyEmployee::print() const
{
    cout << "Hourly Employee Object" << endl;
    cout << "Name : " << firstName << " " << initial << ". " << lastName << endl;
    printMSalary();
}

void HourlyEmployee::printMSalary() const
{
    cout << "Monthly salary : " << monthlySalary << endl;
}

SalaryHourlyEmployee::SalaryHourlyEmployee(string firstName, string initial, string lastName, double fixedSalary, double monthlySalary)
: Employee(firstName, initial, lastName)
{
    this->fixedSalary = fixedSalary;
    this->monthlySalary = monthlySalary;
}

SalaryHourlyEmployee::~SalaryHourlyEmployee()
{
}

void SalaryHourlyEmployee::print() const
{
    cout << "Salary Hourly Employee Object" << endl;
    cout << "Name : " << firstName << " " << initial << ". " << lastName << endl;
    printSalary();
    printMSalary();
}

void SalaryHourlyEmployee::printSalary() const
{
    cout << "Fixed salary : " << fixedSalary << endl;
}

void SalaryHourlyEmployee::printMSalary() const
{
    cout << "Monthly salary : " << monthlySalary << endl;
}