#include "01.h"

Employee::Employee(string firstName, string initial, string lastName)
: firstName(firstName), initial(initial), lastName(lastName)
{
}

Employee::~Employee()
{
}

SalaryEmployee::SalaryEmployee(string firstName, string initial, string lastName, double fixedSalary)
: Employee(firstName, initial, lastName), fixedSalary(fixedSalary)
{
}

SalaryEmployee::~SalaryEmployee()
{
}

void SalaryEmployee::print() const
{
    cout << "Salary Employee Object" << endl;
    cout << "Name : " << firstName << " " << initial << ". " << lastName << endl;
    cout << "Fixed salary : " << fixedSalary << endl;
}

HourlyEmployee::HourlyEmployee(string firstName, string initial, string lastName, double monthlySalary)
: Employee(firstName, initial, lastName), monthlySalary(monthlySalary)
{
}

HourlyEmployee::~HourlyEmployee()
{
}

void HourlyEmployee::print() const
{
    cout << "Hourly Employee Object" << endl;
    cout << "Name : " << firstName << " " << initial << ". " << lastName << endl;
    cout << "Monthly salary : " << monthlySalary << endl;
}