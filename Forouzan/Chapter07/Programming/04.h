#include <iostream>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        Person(string name, int age);
        ~Person();
        string getName() const;
        int getAge() const;
        void setName(string name);
        void setAge(int age);
};