/********************************************
 * An application file which uses Fun class *
********************************************/
#include "fun.cpp"

int main()
{
    // create instances of a class with different data types
    Fun<int> Fun1(23);
    Fun<double> Fun2(12.7);
    Fun<char> Fun3('A');
    Fun<string> Fun4("Hello");
    // print the values of each classes
    cout << "Fun1 : " << Fun1.get() << endl;
    cout << "Fun2 : " << Fun2.get() << endl;
    cout << "Fun3 : " << Fun3.get() << endl;
    cout << "Fun4 : " << Fun4.get() << endl;
    // set values
    Fun1.set(47);
    Fun3.set('B');
    // print the values after calling
    cout << "Fun1 after calling set : " << Fun1.get() << endl;
    cout << "Fun3 after calling set : " << Fun3.get() << endl;
    return 0;
}