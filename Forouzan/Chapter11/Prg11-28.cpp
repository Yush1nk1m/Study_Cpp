/************************************************
 * An application file which uses Invoice class *
************************************************/
#include "invoice.h"

int main()
{
    // Product object instantiation
    Product product1("Table", 150.00);
    Product product2("Chair", 80.00);
    // instantiate Invoice object and output with Product object
    Invoice invoice(1001);
    invoice.add(1, product1);
    invoice.add(6, product2);
    invoice.print();
    return 0;
}