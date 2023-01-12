#include "04.h"
using namespace std;

int main()
{
    Person person("Yushin", 23);
    cout << "Name : " << person.getName() << endl;
    cout << "Age : " << person.getAge() << endl << endl;

    person.setName("Yushin, Kim");
    person.setAge(22);
    cout << "New Name : " << person.getName() << endl;
    cout << "New age : " << person.getAge() << endl << endl;

    return 0;
}