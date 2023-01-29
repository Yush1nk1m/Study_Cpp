#include "01.h"

int main()
{
    Employee* ptr;
    
    ptr = new SalaryEmployee("Yushin", "K", "Kim", 10000.00);
    ptr->print();
    cout << endl;
    delete ptr;

    ptr = new HourlyEmployee("Yushin", "K", "Kim", 10.00);
    ptr->print();
    cout << endl;
    delete ptr;

    return 0;
}