#include "02.h"

int main()
{
    SalaryEmployee se("Yushin", "K", "Kim", 10000.00);
    HourlyEmployee he("Yushin", "K", "Kim", 10.00);
    SalaryHourlyEmployee she("Yushin", "K", "Kim", 10000.00, 10.00);

    se.print();
    cout << endl;

    he.print();
    cout << endl;

    she.print();
    cout << endl;

    return 0;
}